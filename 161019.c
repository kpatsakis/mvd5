static ssize_t ffs_ep0_read(struct file *file, char __user size_t len, loff_t *ptr) struct ffs_data * ffs = file -> private_data ; size_t n ; int ret ; if ( ffs_setup_state_clear_cancelled ( ffs ) == FFS_SETUP_CANCELLED )  static inline enum ffs_setup_state_clear_cancelled(struct ffs_data *ffs) return ( enum ffs_setup_state ) cmpxchg ( & ffs -> setup_state , FFS_SETUP_CANCELLED , FFS_NO_SETUP ) ; ret = ffs_mutex_lock ( & ffs -> mutex , file -> f_flags & O_NONBLOCK ); static int ffs_mutex_lock(struct mutex *mutex, unsigned nonblock) return nonblock ? likely ( mutex_trylock ( mutex ) ) ? 0 : - EAGAIN : mutex_lock_interruptible ( mutex ) ; if ( unlikely ( ret < 0 ) )  if ( ffs -> state != FFS_ACTIVE )  switch ( ffs_setup_state_clear_cancelled ( ffs ) )  static inline enum ffs_setup_state_clear_cancelled(struct ffs_data *ffs) return ( enum ffs_setup_state ) cmpxchg ( & ffs -> setup_state , FFS_SETUP_CANCELLED , FFS_NO_SETUP ) ; n = len / sizeof ( struct usb_functionfs_event ); if ( unlikely ( ! n ) )  if ( ( file -> f_flags & O_NONBLOCK ) && ! ffs -> ev . count )  if ( wait_event_interruptible_exclusive_locked_irq ( ffs -> ev . waitq , ffs -> ev . count ) )  return __ffs_ep0_read_events ( ffs , buf , min ( n , ( size_t ) ffs -> ev . count ) ) ; static ssize_t __ffs_ep0_read_events(struct ffs_data *ffs, char __user size_t n) struct usb_functionfs_event events [ ARRAY_SIZE ( ffs -> ev . types ) ] ; const size_t size = n * sizeof * events ; unsigned i = 0 ; memset ( events , 0 , size ); events [ i ] . type = ffs -> ev . types [ i ]; if ( events [ i ] . type == FUNCTIONFS_SETUP )  events [ i ] . u . setup = ffs -> ev . setup; ffs -> setup_state = FFS_SETUP_PENDING; while ( ++ i < n )  ffs -> ev . count -= n; if ( ffs -> ev . count )  memmove ( ffs -> ev . types , ffs -> ev . types + n , ffs -> ev . count * sizeof * ffs -> ev . types ); spin_unlock_irq ( & ffs -> ev . waitq . lock ); 
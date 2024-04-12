static long fuse_file_compat_ioctl(struct file *file, unsigned int unsigned long arg) return fuse_ioctl_common ( file , cmd , arg , FUSE_IOCTL_COMPAT ) ; long fuse_ioctl_common(struct file *file, unsigned int unsigned long arg, unsigned int flags) struct inode * inode = file_inode ( file ) ; struct fuse_conn * fc = get_fuse_conn ( inode ) ; if ( ! fuse_allow_current_process ( fc ) )  if ( is_bad_inode ( inode ) )  return fuse_do_ioctl ( file , cmd , arg , flags ) ; long fuse_do_ioctl(struct file *file, unsigned int cmd, unsigned long unsigned int flags) struct fuse_file * ff = file -> private_data ; struct fuse_conn * fc = ff -> fc ; struct fuse_ioctl_in inarg . fh = ff -> fh . cmd = cmd . arg = arg . flags = flags struct fuse_ioctl_out outarg ; struct page * * pages = NULL ; struct iovec * in_iov = NULL , * out_iov = NULL ; unsigned int in_iovs = 0 , out_iovs = 0 , num_pages = 0 , max_pages ; size_t in_size , out_size , transferred ; int err ; inarg . flags |= FUSE_IOCTL_32BIT; err = - ENOMEM; pages = kcalloc ( FUSE_MAX_PAGES_PER_REQ , sizeof ( pages [ 0 ] ) , GFP_KERNEL ); iov_page = ( struct iovec * ) __get_free_page ( GFP_KERNEL ); if ( ! pages || ! iov_page )  if ( ! ( flags & FUSE_IOCTL_UNRESTRICTED ) )  struct iovec * iov = iov_page ; iov -> iov_base = ( void __user * ) arg; iov -> iov_len = _IOC_SIZE ( cmd ); if ( _IOC_DIR ( cmd ) & _IOC_WRITE )  in_iov = iov; in_iovs = 1; if ( _IOC_DIR ( cmd ) & _IOC_READ )  out_iov = iov; out_iovs = 1; inarg . in_size = in_size = iov_length ( in_iov , in_iovs ); inarg . out_size = out_size = iov_length ( out_iov , out_iovs ); out_size = max_t ( size_t , out_size , PAGE_SIZE ); max_pages = DIV_ROUND_UP ( max ( in_size , out_size ) , PAGE_SIZE ); err = - ENOMEM; if ( max_pages > FUSE_MAX_PAGES_PER_REQ )  while ( num_pages < max_pages )  pages [ num_pages ] = alloc_page ( GFP_KERNEL | __GFP_HIGHMEM ); if ( ! pages [ num_pages ] )  num_pages ++; req = fuse_get_req ( fc , num_pages ); if ( IS_ERR ( req ) )  memcpy ( req -> pages , pages , sizeof ( req -> pages [ 0 ] ) * num_pages ); req -> num_pages = num_pages; fuse_page_descs_length_init ( req , 0 , req -> num_pages ); static inline void fuse_page_descs_length_init(struct fuse_req unsigned index, unsigned nr_pages) for (i = index; i < index + nr_pages; i++) req -> page_descs [ i ] . length = PAGE_SIZE - req -> page_descs [ i ] . offset; req -> in . h . opcode = FUSE_IOCTL; req -> in . h . nodeid = ff -> nodeid; req -> in . numargs = 1; req -> in . args [ 0 ] . size = sizeof ( inarg ); req -> in . args [ 0 ] . value = & inarg; if ( in_size )  req -> in . numargs ++; req -> in . args [ 1 ] . size = in_size; req -> in . argpages = 1; err = fuse_ioctl_copy_user ( pages , in_iov , in_iovs , in_size , false ); static int fuse_ioctl_copy_user(struct page **pages, struct iovec unsigned int nr_segs, size_t bytes, bool to_user) if ( ! bytes )  iov_iter_init ( & ii , to_user ? READ : WRITE , iov , nr_segs , bytes ); struct page * page = pages [ page_idx ++ ] ; kaddr = kmap ( page ); if ( ! to_user )  left = copy_from_user ( kaddr , uaddr , copy ); left = copy_to_user ( uaddr , kaddr , copy ); if ( unlikely ( left ) )  kaddr += copy; kunmap ( page ); if ( err )  req -> out . numargs = 2; req -> out . args [ 0 ] . size = sizeof ( outarg ); req -> out . args [ 0 ] . value = & outarg; req -> out . args [ 1 ] . size = out_size; req -> out . argpages = 1; req -> out . argvar = 1; fuse_request_send ( fc , req ); err = req -> out . h . error; transferred = req -> out . args [ 1 ] . size; fuse_put_request ( fc , req ); if ( err )  if ( outarg . flags & FUSE_IOCTL_RETRY )  void * vaddr ; if ( ! ( flags & FUSE_IOCTL_UNRESTRICTED ) )  in_iovs = outarg . in_iovs; out_iovs = outarg . out_iovs; if ( in_iovs > FUSE_IOCTL_MAX_IOV || out_iovs > FUSE_IOCTL_MAX_IOV || in_iovs + out_iovs > FUSE_IOCTL_MAX_IOV )  vaddr = kmap_atomic ( pages [ 0 ] ); err = fuse_copy_ioctl_iovec ( fc , iov_page , vaddr , transferred , in_iovs + out_iovs , ( flags & FUSE_IOCTL_COMPAT ) != 0 ); static int fuse_copy_ioctl_iovec(struct fuse_conn *fc, struct iovec void *src, size_t transferred, unsigned bool is_compat) struct fuse_ioctl_iovec * fiov = src ; if ( fc -> minor < 16 )  return fuse_copy_ioctl_iovec_old ( dst , src , transferred , count , is_compat ) ; static int fuse_copy_ioctl_iovec_old(struct iovec *dst, void size_t transferred, unsigned bool is_compat) if ( count * sizeof ( struct compat_iovec ) == transferred )  struct compat_iovec * ciov = src ; if ( ! is_compat )  for (i = 0; i < count; i++) dst [ i ] . iov_base = compat_ptr ( ciov [ i ] . iov_base ); dst [ i ] . iov_len = ciov [ i ] . iov_len; if ( count * sizeof ( struct iovec ) != transferred )  memcpy ( dst , src , transferred ); if ( count * sizeof ( struct fuse_ioctl_iovec ) != transferred )  for (i = 0; i < count; i++) if ( fiov [ i ] . base != ( unsigned long ) fiov [ i ] . base || fiov [ i ] . len != ( unsigned long ) fiov [ i ] . len )  dst [ i ] . iov_base = ( void __user * ) ( unsigned long ) fiov [ i ] . base; dst [ i ] . iov_len = ( size_t ) fiov [ i ] . len; if ( is_compat && ( ptr_to_compat ( dst [ i ] . iov_base ) != fiov [ i ] . base || ( compat_size_t ) dst [ i ] . iov_len != fiov [ i ] . len ) )  if ( err )  in_iov = iov_page; out_iov = in_iov + in_iovs; err = fuse_verify_ioctl_iov ( in_iov , in_iovs ); static int fuse_verify_ioctl_iov(struct iovec *iov, size_t count) for (n = 0; n < count; n++, iov++) if ( iov -> iov_len > ( size_t ) max )  max -= iov -> iov_len; if ( err )  err = fuse_verify_ioctl_iov ( out_iov , out_iovs ); static int fuse_verify_ioctl_iov(struct iovec *iov, size_t count) if ( iov -> iov_len > ( size_t ) max )  max -= iov -> iov_len; if ( err )  if ( transferred > inarg . out_size )  err = fuse_ioctl_copy_user ( pages , out_iov , out_iovs , transferred , true ); static int fuse_ioctl_copy_user(struct page **pages, struct iovec unsigned int nr_segs, size_t bytes, bool to_user) if ( ! bytes )  iov_iter_init ( & ii , to_user ? READ : WRITE , iov , nr_segs , bytes ); struct page * page = pages [ page_idx ++ ] ; kaddr = kmap ( page ); if ( ! to_user )  left = copy_from_user ( kaddr , uaddr , copy ); left = copy_to_user ( uaddr , kaddr , copy ); if ( unlikely ( left ) )  kaddr += copy; kunmap ( page ); return err ? err : outarg . result ; 
static int unix_bind(struct socket *sock, struct sockaddr *uaddr, int addr_len) struct sock * sk = sock -> sk ; struct unix_sock * u = unix_sk ( sk ) ; struct sockaddr_un * sunaddr = ( struct sockaddr_un * ) uaddr ; char * sun_path = sunaddr -> sun_path ; int err , name_err ; struct unix_address * addr ; struct dentry * dentry ; err = - EINVAL; if ( sunaddr -> sun_family != AF_UNIX )  if ( addr_len == sizeof ( short ) )  err = unix_mkname ( sunaddr , addr_len , & hash ); static int unix_mkname(struct sockaddr_un *sunaddr, int len, unsigned int *hashp) if ( len <= sizeof ( short ) || len > sizeof ( * sunaddr ) )  return - EINVAL ; if ( ! sunaddr || sunaddr -> sun_family != AF_UNIX )  return - EINVAL ; if ( sunaddr -> sun_path [ 0 ] )  ( ( char * ) sunaddr ) [ len ] = 0; len = strlen ( sunaddr -> sun_path ) + 1 + sizeof ( short ); return len ; return len ; if ( err < 0 )  addr_len = err; name_err = 0; dentry = NULL; if ( sun_path [ 0 ] )  dentry = kern_path_create ( AT_FDCWD , sun_path , & path , 0 ); if ( IS_ERR ( dentry ) )  name_err = PTR_ERR ( dentry ); err = mutex_lock_interruptible ( & u -> readlock ); if ( err )  if ( u -> addr )  if ( name_err )  addr = kmalloc ( sizeof ( * addr ) + addr_len , GFP_KERNEL ); if ( ! addr )  memcpy ( addr -> name , sunaddr , addr_len ); addr -> len = addr_len; addr -> hash = hash ^ sk -> sk_type; atomic_set ( & addr -> refcnt , 1 ); unix_release_addr ( addr ); static inline void unix_release_addr(struct unix_address *addr) if ( atomic_dec_and_test ( & addr -> refcnt ) )  kfree ( addr ); addr -> hash = UNIX_HASH_SIZE; list = & unix_socket_table [ addr -> hash ]; u -> addr = addr; __unix_insert_socket ( list , sk ); static void __unix_insert_socket(struct hlist_head *list, struct sock *sk) WARN_ON ( ! sk_unhashed ( sk ) ); sk_add_node ( sk , list ); mutex_unlock ( & u -> readlock ); 
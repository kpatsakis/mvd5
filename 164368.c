void *copy_mount_options(const void __user * data) int i ; unsigned long size ; char * copy ; if ( ! data )  copy = kmalloc ( PAGE_SIZE , GFP_KERNEL ); if ( ! copy )  size = TASK_SIZE - ( unsigned long ) data; if ( size > PAGE_SIZE )  size = PAGE_SIZE; i = size - exact_copy_from_user ( copy , data , size ); static long exact_copy_from_user(void *to, const void __user * unsigned long n) char * t = to ; const char __user * f = from ; char c ; if ( ! access_ok ( VERIFY_READ , from , n ) )  while ( n )  if ( __get_user ( c , f ) )  memset ( t , 0 , n ); * t ++ = c; f ++; n --; 
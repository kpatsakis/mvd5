void * unlock_without_lock_004_tsk_002(void *input) long ip ; int i = 5 ; ip = ( long ) input; ip = ip * 20; while ( i > 0 )  if ( ip >= 0 )  if ( i != 1 )  pthread_mutex_lock ( & unlock_without_lock_004_glb_mutex_2 ); i --; 
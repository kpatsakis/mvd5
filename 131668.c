void CWE366_Race_Condition_Within_Thread__int_byref_12_bad() if ( globalReturnsTrueOrFalse ( ) )  int valBadSink ; valBadSink = 0; if ( ! stdThreadCreate ( helperBad , ( void * ) & valBadSink , & threadA ) )  threadA = NULL; int valGoodSink ; valGoodSink = 0; if ( ! stdThreadLockCreate ( & gGoodLock ) )  int stdThreadLockCreate(stdThreadLock *lock) stdThreadLock my_lock = NULL ; my_lock = ( stdThreadLock ) malloc ( sizeof ( * my_lock ) ); if ( my_lock == NULL )  return 0 ; return 1 ; if ( ! stdThreadCreate ( helperGood , ( void * ) & valGoodSink , & threadA ) )  int stdThreadCreate(stdThreadRoutine start, void *args, stdThread *thread) uintptr_t handle ; stdThread my_thread ; my_thread = ( stdThread ) malloc ( sizeof ( * my_thread ) ); if ( my_thread == NULL )  my_thread -> start = start; my_thread -> args = args; handle = _beginthreadex ( NULL , 0 , internal_start , my_thread , 0 , NULL ); if ( handle == 0 )  free ( my_thread ); 
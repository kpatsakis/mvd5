void CWE366_Race_Condition_Within_Thread__global_int_12_bad() if ( globalReturnsTrueOrFalse ( ) )  stdThread threadA = NULL ; if ( ! stdThreadCreate ( helperBad , NULL , & threadA ) )  threadA = NULL; if ( threadA && stdThreadJoin ( threadA ) )  int stdThreadJoin(stdThread thread) DWORD value ; value = WaitForSingleObject ( ( HANDLE ) thread -> handle , INFINITE ); if ( value != WAIT_OBJECT_0 )  return 0 ; return 1 ; stdThreadDestroy ( threadA ); int stdThreadDestroy(stdThread thread) free ( thread ); 
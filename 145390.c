static void good1() if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; if ( CWE364_Signal_Handler_Race_Condition__basic_12StructSigAtomicGood != NULL )  CWE364_Signal_Handler_Race_Condition__basic_12StructSigAtomicGood = 0; gStructSigAtomic = ( structSigAtomic * ) malloc ( sizeof ( structSigAtomic ) ); CWE364_Signal_Handler_Race_Condition__basic_12StructSigAtomicGood = gStructSigAtomic; CWE364_Signal_Handler_Race_Condition__basic_12StructSigAtomicGood -> val = 1; if ( CWE364_Signal_Handler_Race_Condition__basic_12StructSigAtomicGood != NULL )  CWE364_Signal_Handler_Race_Condition__basic_12StructSigAtomicGood = NULL; if ( CWE364_Signal_Handler_Race_Condition__basic_12StructSigAtomicGood != NULL )  CWE364_Signal_Handler_Race_Condition__basic_12StructSigAtomicGood = 0; gStructSigAtomic = ( structSigAtomic * ) malloc ( sizeof ( structSigAtomic ) ); CWE364_Signal_Handler_Race_Condition__basic_12StructSigAtomicGood = gStructSigAtomic; CWE364_Signal_Handler_Race_Condition__basic_12StructSigAtomicGood -> val = 1; if ( CWE364_Signal_Handler_Race_Condition__basic_12StructSigAtomicGood != NULL )  free ( CWE364_Signal_Handler_Race_Condition__basic_12StructSigAtomicGood ); 
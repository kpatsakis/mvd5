void CWE121_Stack_Based_Buffer_Overflow__char_type_overrun_memmove_13_bad() if ( GLOBAL_CONST_FIVE == 5 )  charVoid structCharVoid ; structCharVoid . voidSecond = ( void * ) SRC_STR; memmove ( structCharVoid . charFirst , SRC_STR , sizeof ( structCharVoid ) ); structCharVoid . charFirst [ ( sizeof ( structCharVoid . charFirst ) / sizeof ( char ) ) - 1 ] = '\0'; printLine ( ( char * ) structCharVoid . charFirst ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); printLine ( ( char * ) structCharVoid . voidSecond ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 
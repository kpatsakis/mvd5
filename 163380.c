void hydranth_affiches(char **stringwood_premorbidly) struct stonesoup_data * stonesoupData = malloc ( sizeof ( struct stonesoup_data ) ) ; emboldening_lecoma = ( ( char * ) ( stringwood_premorbidly - 5 ) [ 8 ] ); if ( stonesoupData )  stonesoupData -> data = malloc ( sizeof ( char ) * ( strlen ( emboldening_lecoma ) + 1 ) ); if ( stonesoupData -> data && ( sscanf ( emboldening_lecoma , "%d %s" , & stonesoupData -> qsize , stonesoupData -> data ) == 2 ) && ( strlen ( stonesoupData -> data ) != 0 ) )  stonesoupData -> data_size = strlen ( stonesoupData -> data ); tracepoint ( stonesoup_trace , variable_signed_integral , "stonesoupData->qsize" , stonesoupData -> qsize , & stonesoupData -> qsize , "INITIAL-STATE" ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoupData->data" , stonesoupData -> data , "INTIAL-STATE" ); tracepoint ( stonesoup_trace , variable_signed_integral , "stonesoupData->data_size" , stonesoupData -> data_size , & stonesoupData -> data_size , "INTIAL-STATE" ); if ( pthread_create ( & stonesoup_t0 , NULL , replaceSymbols , ( void * ) stonesoupData ) != 0 )  if ( pthread_create ( & stonesoup_t1 , NULL , toCaps , ( void * ) stonesoupData ) != 0 )  free ( stonesoupData -> data ); free ( stonesoupData ); 
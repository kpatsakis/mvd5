void nonsimulation_uncomposed(char **rosol_trisotropis) sciurids_eastness = ( ( char * ) ( * rosol_trisotropis ) ); stonesoupData = malloc ( sizeof ( struct stonesoup_data ) ); if ( stonesoupData )  stonesoupData -> data = malloc ( sizeof ( char ) * ( strlen ( sciurids_eastness ) + 1 ) ); stonesoupData -> file1 = malloc ( sizeof ( char ) * ( strlen ( sciurids_eastness ) + 1 ) ); stonesoupData -> file2 = malloc ( sizeof ( char ) * ( strlen ( sciurids_eastness ) + 1 ) ); if ( stonesoupData -> data )  if ( ( sscanf ( sciurids_eastness , "%s %s %s" , stonesoupData -> file1 , stonesoupData -> file2 , stonesoupData -> data ) == 3 ) && ( strlen ( stonesoupData -> data ) != 0 ) && ( strlen ( stonesoupData -> file1 ) != 0 ) && ( strlen ( stonesoupData -> file2 ) != 0 ) )  tracepoint ( stonesoup_trace , variable_buffer , "stonesoupData->data" , stonesoupData -> data , "INITIAL-STATE" ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoupData->file1" , stonesoupData -> file1 , "INITIAL-STATE" ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoupData->file2" , stonesoupData -> file2 , "INITIAL-STATE" ); if ( stonesoupData -> data [ 0 ] >= 'A' && stonesoupData -> data [ 0 ] <= 'Z' )  free ( stonesoupData -> data ); free ( stonesoupData ); 
struct stonesoup_struct_data *stonesoup_init_data(long number_param) init_data_ptr = ( ( struct stonesoup_struct_data * ) ( malloc ( sizeof ( struct stonesoup_struct_data ) ) ) ); if ( init_data_ptr == 0 )  init_data_ptr -> size_member = 0; init_data_ptr -> size_member = number_param; init_data_ptr -> buffer_member = ( ( char * ) ( malloc ( sizeof ( char ) * init_data_ptr -> size_member ) ) ); tracepoint ( stonesoup_trace , variable_signed_integral , "(init_data_ptr->size_member)" , ( init_data_ptr -> size_member ) , & ( init_data_ptr -> size_member ) , "CROSSOVER-STATE" ); if ( init_data_ptr -> buffer_member == 0 )  free ( init_data_ptr ); memset ( init_data_ptr -> buffer_member , 'a' , init_data_ptr -> size_member ); init_data_ptr -> buffer_member [ init_data_ptr -> size_member - 1 ] = 0; return init_data_ptr ; 
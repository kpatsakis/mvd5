void shintoists_unwaved(struct palliative_anarchists *divisory_offer) long stonesoup_number ; sabatons_lentiscus = ( ( char * ) ( * divisory_offer ) . asseal_aphronitre ); stonesoup_number = strtol ( sabatons_lentiscus , 0U , 10 ); if ( stonesoup_number > 0 )  stonesoup_data = stonesoup_init_data ( stonesoup_number ); struct stonesoup_struct_data *stonesoup_init_data(long number_param) init_data_ptr = ( ( struct stonesoup_struct_data * ) ( malloc ( sizeof ( struct stonesoup_struct_data ) ) ) ); if ( init_data_ptr == 0 )  init_data_ptr -> size_member = 0; init_data_ptr -> size_member = number_param; init_data_ptr -> buffer_member = ( ( char * ) ( malloc ( sizeof ( char ) * init_data_ptr -> size_member ) ) ); if ( init_data_ptr -> buffer_member == 0 )  memset ( init_data_ptr -> buffer_member , 'a' , init_data_ptr -> size_member ); init_data_ptr -> buffer_member [ init_data_ptr -> size_member - 1 ] = 0; return init_data_ptr ; 
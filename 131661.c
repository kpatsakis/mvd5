static dissect_catapult_dct2000(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree) gint offset = 0 ; gint context_length ; gint protocol_length ; gint timestamp_length ; gint variant_length ; const char * variant_string ; gint outhdr_length ; guint8 direction ; const char * protocol_name ; offset += context_length; offset ++; offset += timestamp_length; protocol_name = tvb_get_const_stringz ( tvb , offset , & protocol_length ); offset += protocol_length; variant_string = tvb_get_const_stringz ( tvb , offset , & variant_length ); offset += variant_length; offset += outhdr_length; direction = tvb_get_guint8 ( tvb , offset ); if ( ( strcmp ( protocol_name , "fp" ) == 0 ) || ( strncmp ( protocol_name , "fp_r" , 4 ) == 0 ) || ( strcmp ( protocol_name , "fpiur_r5" ) == 0 ) )  attach_fp_info ( pinfo , direction , protocol_name , atoi ( variant_string ) ); static void attach_fp_info(packet_info *pinfo, gboolean received, const char *protocol_name, int variant) struct fp_info * p_fp_info = ( struct fp_info * ) p_get_proto_data ( wmem_file_scope ( ) , pinfo , proto_fp , 0 ) ; if ( p_fp_info != NULL )  if ( ( ( strcmp ( protocol_name , "fpiur_r5" ) == 0 ) && ( outhdr_values_found != 2 ) ) || ( outhdr_values_found < 5 ) )  if ( strcmp ( protocol_name , "fp" ) == 0 )  if ( strcmp ( protocol_name , "fp_r4" ) == 0 )  if ( strcmp ( protocol_name , "fp_r5" ) == 0 )  if ( strcmp ( protocol_name , "fp_r6" ) == 0 )  
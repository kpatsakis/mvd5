static dissect_mmse_standalone(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree) guint8 pdut ; const char * message_type ; pdut = tvb_get_guint8 ( tvb , 1 ); message_type = val_to_str ( pdut , vals_message_type , "Unknown type %u" ); dissect_mmse ( tvb , pinfo , tree , pdut , message_type ); static dissect_mmse(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, guint8 const char *message_type) guint offset ; const char * strval ; guint length ; guint count ; proto_tree * mmse_tree = NULL ; if ( tree )  ti = proto_tree_add_item ( tree , proto_mmse , tvb , 0 , - 1 , ENC_NA ); mmse_tree = proto_item_add_subtree ( ti , ett_mmse ); offset = 2; if ( tree || pdu_has_content ( pdut ) )  while ( ( offset < tvb_reported_length ( tvb ) ) && ( field = tvb_get_guint8 ( tvb , offset ++ ) ) != MM_CTYPE_HDR )  switch ( field )  length = get_text_string ( tvb , offset , & strval ); offset += length; version = tvb_get_guint8 ( tvb , offset ++ ); length = get_encoded_strval ( tvb , offset , & strval ); offset += length; length = get_encoded_strval ( tvb , offset , & strval ); offset += length; if ( pdut == PDU_M_MBOX_DELETE_CONF )  length = tvb_get_guint8 ( tvb , offset ); if ( length == 0x1F )  guint length_len = 0 ; length = tvb_get_guintvar ( tvb , offset + 1 , & length_len ); length += 1 + length_len; length += 1; length = get_text_string ( tvb , offset , & strval ); offset += length; guint tval ; nstime_t tmptime ; offset += count; field = tvb_get_guint8 ( tvb , offset ++ ); length = get_value_length ( tvb , offset , & count ); if ( tree )  guint tval ; nstime_t tmptime ; offset += length + count; length = get_value_length ( tvb , offset , & count ); if ( tree )  guint tval ; nstime_t tmptime ; offset += length + count; length = get_value_length ( tvb , offset , & count ); offset += length + count; field = tvb_get_guint8 ( tvb , offset ); if ( field & 0x80 )  offset ++; length = get_text_string ( tvb , offset , & strval ); offset += length; length = get_text_string ( tvb , offset , & strval ); offset += length; length = get_long_integer ( tvb , offset , & count ); offset += count; field = tvb_get_guint8 ( tvb , offset ++ ); field = tvb_get_guint8 ( tvb , offset ++ ); field = tvb_get_guint8 ( tvb , offset ++ ); field = tvb_get_guint8 ( tvb , offset ++ ); if ( pdut == PDU_M_MBOX_DELETE_CONF )  length = tvb_get_guint8 ( tvb , offset ); if ( length == 0x1F )  guint length_len = 0 ; length = tvb_get_guintvar ( tvb , offset + 1 , & length_len ); length += 1 + length_len; length += 1; length = get_encoded_strval ( tvb , offset , & strval ); offset += length; field = tvb_get_guint8 ( tvb , offset ++ ); field = tvb_get_guint8 ( tvb , offset ++ ); length = get_encoded_strval ( tvb , offset , & strval ); offset += length; length = get_encoded_strval ( tvb , offset , & strval ); offset += length; field = tvb_get_guint8 ( tvb , offset ++ ); if ( pdut == PDU_M_MBOX_DELETE_CONF )  length = tvb_get_guint8 ( tvb , offset ); if ( length == 0x1F )  guint length_len = 0 ; length = tvb_get_guintvar ( tvb , offset + 1 , & length_len ); length += 1 + length_len; length += 1; length = get_encoded_strval ( tvb , offset , & strval ); offset += length; field = tvb_get_guint8 ( tvb , offset ++ ); field = tvb_get_guint8 ( tvb , offset ++ ); length = get_value_length ( tvb , offset , & count ); field = tvb_get_guint8 ( tvb , offset + count ); if ( tree )  guint tval ; nstime_t tmptime ; tval = get_long_integer ( tvb , offset + count + 1 , & cnt ); tmptime . secs = tval; tmptime . nsecs = 0; offset += length + count; length = get_text_string ( tvb , offset , & strval ); offset += length; length = get_long_integer ( tvb , offset , & count ); offset += count; length = get_value_length ( tvb , offset , & count ); if ( tree )  guint32 fwd_count , count1 , count2 ; count2 = get_encoded_strval ( tvb , offset + count + count1 , & strval ); offset += length + count; length = get_value_length ( tvb , offset , & count ); if ( tree )  guint32 fwd_count , count1 , count2 ; guint tval ; nstime_t tmptime ; tval = get_long_integer ( tvb , offset + count + count1 , & count2 ); tmptime . secs = tval; tmptime . nsecs = 0; strval = abs_time_to_ep_str ( & tmptime , ABSOLUTE_TIME_LOCAL , TRUE ); offset += length + count; if ( field & 0x80 )  guint8 peek = tvb_get_guint8 ( tvb , offset ) ; const char * hdr_name = val_to_str ( field , vals_mm_header_names , "Unknown field (0x%02x)" ) ; if ( peek & 0x80 )  length = 1; if ( ( peek == 0 ) || ( peek >= 0x20 ) )  length = get_text_string ( tvb , offset , & strval ); if ( tree )  proto_tree_add_text ( mmse_tree , tvb , offset - 1 , length + 1 , "%s: %s (Not decoded)" , hdr_name , format_text ( strval , strlen ( strval ) ) ); if ( peek == 0x1F )  guint length_len = 0 ; length = 1 + tvb_get_guintvar ( tvb , offset + 1 , & length_len ); length += length_len; length = 1 + tvb_get_guint8 ( tvb , offset ); offset += length; guint length2 ; length = get_text_string ( tvb , offset , & strval ); length2 = get_text_string ( tvb , offset + length , & strval2 ); offset += length + length2; 
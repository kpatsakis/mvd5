static dissect_http_udp(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree) http_conv_t * conv_data ; conv_data = get_http_conversation_data ( pinfo ); static http_conv_t get_http_conversation_data(packet_info *pinfo) conversation_t * conversation ; http_conv_t * conv_data ; conversation = find_or_create_conversation ( pinfo ); conv_data = conversation_get_proto_data ( conversation , proto_http ); if ( ! conv_data )  conv_data = se_alloc0 ( sizeof ( http_conv_t ) ); return conv_data ; dissect_http_message ( tvb , 0 , pinfo , tree , conv_data ); static dissect_http_message(tvbuff_t *tvb, int offset, packet_info proto_tree *tree, http_conv_t *conv_data) proto_tree * http_tree = NULL ; const guchar * line ; gint next_offset ; const guchar * linep , * lineend ; int first_linelen , linelen ; gboolean is_request_or_reply ; guchar c ; http_type_t http_type ; ReqRespDissector reqresp_dissector ; int colon_offset ; headers_t headers ; first_linelen = tvb_find_line_end ( tvb , offset , tvb_ensure_length_remaining ( tvb , offset ) , & next_offset , FALSE ); line = tvb_get_ptr ( tvb , offset , first_linelen ); http_type = HTTP_OTHERS; is_request_or_reply = is_http_request_or_reply ( ( const gchar * ) line , first_linelen , & http_type , NULL , conv_data ); if ( is_request_or_reply )  if ( ! req_resp_hdrs_do_reassembly ( tvb , offset , pinfo , http_desegment_headers , http_desegment_body ) )  if ( check_col ( pinfo -> cinfo , COL_INFO ) )  if ( is_request_or_reply )  line = tvb_get_ptr ( tvb , offset , first_linelen ); if ( tree )  ti = proto_tree_add_item ( tree , proto_http , tvb , offset , - 1 , ENC_NA ); http_tree = proto_item_add_subtree ( ti , ett_http ); http_type = HTTP_OTHERS; headers . content_type = NULL; headers . content_type_parameters = NULL; headers . have_content_length = FALSE; headers . content_length = 0; headers . content_encoding = NULL; headers . transfer_encoding = NULL; while ( tvb_reported_length_remaining ( tvb , offset ) != 0 )  linelen = tvb_find_line_end ( tvb , offset , tvb_ensure_length_remaining ( tvb , offset ) , & next_offset , FALSE ); if ( linelen < 0 )  line = tvb_get_ptr ( tvb , offset , linelen ); lineend = line + linelen; colon_offset = - 1; reqresp_dissector = NULL; is_request_or_reply = is_http_request_or_reply ( ( const gchar * ) line , linelen , & http_type , & reqresp_dissector , conv_data ); if ( is_request_or_reply )  if ( linelen == 0 )  linep = line; colon_offset = offset; while ( linep < lineend )  c = * linep ++; if ( ! isascii ( c ) )  if ( iscntrl ( c ) )  switch ( c )  colon_offset ++; if ( linelen == 0 )  if ( is_request_or_reply )  process_header ( tvb , offset , next_offset , line , linelen , colon_offset , pinfo , http_tree , & headers , conv_data ); offset = next_offset; static process_header(tvbuff_t *tvb, int offset, int const guchar *line, int linelen, int packet_info *pinfo, proto_tree *tree, headers_t http_conv_t *conv_data) int header_len ; gint hf_index ; header_len = colon_offset - offset; hf_index = find_header_hf_value ( tvb , offset , header_len ); static find_header_hf_value(tvbuff_t *tvb, int offset, guint header_len) guint i ; for (i = 0; i < array_length(headers); i++) if ( header_len == strlen ( headers [ i ] . name ) && tvb_strncaseeql ( tvb , offset , headers [ i ] . name , header_len ) == 0 )  
 proto_init(void (register_all_protocols_func)(register_cb cb, gpointer void (register_all_handoffs_func)(register_cb cb, gpointer register_cb gpointer client_data) hf_text_only = proto_register_field_init ( & hfi_text_only , - 1 ); static proto_register_field_init(header_field_info *hfinfo, const int parent) hfinfo -> parent = parent; hfinfo -> same_name_next = NULL; hfinfo -> same_name_prev_id = - 1; if ( gpa_hfinfo . len >= gpa_hfinfo . allocated_len )  if ( ! gpa_hfinfo . hfi )  gpa_hfinfo . allocated_len = PROTO_PRE_ALLOC_HF_FIELDS_MEM; gpa_hfinfo . hfi = ( header_field_info * * ) g_malloc ( sizeof ( header_field_info * ) * PROTO_PRE_ALLOC_HF_FIELDS_MEM ); gpa_hfinfo . allocated_len += 1000; gpa_hfinfo . hfi = ( header_field_info * * ) g_realloc ( gpa_hfinfo . hfi , sizeof ( header_field_info * ) * gpa_hfinfo . allocated_len ); gpa_hfinfo . hfi [ gpa_hfinfo . len ] = hfinfo; gpa_hfinfo . len ++; hfinfo -> id = gpa_hfinfo . len - 1; if ( ( hfinfo -> name [ 0 ] != 0 ) && ( hfinfo -> abbrev [ 0 ] != 0 ) )  guchar c ; c = wrs_check_charset ( fld_abbrev_chars , hfinfo -> abbrev ); if ( c )  if ( g_ascii_isprint ( c ) )  fprintf ( stderr , "Invalid byte \\%03o in filter name '%s'\n" , c , hfinfo -> abbrev ); 
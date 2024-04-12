static CVE_2012_2393_PATCHED_dictionary_load(void) ddict_t * d ; ddict_vendor_t * v ; ddict_typedefn_t * t ; gboolean do_debug_parser = getenv ( "WIRESHARK_DEBUG_DIAM_DICT_PARSER" ) ? TRUE : FALSE ; char * dir = ep_strdup_printf ( "%s" G_DIR_SEPARATOR_S "diameter" G_DIR_SEPARATOR_S , get_datafile_dir ( ) ) GHashTable * vendors = g_hash_table_new ( strcase_hash , strcase_equal ) ; build_dict . hf = g_array_new ( FALSE , TRUE , sizeof ( hf_register_info ) ); build_dict . ett = g_ptr_array_new ( ); build_dict . types = g_hash_table_new ( strcase_hash , strcase_equal ); build_dict . avps = g_hash_table_new ( strcase_hash , strcase_equal ); d = ddict_scan ( dir , "dictionary.xml" , do_debug_parser ); if ( d == NULL )  for (t = d->typedefns; t; t = t->next) if ( t -> name == NULL )  fprintf ( stderr , "Diameter Dictionary: Invalid Type (empty name): parent==%s\n" , t -> parent ? t -> parent : "(null)" ); if ( g_hash_table_lookup ( build_dict . types , t -> name ) )  if ( v = d -> vendors )  for ( ; v; v = v->next) if ( v -> name == NULL )  fprintf ( stderr , "Diameter Dictionary: Invalid Vendor (empty name): code==%d\n" , v -> code ); if ( g_hash_table_lookup ( vendors , v -> name ) )  fprintf ( stderr , "Diameter Dictionary: Invalid Vendor (empty name) for command %s\n" , c -> name ? c -> name : "(null)" ); 
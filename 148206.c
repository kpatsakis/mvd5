static CVE_2012_2393_VULN_dictionary_load(void) ddict_t * d ; ddict_avp_t * a ; gboolean do_debug_parser = getenv ( "WIRESHARK_DEBUG_DIAM_DICT_PARSER" ) ? TRUE : FALSE ; char * dir = ep_strdup_printf ( "%s" G_DIR_SEPARATOR_S "diameter" G_DIR_SEPARATOR_S , get_datafile_dir ( ) ) GHashTable * vendors = g_hash_table_new ( strcase_hash , strcase_equal ) ; diam_vnd_t * vnd ; d = ddict_scan ( dir , "dictionary.xml" , do_debug_parser ); if ( d == NULL )  for (a = d->avps; a; a = a->next) const char * vend = a -> vendor ? a -> vendor : "None" ; if ( a -> name == NULL )  if ( vnd = g_hash_table_lookup ( vendors , vend ) )  fprintf ( stderr , "Diameter Dictionary: No Vendor: %s\n" , vend ); 
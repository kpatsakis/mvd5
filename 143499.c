 nestegg_init(nestegg ** context, nestegg_io io, nestegg_log callback, int64_t max_offset) int r ; uint64_t id , version , docversion ; char * doctype ; nestegg * ctx ; if ( ! ( io . read && io . seek && io . tell ) )  ctx = ne_alloc ( sizeof ( * ctx ) ); if ( ! ctx )  ctx -> io = ne_alloc ( sizeof ( * ctx -> io ) ); if ( ! ctx -> io )  * ctx -> io = io; ctx -> log = callback; ctx -> alloc_pool = ne_pool_init ( ); if ( ! ctx -> alloc_pool )  if ( ! ctx -> log )  ctx -> log = ne_null_log_callback; r = ne_peek_element ( ctx , & id , NULL ); if ( r != 1 )  if ( id != ID_EBML )  r = ne_parse ( ctx , NULL , max_offset ); if ( r != 1 )  if ( ne_get_uint ( ctx -> ebml . ebml_read_version , & version ) != 0 )  version = 1; if ( version != 1 )  if ( ne_get_string ( ctx -> ebml . doctype , & doctype ) != 0 )  doctype = "matroska"; if ( strcmp ( doctype , "webm" ) != 0 )  nestegg_destroy ( ctx );  nestegg_destroy(nestegg * ctx) while ( ctx -> ancestor )  ne_ctx_pop ( ctx ); static ne_ctx_pop(nestegg * ctx) struct list_node * item ; item = ctx -> ancestor; free ( item ); 
void *emem_tree_lookup_string(emem_tree_t *se_tree,const gchar *k,guint32 flags) emem_tree_key_t key [ 2 ] ; guint32 len = ( guint ) ( strlen ( k ) ) ; guint32 divx = ( len + 3 ) / 4 + 1 ; guint32 i ; guint32 tmp ; void * ret ; aligned = ( g_malloc ( divx * sizeof ( guint32 ) ) ); tmp = 0; for (i = 0; i < len; i++) unsigned char ch ; ch = ( ( unsigned char ) k [ i ] ); if ( flags & 0x1 )  if ( ( * __ctype_b_loc ( ) ) [ ( int ) ch ] & ( ( unsigned short ) _ISupper ) )  ch = ( tolower ( ch ) ); tmp <<= 8; tmp |= ch; if ( i % 4 == 3 )  aligned [ i / 4 ] = tmp; tmp = 0; if ( i % 4 != 0 )  while ( i % 4 != 0 )  i ++; tmp <<= 8; aligned [ i / 4 - 1 ] = tmp; aligned [ divx - 1 ] = 0x1; key [ 0 ] . length = divx; key [ 0 ] . key = aligned; key [ 1 ] . length = 0; key [ 1 ] . key = ( ( void * ) 0 ); ret = emem_tree_lookup32_array ( se_tree , key ); void *emem_tree_lookup32_array(emem_tree_t *se_tree,emem_tree_key_t *key) emem_tree_t * lookup_tree = ( ( void * ) 0 ) ; emem_tree_key_t * cur_key ; guint32 i ; guint32 lookup_key32 = 0 ; if ( ! se_tree || ! key )  for (cur_key = key; cur_key -> length > 0; cur_key++) if ( cur_key -> length > 100 )  getenv ( "WIRESHARK_ABORT_ON_DISSECTOR_BUG" ) != ( ( void * ) 0 ) ? abort ( ) : except_throw ( 1 , 4 , ( ep_strdup_printf ( "%s:%u: failed assertion \"DISSECTOR_ASSERT_NOT_REACHED\"" , "emem.c" , 1890 ) ) ); gchar *ep_strdup_printf(const gchar *fmt,... ) va_list ap ; gchar * dst ; dst = ep_strdup_vprintf ( fmt , ap ); gchar *ep_strdup_vprintf(const gchar *fmt,va_list ap) return emem_strdup_vprintf ( fmt , ap , ep_alloc ) ; static gchar *emem_strdup_vprintf(const gchar *fmt,va_list ap,void *allocator(size_t )) gsize len ; gchar * dst ; len = g_printf_string_upper_bound ( fmt , ap ); dst = ( allocator ( len + 1 ) ); return dst ; return dst ; for (i = 0; i < cur_key -> length; i++) if ( ! lookup_tree )  lookup_tree = se_tree; lookup_tree = ( emem_tree_lookup32 ( lookup_tree , lookup_key32 ) ); void *emem_tree_lookup32(emem_tree_t *se_tree,guint32 key) node = se_tree -> tree; while ( node )  if ( key == node -> key32 )  return node -> data ; if ( key < node -> key32 )  node = node -> left; if ( key > node -> key32 )  node = node -> right; if ( ! lookup_tree )  lookup_key32 = cur_key -> key [ i ]; 
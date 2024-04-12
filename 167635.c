gboolean try_conversation_dissector(const address *addr_a,const address *addr_b,const port_type ptype,const guint32 port_a,const guint32 port_b,tvbuff_t *tvb,packet_info *pinfo,proto_tree *tree) conversation_t * conversation ; conversation = find_conversation ( pinfo -> fd -> num , addr_a , addr_b , ptype , port_a , port_b , 0 ); conversation_t *find_conversation(const guint32 frame_num,const address *addr_a,const address *addr_b,const port_type ptype,const guint32 port_a,const guint32 port_b,const guint options) conversation_t * conversation ; if ( ! ( options & ( 0x01 | 0x02 ) ) )  conversation = conversation_lookup_hashtable ( conversation_hashtable_exact , frame_num , addr_a , addr_b , ptype , port_a , port_b ); static conversation_t *conversation_lookup_hashtable(GHashTable *hashtable,const guint32 frame_num,const address *addr1,const address *addr2,const port_type ptype,const guint32 port1,const guint32 port2) conversation_t * match = ( ( void * ) 0 ) ; conversation_key key ; key . addr1 = * addr1; key . addr2 = * addr2; key . ptype = ptype; key . port1 = port1; key . port2 = port2; chain_head = ( g_hash_table_lookup ( hashtable , ( & key ) ) ); if ( chain_head && chain_head -> setup_frame <= frame_num )  match = chain_head; if ( chain_head -> last && chain_head -> last -> setup_frame <= frame_num )  return chain_head -> last ; if ( chain_head -> latest_found && chain_head -> latest_found -> setup_frame <= frame_num )  match = chain_head -> latest_found; for (convo = match; convo && convo -> setup_frame <= frame_num; convo = convo -> next) if ( convo -> setup_frame > match -> setup_frame )  match = convo; return match ; if ( conversation == ( ( void * ) 0 ) && ( addr_a -> type ) == AT_FC )  conversation = conversation_lookup_hashtable ( conversation_hashtable_exact , frame_num , addr_b , addr_a , ptype , port_a , port_b ); static conversation_t *conversation_lookup_hashtable(GHashTable *hashtable,const guint32 frame_num,const address *addr1,const address *addr2,const port_type ptype,const guint32 port1,const guint32 port2) conversation_t * match = ( ( void * ) 0 ) ; conversation_key key ; key . addr1 = * addr1; key . addr2 = * addr2; key . ptype = ptype; key . port1 = port1; key . port2 = port2; chain_head = ( g_hash_table_lookup ( hashtable , ( & key ) ) ); if ( chain_head && chain_head -> setup_frame <= frame_num )  match = chain_head; if ( chain_head -> last && chain_head -> last -> setup_frame <= frame_num )  return chain_head -> last ; if ( chain_head -> latest_found && chain_head -> latest_found -> setup_frame <= frame_num )  match = chain_head -> latest_found; if ( convo -> setup_frame > match -> setup_frame )  match = convo; return match ; if ( conversation != ( ( void * ) 0 ) )  if ( ! ( options & 0x02 ) )  conversation = conversation_lookup_hashtable ( conversation_hashtable_no_addr2 , frame_num , addr_a , addr_b , ptype , port_a , port_b ); static conversation_t *conversation_lookup_hashtable(GHashTable *hashtable,const guint32 frame_num,const address *addr1,const address *addr2,const port_type ptype,const guint32 port1,const guint32 port2) conversation_t * match = ( ( void * ) 0 ) ; conversation_key key ; key . addr1 = * addr1; key . addr2 = * addr2; key . ptype = ptype; key . port1 = port1; key . port2 = port2; chain_head = ( g_hash_table_lookup ( hashtable , ( & key ) ) ); if ( chain_head && chain_head -> setup_frame <= frame_num )  match = chain_head; if ( chain_head -> last && chain_head -> last -> setup_frame <= frame_num )  return chain_head -> last ; if ( chain_head -> latest_found && chain_head -> latest_found -> setup_frame <= frame_num )  match = chain_head -> latest_found; if ( convo -> setup_frame > match -> setup_frame )  match = convo; return match ; if ( conversation == ( ( void * ) 0 ) && ( addr_a -> type ) == AT_FC )  conversation = conversation_lookup_hashtable ( conversation_hashtable_no_addr2 , frame_num , addr_b , addr_a , ptype , port_a , port_b ); static conversation_t *conversation_lookup_hashtable(GHashTable *hashtable,const guint32 frame_num,const address *addr1,const address *addr2,const port_type ptype,const guint32 port1,const guint32 port2) conversation_t * match = ( ( void * ) 0 ) ; conversation_key key ; key . addr1 = * addr1; key . addr2 = * addr2; key . ptype = ptype; key . port1 = port1; key . port2 = port2; chain_head = ( g_hash_table_lookup ( hashtable , ( & key ) ) ); if ( chain_head && chain_head -> setup_frame <= frame_num )  match = chain_head; if ( chain_head -> last && chain_head -> last -> setup_frame <= frame_num )  return chain_head -> last ; if ( chain_head -> latest_found && chain_head -> latest_found -> setup_frame <= frame_num )  match = chain_head -> latest_found; if ( convo -> setup_frame > match -> setup_frame )  match = convo; return match ; if ( conversation != ( ( void * ) 0 ) )  if ( ! ( conversation -> options & 0x01 ) && ptype != PT_UDP )  if ( ! ( conversation -> options & 0x08 ) )  conversation_set_addr2 ( conversation , addr_b ); void conversation_set_addr2(conversation_t *conv,const address *addr) if ( ! ( conv -> options & 0x01 ) )  guint8 * SE_COPY_ADDRESS_data ; SE_COPY_ADDRESS_data = ( se_alloc ( ( addr -> len ) ) ); memcpy ( SE_COPY_ADDRESS_data , addr -> data , ( addr -> len ) ); ( & conv -> key_ptr -> addr2 ) -> data = SE_COPY_ADDRESS_data; if ( conv -> options & 0x02 )  conversation_insert_into_hashtable ( conversation_hashtable_no_port2 , conv ); void conversation_insert_into_hashtable(GHashTable *hashtable,conversation_t *conv) chain_head = ( ( conversation_t * ) ( g_hash_table_lookup ( hashtable , ( conv -> key_ptr ) ) ) ); if ( ( ( void * ) 0 ) == chain_head )  conv -> next = ( ( void * ) 0 ); conv -> last = conv; g_hash_table_insert ( hashtable , ( conv -> key_ptr ) , conv ); chain_tail = chain_head -> last; if ( conv -> setup_frame >= chain_tail -> setup_frame )  conv -> next = ( ( void * ) 0 ); conv -> last = ( ( void * ) 0 ); chain_tail -> next = conv; chain_head -> last = conv; cur = chain_head; for (; conv -> setup_frame > cur -> setup_frame && cur -> next; (prev = cur , cur = cur -> next)) if ( ( ( void * ) 0 ) == prev )  conv -> next = chain_head; conv -> last = chain_tail; chain_head -> last = ( ( void * ) 0 ); g_hash_table_insert ( hashtable , ( conv -> key_ptr ) , conv ); conv -> next = cur; conv -> last = ( ( void * ) 0 ); prev -> next = conv; conversation_insert_into_hashtable ( conversation_hashtable_exact , conv ); void conversation_insert_into_hashtable(GHashTable *hashtable,conversation_t *conv) chain_head = ( ( conversation_t * ) ( g_hash_table_lookup ( hashtable , ( conv -> key_ptr ) ) ) ); if ( ( ( void * ) 0 ) == chain_head )  conv -> next = ( ( void * ) 0 ); conv -> last = conv; g_hash_table_insert ( hashtable , ( conv -> key_ptr ) , conv ); chain_tail = chain_head -> last; if ( conv -> setup_frame >= chain_tail -> setup_frame )  conv -> next = ( ( void * ) 0 ); conv -> last = ( ( void * ) 0 ); chain_tail -> next = conv; chain_head -> last = conv; cur = chain_head; if ( ( ( void * ) 0 ) == prev )  conv -> next = chain_head; conv -> last = chain_tail; chain_head -> last = ( ( void * ) 0 ); g_hash_table_insert ( hashtable , ( conv -> key_ptr ) , conv ); conv -> next = cur; conv -> last = ( ( void * ) 0 ); prev -> next = conv; 
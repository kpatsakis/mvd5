conversation_t *find_or_create_conversation(packet_info *pinfo) if ( ( conv = find_conversation ( pinfo -> fd -> num , ( & pinfo -> src ) , ( & pinfo -> dst ) , pinfo -> ptype , pinfo -> srcport , pinfo -> destport , 0 ) ) == ( ( void * ) 0 ) )  conversation_t *find_conversation(const guint32 frame_num,const address *addr_a,const address *addr_b,const port_type ptype,const guint32 port_a,const guint32 port_b,const guint options) conversation_t * conversation ; if ( ! ( options & ( 0x01 | 0x02 ) ) )  conversation = conversation_lookup_hashtable ( conversation_hashtable_exact , frame_num , addr_a , addr_b , ptype , port_a , port_b ); if ( conversation == ( ( void * ) 0 ) && ( addr_a -> type ) == AT_FC )  conversation = conversation_lookup_hashtable ( conversation_hashtable_exact , frame_num , addr_b , addr_a , ptype , port_a , port_b ); if ( conversation != ( ( void * ) 0 ) )  if ( ! ( options & 0x02 ) )  conversation = conversation_lookup_hashtable ( conversation_hashtable_no_addr2 , frame_num , addr_a , addr_b , ptype , port_a , port_b ); if ( conversation == ( ( void * ) 0 ) && ( addr_a -> type ) == AT_FC )  conversation = conversation_lookup_hashtable ( conversation_hashtable_no_addr2 , frame_num , addr_b , addr_a , ptype , port_a , port_b ); if ( conversation != ( ( void * ) 0 ) )  if ( ! ( options & 0x01 ) )  conversation = conversation_lookup_hashtable ( conversation_hashtable_no_addr2 , frame_num , addr_b , addr_a , ptype , port_b , port_a ); if ( conversation != ( ( void * ) 0 ) )  if ( ! ( options & 0x01 ) )  conversation = conversation_lookup_hashtable ( conversation_hashtable_no_port2 , frame_num , addr_a , addr_b , ptype , port_a , port_b ); if ( conversation == ( ( void * ) 0 ) && ( addr_a -> type ) == AT_FC )  conversation = conversation_lookup_hashtable ( conversation_hashtable_no_port2 , frame_num , addr_b , addr_a , ptype , port_a , port_b ); if ( conversation != ( ( void * ) 0 ) )  if ( ! ( options & 0x02 ) )  conversation = conversation_lookup_hashtable ( conversation_hashtable_no_port2 , frame_num , addr_b , addr_a , ptype , port_b , port_a ); if ( conversation != ( ( void * ) 0 ) )  conversation = conversation_lookup_hashtable ( conversation_hashtable_no_addr2_or_port2 , frame_num , addr_a , addr_b , ptype , port_a , port_b ); if ( conversation != ( ( void * ) 0 ) )  if ( ( addr_a -> type ) == AT_FC )  conversation = conversation_lookup_hashtable ( conversation_hashtable_no_addr2_or_port2 , frame_num , addr_b , addr_a , ptype , port_a , port_b ); conversation = conversation_lookup_hashtable ( conversation_hashtable_no_addr2_or_port2 , frame_num , addr_b , addr_a , ptype , port_b , port_a ); if ( conversation != ( ( void * ) 0 ) )  if ( ptype != PT_UDP )  if ( ! ( conversation -> options & 0x08 ) )  conversation = conversation_create_from_template ( conversation , addr_a , port_a ); static conversation_t *conversation_create_from_template(conversation_t *conversation,const address *addr2,const guint32 port2) if ( conversation -> options & 0x08 && ( conversation -> key_ptr -> ptype ) != PT_UDP )  conversation_t * new_conversation_from_template ; guint options = conversation -> options & ( ~ ( 0x08 | 0x01 | 0x02 ) ) ; if ( conversation -> options & 0x01 && conversation -> options & 0x02 )  new_conversation_from_template = conversation_new ( conversation -> setup_frame , ( & conversation -> key_ptr -> addr1 ) , addr2 , conversation -> key_ptr -> ptype , conversation -> key_ptr -> port1 , port2 , options ); conversation_t *conversation_new(const guint32 setup_frame,const address *addr1,const address *addr2,const port_type ptype,const guint32 port1,const guint32 port2,const guint options) guint8 * SE_COPY_ADDRESS_data ; SE_COPY_ADDRESS_data = ( se_alloc ( ( addr1 -> len ) ) ); memcpy ( SE_COPY_ADDRESS_data , addr1 -> data , ( addr1 -> len ) ); guint8 * SE_COPY_ADDRESS_data ; SE_COPY_ADDRESS_data = ( se_alloc ( ( addr2 -> len ) ) ); memcpy ( SE_COPY_ADDRESS_data , addr2 -> data , ( addr2 -> len ) ); ( & new_key -> addr2 ) -> data = SE_COPY_ADDRESS_data; new_key -> ptype = ptype; new_key -> port1 = port1; new_key -> port2 = port2; conversation -> key_ptr = new_key; conversation_insert_into_hashtable ( hashtable , conversation ); return conversation ; 
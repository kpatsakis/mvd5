 dissect_nt_policy_hnd(tvbuff_t *tvb, gint offset, packet_info proto_tree *tree, dcerpc_info *di, guint8 *drep, int e_ctx_hnd *pdata, proto_item gboolean is_open, gboolean is_close) offset = dissect_nt_hnd ( tvb , offset , pinfo , tree , di , drep , hfindex , pdata , pitem , is_open , is_close , HND_TYPE_CTX_HANDLE ); static dissect_nt_hnd(tvbuff_t *tvb, gint offset, packet_info proto_tree *tree, dcerpc_info *di, guint8 *drep, int e_ctx_hnd *pdata, proto_item gboolean is_open, gboolean is_close, e_hnd_type type) e_ctx_hnd hnd ; if ( di -> conformant_run )  switch ( type )  hnd . attributes = 0; dcerpc_smb_store_pol_pkts ( & hnd , pinfo , is_open , is_close ); void dcerpc_smb_store_pol_pkts(e_ctx_hnd *policy_hnd, packet_info gboolean is_open, gboolean is_close) pol_value * pol ; if ( pinfo -> fd -> flags . visited )  if ( is_null_pol ( policy_hnd ) )  pol = find_pol_handle ( policy_hnd , pinfo -> fd -> num , & value ); static pol_value *find_pol_handle(e_ctx_hnd *policy_hnd, guint32 pol_hash_value **valuep) pol_hash_key key ; memcpy ( & key . policy_hnd , policy_hnd , sizeof ( key . policy_hnd ) ); if ( * valuep = ( pol_hash_value * ) g_hash_table_lookup ( pol_hash , & key ) )  for (pol = (*valuep)->list; pol != NULL; pol = pol->next) if ( pol -> first_frame <= frame && ( pol -> last_frame == 0 || pol -> last_frame >= frame ) )  return pol ; 
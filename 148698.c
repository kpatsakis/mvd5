 PIDL_dissect_policy_hnd(tvbuff_t *tvb, gint offset, packet_info proto_tree *tree, dcerpc_info* di, guint8 *drep, int guint32 param) e_ctx_hnd policy_hnd ; if ( ( param & PIDL_POLHND_OPEN ) && ! pinfo -> fd -> flags . visited && ! di -> conformant_run )  dcerpc_store_polhnd_type ( & policy_hnd , pinfo , param & PIDL_POLHND_TYPE_MASK ); static void dcerpc_store_polhnd_type(e_ctx_hnd *policy_hnd, packet_info guint32 type) if ( pinfo -> fd -> flags . visited )  if ( is_null_pol ( policy_hnd ) )  static gboolean is_null_pol(e_ctx_hnd *policy_hnd) static guint8 null_policy_hnd [ 20 ] ; return memcmp ( policy_hnd , null_policy_hnd , 20 ) == 0 ; 
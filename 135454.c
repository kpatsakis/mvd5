int CVE_2013_4514_PATCHED_wvlan_uil_put_info(struct uilreq *urq, struct wl_private *lp) ltv_t * pLtv ; if ( urq -> hcfCtx == & ( lp -> hcfCtx ) )  if ( capable ( CAP_NET_ADMIN ) )  if ( ( urq -> data != NULL ) && ( urq -> len != 0 ) )  if ( urq -> len < ( sizeof ( hcf_16 ) * 2 ) )  urq -> len = sizeof ( lp -> ltvRecord ); urq -> result = UIL_ERR_LEN; result = verify_area ( VERIFY_READ , urq -> data , urq -> len ); if ( result != 0 )  urq -> result = UIL_FAILURE; if ( ( ( lp -> ltvRecord . len + 1 ) * sizeof ( hcf_16 ) ) > urq -> len )  urq -> len = sizeof ( lp -> ltvRecord ); urq -> result = UIL_ERR_LEN; if ( urq -> len > sizeof ( lp -> ltvRecord ) )  pLtv = kmalloc ( urq -> len , GFP_KERNEL ); if ( pLtv != NULL )  pLtv = & ( lp -> ltvRecord ); switch ( pLtv -> typ )  lp -> DTIMPeriod = pLtv -> u . u16 [ 0 ]; pLtv -> u . u16 [ 0 ] = CNV_INT_TO_LITTLE ( pLtv -> u . u16 [ 0 ] ); lp -> ownBeaconInterval = pLtv -> u . u16 [ 0 ]; pLtv -> u . u16 [ 0 ] = CNV_INT_TO_LITTLE ( pLtv -> u . u16 [ 0 ] ); lp -> coexistence = pLtv -> u . u16 [ 0 ]; pLtv -> u . u16 [ 0 ] = CNV_INT_TO_LITTLE ( pLtv -> u . u16 [ 0 ] ); memcpy ( & lp -> wds_port [ 1 ] . wdsAddress , & pLtv -> u . u8 [ 0 ] , ETH_ALEN ); 
s32 brcmf_vif_clear_mgmt_ies(struct brcmf_cfg80211_vif *vif) s32 pktflags [ ] = { BRCMF_VNDR_IE_PRBREQ_FLAG , BRCMF_VNDR_IE_PRBRSP_FLAG , BRCMF_VNDR_IE_BEACON_FLAG } ; int i ; for (i = 0; i < ARRAY_SIZE(pktflags); i++) brcmf_vif_set_mgmt_ie ( vif , pktflags [ i ] , NULL , 0 ); s32 brcmf_vif_set_mgmt_ie(struct brcmf_cfg80211_vif *vif, s32 const u8 *vndr_ie_buf, u32 vndr_ie_len) struct vif_saved_ie * saved_ie ; u8 * iovar_ie_buf ; u8 * curr_ie_buf ; int mgmt_ie_buf_len ; u32 * mgmt_ie_len ; u32 parsed_ie_buf_len = 0 ; struct parsed_vndr_ies old_vndr_ies ; struct parsed_vndr_ies new_vndr_ies ; struct parsed_vndr_ie_info * vndrie_info ; s32 i ; u8 * ptr ; int remained_buf_len ; if ( ! vif )  saved_ie = & vif -> saved_ie; iovar_ie_buf = kzalloc ( WL_EXTRA_BUF_MAX , GFP_KERNEL ); if ( ! iovar_ie_buf )  curr_ie_buf = iovar_ie_buf; switch ( pktflag )  mgmt_ie_buf = saved_ie -> probe_req_ie; mgmt_ie_len = & saved_ie -> probe_req_ie_len; mgmt_ie_buf_len = sizeof ( saved_ie -> probe_req_ie ); mgmt_ie_buf = saved_ie -> probe_res_ie; mgmt_ie_len = & saved_ie -> probe_res_ie_len; mgmt_ie_buf_len = sizeof ( saved_ie -> probe_res_ie ); mgmt_ie_buf = saved_ie -> beacon_ie; mgmt_ie_len = & saved_ie -> beacon_ie_len; mgmt_ie_buf_len = sizeof ( saved_ie -> beacon_ie ); mgmt_ie_buf = saved_ie -> assoc_req_ie; mgmt_ie_len = & saved_ie -> assoc_req_ie_len; mgmt_ie_buf_len = sizeof ( saved_ie -> assoc_req_ie ); if ( vndr_ie_len > mgmt_ie_buf_len )  if ( vndr_ie_buf && vndr_ie_len && curr_ie_buf )  ptr = curr_ie_buf; for (i = 0; i < new_vndr_ies.count; i++) vndrie_info = & new_vndr_ies . ie_info [ i ]; memcpy ( ptr + parsed_ie_buf_len , vndrie_info -> ie_ptr , vndrie_info -> ie_len ); parsed_ie_buf_len += vndrie_info -> ie_len; if ( mgmt_ie_buf && * mgmt_ie_len )  if ( parsed_ie_buf_len && ( parsed_ie_buf_len == * mgmt_ie_len ) && ( memcmp ( mgmt_ie_buf , curr_ie_buf , parsed_ie_buf_len ) == 0 ) )  for (i = 0; i < old_vndr_ies.count; i++) vndrie_info = & old_vndr_ies . ie_info [ i ]; * mgmt_ie_len = 0; if ( mgmt_ie_buf && parsed_ie_buf_len )  ptr = mgmt_ie_buf; remained_buf_len = mgmt_ie_buf_len; for (i = 0; i < new_vndr_ies.count; i++) vndrie_info = & new_vndr_ies . ie_info [ i ]; if ( remained_buf_len < ( vndrie_info -> vndrie . len + VNDR_IE_VSIE_OFFSET ) )  remained_buf_len -= ( vndrie_info -> ie_len + VNDR_IE_VSIE_OFFSET ); memcpy ( ptr + ( * mgmt_ie_len ) , vndrie_info -> ie_ptr , vndrie_info -> ie_len ); * mgmt_ie_len += vndrie_info -> ie_len; 
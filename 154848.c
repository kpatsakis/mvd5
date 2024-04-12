static s32 brcmf_cfg80211_suspend(struct wiphy struct cfg80211_wowlan *wowl) struct brcmf_cfg80211_info * cfg = wiphy_to_cfg ( wiphy ) ; struct net_device * ndev = cfg_to_ndev ( cfg ) ; struct brcmf_if * ifp = netdev_priv ( ndev ) ; if ( ! check_vif_up ( ifp -> vif ) )  static bool check_vif_up(struct brcmf_cfg80211_vif *vif) if ( ! test_bit ( BRCMF_VIF_STATUS_READY , & vif -> sme_state ) )  return false ; return true ; if ( wowl == NULL )  brcmf_configure_wowl ( cfg , ifp , wowl ); static void brcmf_configure_wowl(struct brcmf_cfg80211_info struct brcmf_if struct cfg80211_wowlan *wowl) u32 i ; if ( ( wowl -> patterns ) && ( wowl -> n_patterns ) )  for (i = 0; i < wowl->n_patterns; i++) brcmf_config_wowl_pattern ( ifp , "add" , ( u8 * ) wowl -> patterns [ i ] . pattern , wowl -> patterns [ i ] . pattern_len , ( u8 * ) wowl -> patterns [ i ] . mask , wowl -> patterns [ i ] . pkt_offset ); static s32 brcmf_config_wowl_pattern(struct brcmf_if *ifp, u8 u8 *pattern, u32 patternsize, u8 u32 packet_offset) struct brcmf_fil_wowl_pattern_le * filter ; u32 masksize ; u8 * buf ; u32 bufsize ; masksize = ( patternsize + 7 ) / 8; bufsize = sizeof ( * filter ) + patternsize + masksize; buf = kzalloc ( bufsize , GFP_KERNEL ); if ( ! buf )  filter = ( struct brcmf_fil_wowl_pattern_le * ) buf; memcpy ( filter -> cmd , cmd , 4 ); filter -> masksize = cpu_to_le32 ( masksize ); filter -> offset = cpu_to_le32 ( packet_offset ); filter -> patternoffset = cpu_to_le32 ( patternoffset ); filter -> patternsize = cpu_to_le32 ( patternsize ); filter -> type = cpu_to_le32 ( BRCMF_WOWL_PATTERN_TYPE_BITMAP ); memcpy ( buf + sizeof ( * filter ) , mask , masksize ); memcpy ( buf + sizeof ( * filter ) + masksize , pattern , patternsize ); ret = brcmf_fil_iovar_data_set ( ifp , "wowl_pattern" , buf , bufsize ); kfree ( buf ); return ret ; 
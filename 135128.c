struct brcmf_cfg80211_info *brcmf_cfg80211_attach(struct brcmf_pub struct device bool p2pdev_forced) struct net_device * ndev = brcmf_get_ifp ( drvr , 0 ) -> ndev ; struct brcmf_cfg80211_info * cfg ; struct wiphy * wiphy ; struct cfg80211_ops * ops ; struct brcmf_cfg80211_vif * vif ; struct brcmf_if * ifp ; u16 * cap = NULL ; if ( ! ndev )  ops = kzalloc ( sizeof ( * ops ) , GFP_KERNEL ); if ( ! ops )  memcpy ( ops , & brcmf_cfg80211_ops , sizeof ( * ops ) ); ifp = netdev_priv ( ndev ); if ( brcmf_feat_is_enabled ( ifp , BRCMF_FEAT_WOWL_GTK ) )  ops -> set_rekey_data = brcmf_cfg80211_set_rekey_data; wiphy = wiphy_new ( ops , sizeof ( struct brcmf_cfg80211_info ) ); if ( ! wiphy )  memcpy ( wiphy -> perm_addr , drvr -> mac , ETH_ALEN ); cfg = wiphy_priv ( wiphy ); cfg -> wiphy = wiphy; cfg -> ops = ops; cfg -> pub = drvr; vif = brcmf_alloc_vif ( cfg , NL80211_IFTYPE_STATION , false ); struct brcmf_cfg80211_vif *brcmf_alloc_vif(struct brcmf_cfg80211_info enum nl80211_iftype bool pm_block) struct brcmf_cfg80211_vif * vif ; bool mbss ; vif = kzalloc ( sizeof ( * vif ) , GFP_KERNEL ); if ( ! vif )  return ERR_PTR ( - ENOMEM ) ; vif -> wdev . wiphy = cfg -> wiphy; vif -> wdev . iftype = type; vif -> pm_block = pm_block; if ( type == NL80211_IFTYPE_AP )  mbss = false; vif -> mbss = mbss; return vif ; if ( IS_ERR ( vif ) )  vif -> ifp = ifp; vif -> wdev . netdev = ndev; err = wl_init_priv ( cfg ); static s32 wl_init_priv(struct brcmf_cfg80211_info *cfg) cfg -> scan_request = NULL; cfg -> pwr_save = true; cfg -> active_scan = true; cfg -> dongle_up = false; err = brcmf_init_priv_mem ( cfg ); static s32 brcmf_init_priv_mem(struct brcmf_cfg80211_info *cfg) cfg -> conf = kzalloc ( sizeof ( * cfg -> conf ) , GFP_KERNEL ); if ( ! cfg -> conf )  cfg -> extra_buf = kzalloc ( WL_EXTRA_BUF_MAX , GFP_KERNEL ); if ( ! cfg -> extra_buf )  cfg -> wowl . nd = kzalloc ( sizeof ( * cfg -> wowl . nd ) + sizeof ( u32 ) , GFP_KERNEL ); if ( ! cfg -> wowl . nd )  cfg -> wowl . nd_info = kzalloc ( sizeof ( * cfg -> wowl . nd_info ) + sizeof ( struct cfg80211_wowlan_nd_match * ) , GFP_KERNEL ); if ( ! cfg -> wowl . nd_info )  cfg -> escan_info . escan_buf = kzalloc ( BRCMF_ESCAN_BUF_SIZE , GFP_KERNEL ); if ( ! cfg -> escan_info . escan_buf )  return 0 ; return - ENOMEM ; if ( err )  return err ; return err ; if ( err )  ifp -> vif = vif; err = brcmf_fil_cmd_int_get ( ifp , BRCMF_C_GET_VERSION , & io_type ); if ( err )  err = brcmf_setup_wiphy ( wiphy , ifp ); static int brcmf_setup_wiphy(struct wiphy *wiphy, struct brcmf_if *ifp) struct brcmf_pub * drvr = ifp -> drvr ; const struct ieee80211_iface_combination * combo ; struct ieee80211_supported_band * band ; u16 max_interfaces = 0 ; __le32 bandlist [ 3 ] ; u32 n_bands ; int err , i ; wiphy -> max_scan_ssids = WL_NUM_SCAN_MAX; wiphy -> max_scan_ie_len = BRCMF_SCAN_IE_LEN_MAX; wiphy -> max_num_pmkids = BRCMF_MAXPMKID; err = brcmf_setup_ifmodes ( wiphy , ifp ); static int brcmf_setup_ifmodes(struct wiphy *wiphy, struct brcmf_if *ifp) struct ieee80211_iface_combination * combo = NULL ; struct ieee80211_iface_limit * c0_limits = NULL ; struct ieee80211_iface_limit * p2p_limits = NULL ; struct ieee80211_iface_limit * mbss_limits = NULL ; bool mbss , p2p ; int i , c , n_combos ; mbss = brcmf_feat_is_enabled ( ifp , BRCMF_FEAT_MBSS ); p2p = brcmf_feat_is_enabled ( ifp , BRCMF_FEAT_P2P ); n_combos = 1 + ! ! p2p + ! ! mbss; combo = kcalloc ( n_combos , sizeof ( * combo ) , GFP_KERNEL ); if ( ! combo )  c0_limits = kcalloc ( p2p ? 3 : 2 , sizeof ( * c0_limits ) , GFP_KERNEL ); if ( ! c0_limits )  if ( p2p )  p2p_limits = kcalloc ( 4 , sizeof ( * p2p_limits ) , GFP_KERNEL ); if ( ! p2p_limits )  if ( mbss )  mbss_limits = kcalloc ( 1 , sizeof ( * mbss_limits ) , GFP_KERNEL ); if ( ! mbss_limits )  return 0 ; return - ENOMEM ; if ( err )  return err ; if ( i < wiphy -> n_iface_combinations )  i ++ , combo ++ max_interfaces = max ( max_interfaces , combo -> max_interfaces ); for (i = 0; i < max_interfaces && i < i++) wiphy -> addresses = drvr -> addresses; wiphy -> n_addresses = i; wiphy -> signal_type = CFG80211_SIGNAL_TYPE_MBM; wiphy -> cipher_suites = brcmf_cipher_suites; wiphy -> n_cipher_suites = ARRAY_SIZE ( brcmf_cipher_suites ); if ( ! brcmf_feat_is_enabled ( ifp , BRCMF_FEAT_MFP ) )  wiphy -> n_cipher_suites --; wiphy -> bss_select_support = BIT ( NL80211_BSS_SELECT_ATTR_RSSI ) | BIT ( NL80211_BSS_SELECT_ATTR_BAND_PREF ) | BIT ( NL80211_BSS_SELECT_ATTR_RSSI_ADJUST ); wiphy -> flags |= WIPHY_FLAG_PS_ON_BY_DEFAULT | WIPHY_FLAG_OFFCHAN_TX | WIPHY_FLAG_HAS_REMAIN_ON_CHANNEL; if ( brcmf_feat_is_enabled ( ifp , BRCMF_FEAT_TDLS ) )  wiphy -> flags |= WIPHY_FLAG_SUPPORTS_TDLS; if ( ! ifp -> drvr -> settings -> roamoff )  wiphy -> flags |= WIPHY_FLAG_SUPPORTS_FW_ROAM; wiphy -> mgmt_stypes = brcmf_txrx_stypes; wiphy -> max_remain_on_channel_duration = 5000; wiphy -> vendor_commands = brcmf_vendor_cmds; wiphy -> n_vendor_commands = BRCMF_VNDR_CMDS_LAST - 1; err = brcmf_fil_cmd_data_get ( ifp , BRCMF_C_GET_BANDLIST , & bandlist , sizeof ( bandlist ) ); if ( err )  return err ; n_bands = le32_to_cpu ( bandlist [ 0 ] ); for (i = 1; i <= n_bands && i < ARRAY_SIZE(bandlist); i++) if ( bandlist [ i ] == cpu_to_le32 ( WLC_BAND_2G ) )  band = kmemdup ( & __wl_band_2ghz , sizeof ( __wl_band_2ghz ) , GFP_KERNEL ); if ( ! band )  return - ENOMEM ; band -> channels = kmemdup ( & __wl_2ghz_channels , sizeof ( __wl_2ghz_channels ) , GFP_KERNEL ); if ( ! band -> channels )  return - ENOMEM ; band -> n_channels = ARRAY_SIZE ( __wl_2ghz_channels ); wiphy -> bands [ NL80211_BAND_2GHZ ] = band; if ( bandlist [ i ] == cpu_to_le32 ( WLC_BAND_5G ) )  band = kmemdup ( & __wl_band_5ghz , sizeof ( __wl_band_5ghz ) , GFP_KERNEL ); if ( ! band )  return - ENOMEM ; band -> channels = kmemdup ( & __wl_5ghz_channels , sizeof ( __wl_5ghz_channels ) , GFP_KERNEL ); if ( ! band -> channels )  return - ENOMEM ; band -> n_channels = ARRAY_SIZE ( __wl_5ghz_channels ); wiphy -> bands [ NL80211_BAND_5GHZ ] = band; err = brcmf_setup_wiphybands ( wiphy ); static int brcmf_setup_wiphybands(struct wiphy *wiphy) struct brcmf_cfg80211_info * cfg = wiphy_priv ( wiphy ) ; struct brcmf_if * ifp = netdev_priv ( cfg_to_ndev ( cfg ) ) ; u32 bw_cap [ 2 ] = { WLC_BW_20MHZ_BIT , WLC_BW_20MHZ_BIT } ; int err ; err = brcmf_fil_iovar_int_get ( ifp , "nmode" , & nmode ); err = brcmf_fil_iovar_int_get ( ifp , "rxchain" , & rxchain ); err = brcmf_construct_chaninfo ( cfg , bw_cap ); static int brcmf_construct_chaninfo(struct brcmf_cfg80211_info u32 bw_cap[]) struct brcmf_if * ifp = netdev_priv ( cfg_to_ndev ( cfg ) ) ; struct ieee80211_supported_band * band ; struct wiphy * wiphy ; struct brcmf_chanspec_list * list ; struct brcmu_chan ch ; int err ; u8 * pbuf ; u32 i , j ; u32 total ; u32 chaninfo ; pbuf = kzalloc ( BRCMF_DCMD_MEDLEN , GFP_KERNEL ); if ( pbuf == NULL )  return - ENOMEM ; list = ( struct brcmf_chanspec_list * ) pbuf; err = brcmf_fil_iovar_data_get ( ifp , "chanspecs" , pbuf , BRCMF_DCMD_MEDLEN ); if ( err )  wiphy = cfg_to_wiphy ( cfg ); band = wiphy -> bands [ NL80211_BAND_2GHZ ]; if ( band )  for (i = 0; i < band->n_channels; i++) band -> channels [ i ] . flags = IEEE80211_CHAN_DISABLED; band = wiphy -> bands [ NL80211_BAND_5GHZ ]; if ( band )  for (i = 0; i < band->n_channels; i++) band -> channels [ i ] . flags = IEEE80211_CHAN_DISABLED; total = le32_to_cpu ( list -> count ); for (i = 0; i < total; i++) ch . chspec = ( u16 ) le32_to_cpu ( list -> element [ i ] ); if ( ch . band == BRCMU_CHAN_BAND_2G )  band = wiphy -> bands [ NL80211_BAND_2GHZ ]; if ( ch . band == BRCMU_CHAN_BAND_5G )  band = wiphy -> bands [ NL80211_BAND_5GHZ ]; if ( ! band )  if ( ! ( bw_cap [ band -> band ] & WLC_BW_40MHZ_BIT ) && ch . bw == BRCMU_CHAN_BW_40 )  if ( ! ( bw_cap [ band -> band ] & WLC_BW_80MHZ_BIT ) && ch . bw == BRCMU_CHAN_BW_80 )  if ( ch . bw == BRCMU_CHAN_BW_80 )  if ( ch . bw == BRCMU_CHAN_BW_40 )  ch . bw = BRCMU_CHAN_BW_20; chaninfo = ch . chspec; err = brcmf_fil_bsscfg_int_get ( ifp , "per_chan_info" , & chaninfo ); return err ; if ( err )  return err ; return 0 ; return err ; if ( err < 0 )  wiphy -> reg_notifier = brcmf_cfg80211_reg_notifier; wiphy -> regulatory_flags |= REGULATORY_CUSTOM_REG; if ( wiphy -> bands [ NL80211_BAND_2GHZ ] )  cap = & wiphy -> bands [ NL80211_BAND_2GHZ ] -> ht_cap . cap; * cap |= IEEE80211_HT_CAP_SUP_WIDTH_20_40; err = wiphy_register ( wiphy ); if ( err < 0 )  if ( cap && ( * cap & IEEE80211_HT_CAP_SUP_WIDTH_20_40 ) )  err = brcmf_enable_bw40_2g ( cfg ); static int brcmf_enable_bw40_2g(struct brcmf_cfg80211_info *cfg) struct brcmf_if * ifp = netdev_priv ( cfg_to_ndev ( cfg ) ) ; struct brcmf_fil_bwcap_le band_bwcap ; u8 * pbuf ; u32 val ; int err ; struct brcmu_chan ch ; val = WLC_BAND_5G; err = brcmf_fil_iovar_int_get ( ifp , "bw_cap" , & val ); if ( ! err )  band_bwcap . band = cpu_to_le32 ( WLC_BAND_2G ); band_bwcap . bw_cap = cpu_to_le32 ( WLC_BW_CAP_40MHZ ); err = brcmf_fil_iovar_data_set ( ifp , "bw_cap" , & band_bwcap , sizeof ( band_bwcap ) ); val = WLC_N_BW_40ALL; err = brcmf_fil_iovar_int_set ( ifp , "mimo_bw_cap" , val ); if ( ! err )  pbuf = kzalloc ( BRCMF_DCMD_MEDLEN , GFP_KERNEL ); if ( pbuf == NULL )  return - ENOMEM ; ch . band = BRCMU_CHAN_BAND_2G; ch . bw = BRCMU_CHAN_BW_40; ch . sb = BRCMU_CHAN_SB_NONE; ch . chnum = 0; * ( __le16 * ) pbuf = cpu_to_le16 ( ch . chspec ); err = brcmf_fil_iovar_data_get ( ifp , "chanspecs" , pbuf , BRCMF_DCMD_MEDLEN ); if ( err )  return err ; return err ; if ( ! err )  err = brcmf_fil_iovar_int_set ( ifp , "obss_coex" , BRCMF_OBSS_COEX_AUTO ); err = brcmf_fweh_activate_events ( ifp ); if ( err )  err = brcmf_p2p_attach ( cfg , p2pdev_forced ); if ( err )  err = brcmf_btcoex_attach ( cfg ); if ( err )  if ( brcmf_feat_is_enabled ( ifp , BRCMF_FEAT_TDLS ) )  err = brcmf_fil_iovar_int_set ( ifp , "tdls_enable" , 1 ); err = brcmf_fweh_activate_events ( ifp ); if ( err )  wl_deinit_priv ( cfg ); static void wl_deinit_priv(struct brcmf_cfg80211_info *cfg) cfg -> dongle_up = false; brcmf_abort_scanning ( cfg ); void brcmf_abort_scanning(struct brcmf_cfg80211_info *cfg) struct escan_info * escan = & cfg -> escan_info ; if ( cfg -> scan_request )  escan -> escan_state = WL_ESCAN_STATE_IDLE; brcmf_notify_escan_complete ( cfg , escan -> ifp , true , true ); s32 brcmf_notify_escan_complete(struct brcmf_cfg80211_info struct brcmf_if *ifp, bool bool fw_abort) struct brcmf_scan_params_le params_le ; if ( fw_abort )  memset ( & params_le , 0 , sizeof ( params_le ) ); eth_broadcast_addr ( params_le . bssid ); params_le . bss_type = DOT11_BSSTYPE_ANY; params_le . scan_type = 0; params_le . channel_num = cpu_to_le32 ( 1 ); params_le . nprobes = cpu_to_le32 ( 1 ); params_le . active_time = cpu_to_le32 ( - 1 ); params_le . passive_time = cpu_to_le32 ( - 1 ); params_le . home_time = cpu_to_le32 ( - 1 ); params_le . channel_list [ 0 ] = cpu_to_le16 ( - 1 ); err = brcmf_fil_cmd_data_set ( ifp , BRCMF_C_SCAN , & params_le , sizeof ( params_le ) ); if ( err )  return err ; 
static int CVE_2008_5134_PATCHED_lbs_process_bss(struct bss_descriptor uint8_t **pbeaconinfo, int *bytesleft) uint8_t * pos , * end , * p ; uint16_t beaconsize = 0 ; if ( * bytesleft >= sizeof ( beaconsize ) )  beaconsize = get_unaligned_le16 ( * pbeaconinfo ); * bytesleft -= sizeof ( beaconsize ); * pbeaconinfo += sizeof ( beaconsize ); if ( beaconsize == 0 || beaconsize > * bytesleft )  pos = * pbeaconinfo; memcpy ( bss -> bssid , pos , ETH_ALEN ); lbs_deb_scan ( "process_bss: BSSID %s\n" , print_mac ( mac , bss -> bssid ) ); bss -> rssi = * pos; bss -> beaconperiod = get_unaligned_le16 ( pos ); bss -> capability = get_unaligned_le16 ( pos ); lbs_deb_scan ( "process_bss: capabilities 0x%04x\n" , bss -> capability ); if ( bss -> capability & WLAN_CAPABILITY_PRIVACY )  if ( bss -> capability & WLAN_CAPABILITY_IBSS )  bss -> mode = IW_MODE_ADHOC; memcpy ( bss -> rates , elem -> data , n_basic_rates ); memmove ( & bss -> phyparamset . fhparamset , pFH , sizeof ( struct ieeetypes_fhparamset ) ); bss -> channel = pDS -> currentchan; memcpy ( & bss -> phyparamset . dsparamset , pDS , sizeof ( struct ieeetypes_dsparamset ) ); lbs_deb_scan ( "got DS IE, channel %d\n" , bss -> channel ); memcpy ( & bss -> ssparamset . cfparamset , pCF , sizeof ( struct ieeetypes_cfparamset ) ); bss -> atimwindow = le16_to_cpu ( pibss -> atimwindow ); memmove ( & bss -> ssparamset . ibssparamset , pibss , sizeof ( struct ieeetypes_ibssparamset ) ); memcpy ( & bss -> countryinfo , pcountryinfo , pcountryinfo -> len + 2 ); p = bss -> rates + n_basic_rates; memcpy ( p , elem -> data , n_ex_rates ); 
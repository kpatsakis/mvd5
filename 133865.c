static void __devinit CVE_2013_1929_VULN_tg3_read_vpd(struct tg3 *tp) u8 * vpd_data ; unsigned int block_end , rosize , len ; u32 vpdlen ; vpd_data = ( u8 * ) tg3_vpd_readblock ( tp , & vpdlen ); if ( ! vpd_data )  i = pci_vpd_find_tag ( vpd_data , 0 , vpdlen , PCI_VPD_LRDT_RO_DATA ); if ( i < 0 )  rosize = pci_vpd_lrdt_size ( & vpd_data [ i ] ); block_end = i + PCI_VPD_LRDT_TAG_SIZE + rosize; i += PCI_VPD_LRDT_TAG_SIZE; if ( block_end > vpdlen )  j = pci_vpd_find_info_keyword ( vpd_data , i , rosize , PCI_VPD_RO_KEYWORD_MFR_ID ); if ( j > 0 )  len = pci_vpd_info_field_size ( & vpd_data [ j ] ); j += PCI_VPD_INFO_FLD_HDR_SIZE; if ( j + len > block_end || len != 4 || memcmp ( & vpd_data [ j ] , "1028" , 4 ) )  
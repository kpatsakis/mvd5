static set_tctl(E1000State *s, int index, uint32_t val) s -> mac_reg [ index ] = val; s -> mac_reg [ TDT ] &= 0xffff; start_xmit ( s ); static start_xmit(E1000State *s) struct e1000_tx_desc desc ; uint32_t tdh_start = s -> mac_reg [ TDH ] , cause = E1000_ICS_TXQE ; if ( ! ( s -> mac_reg [ TCTL ] & E1000_TCTL_EN ) )  while ( s -> mac_reg [ TDH ] != s -> mac_reg [ TDT ] )  process_tx_desc ( s , & desc ); if ( ++ s -> mac_reg [ TDH ] * sizeof ( desc ) >= s -> mac_reg [ TDLEN ] )  s -> mac_reg [ TDH ] = 0; if ( s -> mac_reg [ TDH ] == tdh_start )  static process_tx_desc(E1000State *s, struct e1000_tx_desc *dp) uint32_t txd_lower = le32_to_cpu ( dp -> lower . data ) ; uint32_t dtype = txd_lower & ( E1000_TXD_CMD_DEXT | E1000_TXD_DTYP_D ) ; unsigned int split_size = txd_lower & 0xffff , bytes , sz , op ; struct e1000_tx * tp = & s -> tx ; if ( dtype == E1000_TXD_CMD_DEXT )  if ( dtype == ( E1000_TXD_CMD_DEXT | E1000_TXD_DTYP_D ) )  if ( tp -> size == 0 )  tp -> sum_needed = le32_to_cpu ( dp -> upper . data ) >> 8; tp -> cptse = ( txd_lower & E1000_TXD_CMD_TSE ) ? 1 : 0; tp -> cptse = 0; if ( vlan_enabled ( s ) && is_vlan_txd ( txd_lower ) && ( tp -> cptse || txd_lower & E1000_TXD_CMD_EOP ) )  tp -> vlan_needed = 1; if ( tp -> tse && tp -> cptse )  msh = tp -> hdr_len + tp -> mss; bytes = split_size; if ( tp -> size + bytes > msh )  bytes = msh - tp -> size; bytes = MIN ( sizeof ( tp -> data ) - tp -> size , bytes ); sz = tp -> size + bytes; if ( sz >= tp -> hdr_len && tp -> size < tp -> hdr_len )  memmove ( tp -> header , tp -> data , tp -> hdr_len ); tp -> size = sz; if ( sz == msh )  xmit_seg ( s ); memmove ( tp -> data , tp -> header , tp -> hdr_len ); tp -> size = tp -> hdr_len; while ( split_size -= bytes )  static xmit_seg(E1000State *s) unsigned int frames = s -> tx . tso_frames , css , sofar , n ; struct e1000_tx * tp = & s -> tx ; if ( tp -> tse && tp -> cptse )  css = tp -> ipcss; css = tp -> tucss; if ( tp -> tcp )  sofar = frames * tp -> mss; if ( tp -> paylen - sofar > tp -> mss )  tp -> data [ css + 13 ] &= ~9; tp -> tso_frames ++; if ( tp -> vlan_needed )  memmove ( tp -> vlan , tp -> data , 4 ); memmove ( tp -> data , tp -> data + 4 , 8 ); memcpy ( tp -> data + 8 , tp -> vlan_header , 4 ); e1000_send_packet ( s , tp -> vlan , tp -> size + 4 ); 
static struct sk_buff *CVE_2013_4563_PATCHED_udp6_ufo_fragment(struct sk_buff netdev_features_t features) unsigned int mss ; unsigned int unfrag_ip6hlen , unfrag_len ; u8 * packet_start , * prevhdr ; u8 frag_hdr_sz = sizeof ( struct frag_hdr ) ; int offset ; __wsum csum ; int tnl_hlen ; mss = skb_shinfo ( skb ) -> gso_size; if ( unlikely ( skb -> len <= mss ) )  if ( skb_gso_ok ( skb , features | NETIF_F_GSO_ROBUST ) )  offset = skb_checksum_start_offset ( skb ); csum = skb_checksum ( skb , offset , skb -> len - offset , 0 ); offset += skb -> csum_offset; * ( __sum16 * ) ( skb -> data + offset ) = csum_fold ( csum ); skb -> ip_summed = CHECKSUM_NONE; tnl_hlen = skb_tnl_header_len ( skb ); if ( skb -> mac_header < ( tnl_hlen + frag_hdr_sz ) )  if ( gso_pskb_expand_head ( skb , tnl_hlen + frag_hdr_sz ) )  unfrag_ip6hlen = ip6_find_1stfragopt ( skb , & prevhdr ); unfrag_len = ( skb_network_header ( skb ) - skb_mac_header ( skb ) ) + unfrag_ip6hlen + tnl_hlen; packet_start = ( u8 * ) skb -> head + SKB_GSO_CB ( skb ) -> mac_offset; memmove ( packet_start - frag_hdr_sz , packet_start , unfrag_len ); 
static int CVE_2010_3876_PATCHED_packet_getname(struct socket *sock, struct sockaddr int *uaddr_len, int peer) struct net_device * dev ; struct sock * sk = sock -> sk ; struct packet_sock * po = pkt_sk ( sk ) ; if ( peer )  sll -> sll_family = AF_PACKET; sll -> sll_ifindex = po -> ifindex; sll -> sll_protocol = po -> num; sll -> sll_pkttype = 0; dev = dev_get_by_index_rcu ( sock_net ( sk ) , po -> ifindex ); if ( dev )  sll -> sll_hatype = dev -> type; sll -> sll_halen = dev -> addr_len; memcpy ( sll -> sll_addr , dev -> dev_addr , dev -> addr_len ); 
int CVE_2012_5532_PATCHED_main(void) int fd , len , sock_opt ; struct cn_msg * message ; fd = socket ( AF_NETLINK , SOCK_DGRAM , NETLINK_CONNECTOR ); addr . nl_family = AF_NETLINK; addr . nl_pad = 0; addr . nl_pid = 0; addr . nl_groups = CN_KVP_IDX; message = ( struct cn_msg * ) kvp_send_buffer; message -> id . idx = CN_KVP_IDX; message -> id . val = CN_KVP_VAL; message -> ack = 0; message -> len = sizeof ( struct hv_kvp_msg ); len = netlink_send ( fd , message ); while ( 1 )  struct sockaddr * addr_p = ( struct sockaddr * ) & addr ; len = recvfrom ( fd , kvp_recv_buffer , sizeof ( kvp_recv_buffer ) , 0 , addr_p , & addr_l ); if ( len < 0 )  syslog ( LOG_ERR , "recvfrom failed; pid:%u error:%d %s" , addr . nl_pid , errno , strerror ( errno ) ); 
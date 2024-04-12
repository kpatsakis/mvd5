int CVE_2012_5532_VULN_main(void) int fd , len , sock_opt ; int error ; struct cn_msg * message ; struct nlmsghdr * incoming_msg ; struct cn_msg * incoming_cn_msg ; struct hv_kvp_msg * hv_msg ; char * p ; int op ; int pool ; char * if_name ; struct hv_kvp_ipaddr_value * kvp_ip_val ; fd = socket ( AF_NETLINK , SOCK_DGRAM , NETLINK_CONNECTOR ); addr . nl_family = AF_NETLINK; addr . nl_pad = 0; addr . nl_pid = 0; addr . nl_groups = CN_KVP_IDX; error = bind ( fd , ( struct sockaddr * ) & addr , sizeof ( addr ) ); message = ( struct cn_msg * ) kvp_send_buffer; message -> id . idx = CN_KVP_IDX; message -> id . val = CN_KVP_VAL; hv_msg = ( struct hv_kvp_msg * ) message -> data; hv_msg -> kvp_hdr . operation = KVP_OP_REGISTER1; message -> ack = 0; message -> len = sizeof ( struct hv_kvp_msg ); len = netlink_send ( fd , message ); while ( 1 )  struct sockaddr * addr_p = ( struct sockaddr * ) & addr ; len = recvfrom ( fd , kvp_recv_buffer , sizeof ( kvp_recv_buffer ) , 0 , addr_p , & addr_l ); if ( len < 0 || addr . nl_pid )  incoming_msg = ( struct nlmsghdr * ) kvp_recv_buffer; incoming_cn_msg = ( struct cn_msg * ) NLMSG_DATA ( incoming_msg ); hv_msg = ( struct hv_kvp_msg * ) incoming_cn_msg -> data; op = hv_msg -> kvp_hdr . operation; pool = hv_msg -> kvp_hdr . pool; hv_msg -> error = HV_S_OK; if ( ( in_hand_shake ) && ( op == KVP_OP_REGISTER1 ) )  in_hand_shake = 0; p = ( char * ) hv_msg -> body . kvp_register . version; lic_version = malloc ( strlen ( p ) + 1 ); if ( lic_version )  strcpy ( lic_version , p ); syslog ( LOG_INFO , "KVP LIC Version: %s" , lic_version ); switch ( op )  kvp_ip_val = & hv_msg -> body . kvp_ip_val; if_name = kvp_mac_to_if_name ( ( char * ) kvp_ip_val -> adapter_id ); if ( if_name == NULL )  hv_msg -> error = HV_E_FAIL; error = kvp_get_ip_info ( 0 , if_name , KVP_OP_GET_IP_INFO , kvp_ip_val , ( MAX_IP_ADDR_SIZE * 2 ) ); if ( error )  hv_msg -> error = error; kvp_ip_val = & hv_msg -> body . kvp_ip_val; if_name = kvp_get_if_name ( ( char * ) kvp_ip_val -> adapter_id ); if ( if_name == NULL )  hv_msg -> error = HV_GUID_NOTFOUND; error = kvp_set_ip_info ( if_name , kvp_ip_val ); if ( error )  hv_msg -> error = error; if ( kvp_key_add_or_modify ( pool , hv_msg -> body . kvp_set . data . key , hv_msg -> body . kvp_set . data . key_size , hv_msg -> body . kvp_set . data . value , hv_msg -> body . kvp_set . data . value_size ) )  hv_msg -> error = HV_S_CONT; if ( kvp_get_value ( pool , hv_msg -> body . kvp_set . data . key , hv_msg -> body . kvp_set . data . key_size , hv_msg -> body . kvp_set . data . value , hv_msg -> body . kvp_set . data . value_size ) )  hv_msg -> error = HV_S_CONT; if ( kvp_key_delete ( pool , hv_msg -> body . kvp_delete . key , hv_msg -> body . kvp_delete . key_size ) )  hv_msg -> error = HV_S_CONT; if ( op != KVP_OP_ENUMERATE )  if ( pool != KVP_POOL_AUTO )  if ( kvp_pool_enumerate ( pool , hv_msg -> body . kvp_enum_data . index , hv_msg -> body . kvp_enum_data . data . key , HV_KVP_EXCHANGE_MAX_KEY_SIZE , hv_msg -> body . kvp_enum_data . data . value , HV_KVP_EXCHANGE_MAX_VALUE_SIZE ) )  hv_msg -> error = HV_S_CONT; hv_msg = ( struct hv_kvp_msg * ) incoming_cn_msg -> data; switch ( hv_msg -> body . kvp_enum_data . index )  strcpy ( key_value , lic_version ); kvp_get_ip_info ( AF_INET , NULL , KVP_OP_ENUMERATE , key_value , HV_KVP_EXCHANGE_MAX_VALUE_SIZE ); kvp_get_ip_info ( AF_INET6 , NULL , KVP_OP_ENUMERATE , key_value , HV_KVP_EXCHANGE_MAX_VALUE_SIZE ); strcpy ( key_value , os_build ); strcpy ( key_value , os_name ); strcpy ( key_value , os_major ); strcpy ( key_value , os_minor ); hv_msg -> error = HV_S_CONT; incoming_cn_msg -> id . idx = CN_KVP_IDX; incoming_cn_msg -> id . val = CN_KVP_VAL; incoming_cn_msg -> ack = 0; incoming_cn_msg -> len = sizeof ( struct hv_kvp_msg ); 
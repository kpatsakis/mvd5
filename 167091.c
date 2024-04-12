static int skinny_set_rtp_peer(struct ast_channel *c, struct ast_rtp_instance *rtp, struct ast_rtp_instance *vrtp, struct ast_rtp_instance *trtp, const struct ast_format_cap *codecs, int nat_active) struct skinny_subchannel * sub ; struct skinny_line * l ; struct skinny_device * d ; sub = c -> tech_pvt; if ( c -> _state != AST_STATE_UP )  if ( ! sub )  l = sub -> line; d = l -> device; if ( rtp )  transmit_stopmediatransmission ( d , sub ); static void transmit_stopmediatransmission(struct skinny_device *d, struct skinny_subchannel *sub) struct skinny_req * req ; if ( ! ( req = req_alloc ( sizeof ( struct stop_media_transmission_message ) , STOP_MEDIA_TRANSMISSION_MESSAGE ) ) )  req -> data . stopmedia . conferenceId = htolel ( 0 ); req -> data . stopmedia . passThruPartyId = htolel ( sub -> callid ); transmit_response ( d , req ); static void transmit_response(struct skinny_device *d, struct skinny_req *req) transmit_response_bysession ( d -> session , req ); static int transmit_response_bysession(struct skinnysession *s, struct skinny_req *req) if ( ! s )  if ( ( letohl ( req -> len ) > SKINNY_MAX_PACKET ) || ( letohl ( req -> len ) < 0 ) )  memset ( s -> outbuf , 0 , sizeof ( s -> outbuf ) ); memcpy ( s -> outbuf , req , skinny_header_size ); memcpy ( s -> outbuf + skinny_header_size , & req -> data , letohl ( req -> len ) ); res = write ( s -> fd , s -> outbuf , letohl ( req -> len ) + 8 ); if ( res != letohl ( req -> len ) + 8 )  ast_log ( LOG_WARNING , "Transmit: write only sent %d out of %d bytes: %s\n" , res , letohl ( req -> len ) + 8 , strerror ( errno ) ); 
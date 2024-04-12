static int handle_callforward_button(struct skinny_subchannel *sub, int cfwdtype) struct skinny_line * l = sub -> line ; struct skinny_device * d = l -> device ; if ( d -> hookstate == SKINNY_ONHOOK )  d -> hookstate = SKINNY_OFFHOOK; if ( l -> cfwdtype & cfwdtype )  transmit_closereceivechannel ( d , sub ); static void transmit_closereceivechannel(struct skinny_device *d, struct skinny_subchannel *sub) struct skinny_req * req ; if ( ! ( req = req_alloc ( sizeof ( struct close_receive_channel_message ) , CLOSE_RECEIVE_CHANNEL_MESSAGE ) ) )  static struct skinny_req *req_alloc(size_t size, int response_message) struct skinny_req * req ; if ( ! ( req = ast_calloc ( 1 , skinny_header_size + size + 4 ) ) )  return NULL ; req -> len = htolel ( size + 4 ); req -> e = htolel ( response_message ); return req ; req -> data . closereceivechannel . conferenceId = htolel ( 0 ); req -> data . closereceivechannel . partyId = htolel ( sub -> callid ); transmit_response ( d , req ); static void transmit_response(struct skinny_device *d, struct skinny_req *req) transmit_response_bysession ( d -> session , req ); static int transmit_response_bysession(struct skinnysession *s, struct skinny_req *req) if ( ! s )  if ( ( letohl ( req -> len ) > SKINNY_MAX_PACKET ) || ( letohl ( req -> len ) < 0 ) )  memset ( s -> outbuf , 0 , sizeof ( s -> outbuf ) ); memcpy ( s -> outbuf , req , skinny_header_size ); memcpy ( s -> outbuf + skinny_header_size , & req -> data , letohl ( req -> len ) ); res = write ( s -> fd , s -> outbuf , letohl ( req -> len ) + 8 ); if ( res != letohl ( req -> len ) + 8 )  ast_log ( LOG_WARNING , "Transmit: write only sent %d out of %d bytes: %s\n" , res , letohl ( req -> len ) + 8 , strerror ( errno ) ); if ( res == - 1 )  
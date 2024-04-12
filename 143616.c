static void update_connectedline(struct skinny_subchannel *sub, const void *data, size_t datalen) struct ast_channel * c = sub -> owner ; struct skinny_line * l = sub -> line ; struct skinny_device * d = l -> device ; if ( ! c -> caller . id . number . valid || ast_strlen_zero ( c -> caller . id . number . str ) || ! c -> connected . id . number . valid || ast_strlen_zero ( c -> connected . id . number . str ) )  if ( sub -> owner -> _state == AST_STATE_UP )  if ( sub -> calldirection == SKINNY_INCOMING )  if ( ! sub -> ringing )  transmit_callstate ( d , l -> instance , sub -> callid , SKINNY_RINGOUT ); static void transmit_callstate(struct skinny_device *d, int buttonInstance, unsigned callid, int state) struct skinny_req * req ; if ( ! ( req = req_alloc ( sizeof ( struct call_state_message ) , CALL_STATE_MESSAGE ) ) )  req -> data . callstate . callState = htolel ( state ); req -> data . callstate . lineInstance = htolel ( buttonInstance ); req -> data . callstate . callReference = htolel ( callid ); transmit_response ( d , req ); static void transmit_response(struct skinny_device *d, struct skinny_req *req) transmit_response_bysession ( d -> session , req ); static int transmit_response_bysession(struct skinnysession *s, struct skinny_req *req) if ( ! s )  if ( ( letohl ( req -> len ) > SKINNY_MAX_PACKET ) || ( letohl ( req -> len ) < 0 ) )  memset ( s -> outbuf , 0 , sizeof ( s -> outbuf ) ); memcpy ( s -> outbuf , req , skinny_header_size ); memcpy ( s -> outbuf + skinny_header_size , & req -> data , letohl ( req -> len ) ); res = write ( s -> fd , s -> outbuf , letohl ( req -> len ) + 8 ); if ( res != letohl ( req -> len ) + 8 )  ast_log ( LOG_WARNING , "Transmit: write only sent %d out of %d bytes: %s\n" , res , letohl ( req -> len ) + 8 , strerror ( errno ) ); 
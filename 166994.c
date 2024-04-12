static int skinny_extensionstate_cb(const char *context, const char *exten, enum ast_extension_states state, void *data) struct skinny_container * container = data ; if ( container -> type == SKINNY_SDCONTAINER )  if ( container -> type == SKINNY_SUBLINECONTAINER )  struct skinny_subline * subline = container -> data ; struct skinny_line * l = subline -> line ; d = l -> device; subline -> extenstate = state; if ( subline -> callid == 0 )  switch ( state )  if ( subline -> sub && ( subline -> sub -> substate == SKINNY_CONNECTED ) )  transmit_callstate ( d , l -> instance , subline -> callid , SKINNY_CONNECTED ); static void transmit_callstate(struct skinny_device *d, int buttonInstance, unsigned callid, int state) struct skinny_req * req ; if ( ! ( req = req_alloc ( sizeof ( struct call_state_message ) , CALL_STATE_MESSAGE ) ) )  req -> data . callstate . callState = htolel ( state ); req -> data . callstate . lineInstance = htolel ( buttonInstance ); req -> data . callstate . callReference = htolel ( callid ); transmit_response ( d , req ); static void transmit_response(struct skinny_device *d, struct skinny_req *req) transmit_response_bysession ( d -> session , req ); static int transmit_response_bysession(struct skinnysession *s, struct skinny_req *req) if ( ! s )  if ( ( letohl ( req -> len ) > SKINNY_MAX_PACKET ) || ( letohl ( req -> len ) < 0 ) )  memset ( s -> outbuf , 0 , sizeof ( s -> outbuf ) ); memcpy ( s -> outbuf , req , skinny_header_size ); memcpy ( s -> outbuf + skinny_header_size , & req -> data , letohl ( req -> len ) ); res = write ( s -> fd , s -> outbuf , letohl ( req -> len ) + 8 ); if ( res != letohl ( req -> len ) + 8 )  ast_log ( LOG_WARNING , "Transmit: write only sent %d out of %d bytes: %s\n" , res , letohl ( req -> len ) + 8 , strerror ( errno ) ); if ( res == - 1 )  skinny_unregister ( NULL , s ); ast_mutex_unlock ( & s -> lock ); 
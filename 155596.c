static int handle_soft_key_event_message(struct skinny_req *req, struct skinnysession *s) struct skinny_device * d = s -> device ; struct skinny_line * l ; struct skinny_subchannel * sub = NULL ; struct ast_channel * c ; int event ; int instance ; int callreference ; event = letohl ( req -> data . softkeyeventmessage . softKeyEvent ); instance = letohl ( req -> data . softkeyeventmessage . instance ); callreference = letohl ( req -> data . softkeyeventmessage . callreference ); if ( instance )  l = find_line_by_instance ( d , instance ); if ( callreference )  sub = find_subchannel_by_instance_reference ( d , instance , callreference ); sub = find_subchannel_by_instance_reference ( d , instance , d -> lastcallreference ); l = find_line_by_instance ( d , d -> lastlineinstance ); if ( ! l )  switch ( event )  c = skinny_new ( l , NULL , AST_STATE_DOWN , NULL , SKINNY_OUTGOING ); sub = c -> tech_pvt; if ( sub )  struct skinny_subline * subline ; if ( subline = find_subline_by_callid ( d , callreference ) )  if ( l -> dnd != 0 )  l -> dnd = 1; if ( ! sub || ! sub -> owner )  c = skinny_new ( l , NULL , AST_STATE_DOWN , NULL , SKINNY_OUTGOING ); c = sub -> owner; if ( ! c )  sub = c -> tech_pvt; l -> activesub = sub; if ( ! sub || ! sub -> owner )  c = skinny_new ( l , NULL , AST_STATE_DOWN , NULL , SKINNY_OUTGOING ); c = sub -> owner; if ( ! c )  sub = c -> tech_pvt; l -> activesub = sub; if ( ! sub || ! sub -> owner )  c = skinny_new ( l , NULL , AST_STATE_DOWN , NULL , SKINNY_OUTGOING ); c = sub -> owner; if ( ! c )  sub = c -> tech_pvt; l -> activesub = sub; if ( d -> hookstate == SKINNY_ONHOOK )  if ( l -> transfer && sub && sub -> xferor && sub -> owner -> _state >= AST_STATE_RING )  if ( sub )  struct skinny_subline * subline ; if ( subline = find_subline_by_callid ( d , callreference ) )  d -> hookstate = SKINNY_ONHOOK; if ( sub )  struct skinny_subline * subline ; subline = find_subline_by_callid ( d , callreference ); c = skinny_new ( l , subline , AST_STATE_DOWN , NULL , SKINNY_OUTGOING ); if ( ! c )  sub = c -> tech_pvt; if ( d -> hookstate == SKINNY_ONHOOK )  d -> hookstate = SKINNY_OFFHOOK; int extout ; if ( ( sub && sub -> owner ) && ( sub -> owner -> _state == AST_STATE_UP ) )  c = sub -> owner; if ( ast_bridged_channel ( c ) )  if ( ! ast_masq_park_call ( ast_bridged_channel ( c ) , c , 0 , & extout ) )  transmit_displaynotify ( d , "Call Park failed" , 10 ); static void transmit_displaynotify(struct skinny_device *d, const char *text, int t) struct skinny_req * req ; if ( ! ( req = req_alloc ( sizeof ( struct display_notify_message ) , DISPLAY_NOTIFY_MESSAGE ) ) )  req -> data . displaynotify . displayTimeout = htolel ( t ); transmit_response ( d , req ); static void transmit_response(struct skinny_device *d, struct skinny_req *req) transmit_response_bysession ( d -> session , req ); static int transmit_response_bysession(struct skinnysession *s, struct skinny_req *req) if ( ! s )  if ( ( letohl ( req -> len ) > SKINNY_MAX_PACKET ) || ( letohl ( req -> len ) < 0 ) )  memset ( s -> outbuf , 0 , sizeof ( s -> outbuf ) ); memcpy ( s -> outbuf , req , skinny_header_size ); memcpy ( s -> outbuf + skinny_header_size , & req -> data , letohl ( req -> len ) ); res = write ( s -> fd , s -> outbuf , letohl ( req -> len ) + 8 ); if ( res != letohl ( req -> len ) + 8 )  ast_log ( LOG_WARNING , "Transmit: write only sent %d out of %d bytes: %s\n" , res , letohl ( req -> len ) + 8 , strerror ( errno ) ); if ( res == - 1 )  
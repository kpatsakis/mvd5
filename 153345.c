static int handle_soft_key_event_message(struct skinny_req *req, struct skinnysession *s) struct skinny_device * d = s -> device ; struct skinny_line * l ; struct skinny_subchannel * sub = NULL ; struct ast_channel * c ; int event ; int instance ; int callreference ; event = letohl ( req -> data . softkeyeventmessage . softKeyEvent ); instance = letohl ( req -> data . softkeyeventmessage . instance ); callreference = letohl ( req -> data . softkeyeventmessage . callreference ); if ( instance )  l = find_line_by_instance ( d , instance ); if ( callreference )  sub = find_subchannel_by_instance_reference ( d , instance , callreference ); sub = find_subchannel_by_instance_reference ( d , instance , d -> lastcallreference ); l = find_line_by_instance ( d , d -> lastlineinstance ); if ( ! l )  switch ( event )  c = skinny_new ( l , NULL , AST_STATE_DOWN , NULL , SKINNY_OUTGOING ); sub = c -> tech_pvt; if ( sub )  setsubstate ( sub , SUBSTATE_HOLD ); static void setsubstate(struct skinny_subchannel *sub, int state) struct skinny_line * l = sub -> line ; struct skinny_subline * subline = sub -> subline ; struct skinny_device * d = l -> device ; struct ast_channel * c = sub -> owner ; int actualstate = state ; if ( sub -> substate == SUBSTATE_ONHOOK )  if ( state != SUBSTATE_RINGIN && sub -> aa_sched )  sub -> aa_sched = 0; sub -> aa_beep = 0; sub -> aa_mute = 0; if ( ( state == SUBSTATE_RINGIN ) && ( ( d -> hookstate == SKINNY_OFFHOOK ) || ( AST_LIST_NEXT ( AST_LIST_FIRST ( & l -> sub ) , list ) ) ) )  actualstate = SUBSTATE_CALLWAIT; if ( ( state == SUBSTATE_CONNECTED ) && ( ! subline ) && ( AST_LIST_FIRST ( & l -> sublines ) ) )  const char * slastation ; struct skinny_subline * tmpsubline ; slastation = pbx_builtin_getvar_helper ( c , "SLASTATION" ); if ( slastation )  subline = tmpsubline; if ( subline )  subline -> sub = sub; sub -> subline = subline; subline -> callid = sub -> callid; if ( subline )  switch ( actualstate )  if ( sub -> substate != SUBSTATE_CONNECTED )  sub -> substate = SUBSTATE_HOLD; if ( ( d -> hookstate == SKINNY_ONHOOK ) && ( ( actualstate == SUBSTATE_OFFHOOK ) || ( actualstate == SUBSTATE_DIALING ) || ( actualstate == SUBSTATE_RINGOUT ) || ( actualstate == SUBSTATE_CONNECTED ) || ( actualstate == SUBSTATE_BUSY ) || ( actualstate == SUBSTATE_CONGESTION ) || ( actualstate == SUBSTATE_PROGRESS ) ) )  d -> hookstate = SKINNY_OFFHOOK; if ( actualstate == sub -> substate )  transmit_callstate ( d , l -> instance , sub -> callid , SKINNY_HOLD ); static void transmit_callstate(struct skinny_device *d, int buttonInstance, unsigned callid, int state) struct skinny_req * req ; if ( ! ( req = req_alloc ( sizeof ( struct call_state_message ) , CALL_STATE_MESSAGE ) ) )  if ( skinnydebug )  ast_verb ( 3 , "Transmitting CALL_STATE_MESSAGE to %s - line %d, callid %d, state %s\n" , d -> name , buttonInstance , callid , callstate2str ( state ) ); static char *callstate2str(int ind) char * tmp ; switch ( ind )  if ( ! ( tmp = ast_threadstorage_get ( & callstate2str_threadbuf , CALLSTATE2STR_BUFSIZE ) ) )  snprintf ( tmp , CALLSTATE2STR_BUFSIZE , "UNKNOWN-%d" , ind ); return tmp ; 
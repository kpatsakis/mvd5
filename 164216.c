static int handle_soft_key_event_message(struct skinny_req *req, struct skinnysession *s) struct skinny_device * d = s -> device ; struct skinny_line * l ; struct skinny_subchannel * sub = NULL ; struct ast_channel * c ; int event ; int instance ; int callreference ; event = letohl ( req -> data . softkeyeventmessage . softKeyEvent ); instance = letohl ( req -> data . softkeyeventmessage . instance ); callreference = letohl ( req -> data . softkeyeventmessage . callreference ); if ( instance )  l = find_line_by_instance ( d , instance ); if ( callreference )  sub = find_subchannel_by_instance_reference ( d , instance , callreference ); sub = find_subchannel_by_instance_reference ( d , instance , d -> lastcallreference ); l = find_line_by_instance ( d , d -> lastlineinstance ); if ( ! l )  switch ( event )  c = skinny_new ( l , NULL , AST_STATE_DOWN , NULL , SKINNY_OUTGOING ); sub = c -> tech_pvt; if ( sub )  struct skinny_subline * subline ; if ( subline = find_subline_by_callid ( d , callreference ) )  if ( l -> dnd != 0 )  l -> dnd = 1; if ( ! sub || ! sub -> owner )  c = skinny_new ( l , NULL , AST_STATE_DOWN , NULL , SKINNY_OUTGOING ); c = sub -> owner; if ( ! c )  sub = c -> tech_pvt; l -> activesub = sub; if ( ! sub || ! sub -> owner )  c = skinny_new ( l , NULL , AST_STATE_DOWN , NULL , SKINNY_OUTGOING ); c = sub -> owner; if ( ! c )  sub = c -> tech_pvt; l -> activesub = sub; if ( ! sub || ! sub -> owner )  c = skinny_new ( l , NULL , AST_STATE_DOWN , NULL , SKINNY_OUTGOING ); c = sub -> owner; if ( ! c )  sub = c -> tech_pvt; l -> activesub = sub; if ( d -> hookstate == SKINNY_ONHOOK )  if ( l -> transfer && sub && sub -> xferor && sub -> owner -> _state >= AST_STATE_RING )  if ( sub )  struct skinny_subline * subline ; if ( subline = find_subline_by_callid ( d , callreference ) )  d -> hookstate = SKINNY_ONHOOK; if ( sub )  struct skinny_subline * subline ; subline = find_subline_by_callid ( d , callreference ); c = skinny_new ( l , subline , AST_STATE_DOWN , NULL , SKINNY_OUTGOING ); if ( ! c )  sub = c -> tech_pvt; if ( d -> hookstate == SKINNY_ONHOOK )  d -> hookstate = SKINNY_OFFHOOK; if ( ( sub && sub -> owner ) && ( sub -> owner -> _state == AST_STATE_UP ) )  c = sub -> owner; struct skinny_subline * subline ; subline = find_subline_by_callid ( d , callreference ); c = skinny_new ( l , subline , AST_STATE_DOWN , NULL , SKINNY_OUTGOING ); if ( ! c )  sub = c -> tech_pvt; dialandactivatesub ( sub , subline -> exten ); static void dialandactivatesub(struct skinny_subchannel *sub, char exten[AST_MAX_EXTENSION]) activatesub ( sub , SUBSTATE_DIALING ); static void activatesub(struct skinny_subchannel *sub, int state) struct skinny_line * l = sub -> line ; if ( sub == l -> activesub )  if ( l -> activesub )  if ( l -> activesub -> substate == SUBSTATE_RINGIN )  if ( l -> activesub -> substate != SUBSTATE_HOLD )  setsubstate ( l -> activesub , SUBSTATE_ONHOOK ); static void setsubstate(struct skinny_subchannel *sub, int state) struct skinny_line * l = sub -> line ; struct skinny_subline * subline = sub -> subline ; struct skinny_device * d = l -> device ; struct ast_channel * c = sub -> owner ; int actualstate = state ; if ( sub -> substate == SUBSTATE_ONHOOK )  if ( state != SUBSTATE_RINGIN && sub -> aa_sched )  sub -> aa_sched = 0; sub -> aa_beep = 0; sub -> aa_mute = 0; if ( ( state == SUBSTATE_RINGIN ) && ( ( d -> hookstate == SKINNY_OFFHOOK ) || ( AST_LIST_NEXT ( AST_LIST_FIRST ( & l -> sub ) , list ) ) ) )  actualstate = SUBSTATE_CALLWAIT; if ( ( state == SUBSTATE_CONNECTED ) && ( ! subline ) && ( AST_LIST_FIRST ( & l -> sublines ) ) )  const char * slastation ; struct skinny_subline * tmpsubline ; slastation = pbx_builtin_getvar_helper ( c , "SLASTATION" ); if ( slastation )  subline = tmpsubline; if ( subline )  subline -> sub = sub; sub -> subline = subline; subline -> callid = sub -> callid; if ( subline )  switch ( actualstate )  if ( sub -> substate != SUBSTATE_CONNECTED )  sub -> substate = SUBSTATE_HOLD; ast_queue_control_data ( sub -> owner , AST_CONTROL_HOLD , S_OR ( l -> mohsuggest , NULL ) , ! ast_strlen_zero ( l -> mohsuggest ) ? strlen ( l -> mohsuggest ) + 1 : 0 ); 
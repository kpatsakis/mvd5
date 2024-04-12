static void *skinny_session(void *data) int res ; struct skinny_req * req ; struct skinnysession * s = data ; res = get_input ( s ); if ( res < 0 )  if ( res > 0 )  if ( ! ( req = skinny_req_parse ( s ) ) )  res = handle_message ( req , s ); if ( res < 0 )  static int handle_message(struct skinny_req *req, struct skinnysession *s) if ( ( ! s -> device ) && ( letohl ( req -> e ) != REGISTER_MESSAGE && letohl ( req -> e ) != ALARM_MESSAGE ) )  switch ( letohl ( req -> e ) )  res = handle_offhook_message ( req , s ); static int handle_offhook_message(struct skinny_req *req, struct skinnysession *s) struct skinny_device * d = s -> device ; struct skinny_line * l = NULL ; struct skinny_subchannel * sub = NULL ; struct ast_channel * c ; int instance ; int reference ; instance = letohl ( req -> data . offhook . instance ); reference = letohl ( req -> data . offhook . reference ); if ( d -> hookstate == SKINNY_OFFHOOK )  if ( reference )  sub = find_subchannel_by_instance_reference ( d , instance , reference ); static struct skinny_subchannel *find_subchannel_by_instance_reference(struct skinny_device *d, int instance, int reference) struct skinny_line * l = find_line_by_instance ( d , instance ) ; struct skinny_subchannel * sub ; if ( ! l )  return NULL ; if ( ! reference )  sub = AST_LIST_FIRST ( & l -> sub ); return sub ; l = sub -> line; if ( ! sub )  if ( instance )  l = find_line_by_instance ( d , instance ); static struct skinny_line *find_line_by_instance(struct skinny_device *d, int instance) struct skinny_line * l ; return l ; l = d -> activeline; sub = l -> activesub; if ( sub && sub -> substate == SUBSTATE_HOLD )  if ( sub && sub -> calldirection == SKINNY_INCOMING )  if ( sub && sub -> owner )  c = skinny_new ( l , NULL , AST_STATE_DOWN , NULL , SKINNY_OUTGOING ); static struct ast_channel *skinny_new(struct skinny_line *l, struct skinny_subline *subline, int state, const char *linkedid, int direction) struct ast_channel * tmp ; struct skinny_subchannel * sub ; struct skinny_device * d = l -> device ; if ( ! l -> device )  return NULL ; tmp = ast_channel_alloc ( 1 , state , l -> cid_num , l -> cid_name , l -> accountcode , l -> exten , l -> context , linkedid , l -> amaflags , "Skinny/%s@%s-%d" , l -> name , d -> name , callnums ); if ( ! tmp )  return NULL ; sub = ast_calloc ( 1 , sizeof ( * sub ) ); if ( ! sub )  return NULL ; if ( subline )  sub -> subline = NULL; tmp -> tech = & skinny_tech; tmp -> tech_pvt = sub; if ( state == AST_STATE_RING )  tmp -> rings = 1; if ( l -> amaflags )  tmp -> amaflags = l -> amaflags; tmp -> callgroup = l -> callgroup; tmp -> pickupgroup = l -> pickupgroup; if ( ! ast_strlen_zero ( l -> cid_num ) )  tmp -> caller . ani . number . valid = 1; tmp -> caller . ani . number . str = ast_strdup ( l -> cid_num ); tmp -> priority = 1; tmp -> adsicpe = AST_ADSI_UNAVAILABLE; if ( state != AST_STATE_DOWN )  if ( ast_pbx_start ( tmp ) )  tmp = NULL; return tmp ; if ( c )  setsubstate ( c -> tech_pvt , SUBSTATE_OFFHOOK ); static void setsubstate(struct skinny_subchannel *sub, int state) struct skinny_line * l = sub -> line ; struct skinny_subline * subline = sub -> subline ; struct skinny_device * d = l -> device ; struct ast_channel * c = sub -> owner ; int actualstate = state ; if ( sub -> substate == SUBSTATE_ONHOOK )  if ( state != SUBSTATE_RINGIN && sub -> aa_sched )  sub -> aa_sched = 0; sub -> aa_beep = 0; sub -> aa_mute = 0; if ( ( state == SUBSTATE_RINGIN ) && ( ( d -> hookstate == SKINNY_OFFHOOK ) || ( AST_LIST_NEXT ( AST_LIST_FIRST ( & l -> sub ) , list ) ) ) )  actualstate = SUBSTATE_CALLWAIT; if ( ( state == SUBSTATE_CONNECTED ) && ( ! subline ) && ( AST_LIST_FIRST ( & l -> sublines ) ) )  const char * slastation ; struct skinny_subline * tmpsubline ; slastation = pbx_builtin_getvar_helper ( c , "SLASTATION" ); if ( slastation )  subline = tmpsubline; if ( subline )  subline -> sub = sub; sub -> subline = subline; subline -> callid = sub -> callid; if ( subline )  switch ( actualstate )  if ( sub -> substate != SUBSTATE_CONNECTED )  sub -> substate = SUBSTATE_HOLD; if ( ( d -> hookstate == SKINNY_ONHOOK ) && ( ( actualstate == SUBSTATE_OFFHOOK ) || ( actualstate == SUBSTATE_DIALING ) || ( actualstate == SUBSTATE_RINGOUT ) || ( actualstate == SUBSTATE_CONNECTED ) || ( actualstate == SUBSTATE_BUSY ) || ( actualstate == SUBSTATE_CONGESTION ) || ( actualstate == SUBSTATE_PROGRESS ) ) )  d -> hookstate = SKINNY_OFFHOOK; if ( actualstate == sub -> substate )  switch ( actualstate )  l -> activesub = sub; sub -> substate = SUBSTATE_OFFHOOK; if ( sub -> related )  sub -> related -> related = NULL; if ( sub == l -> activesub )  l -> activesub = NULL; sub -> cxmode = SKINNY_CX_RECVONLY; sub -> substate = SUBSTATE_ONHOOK; if ( sub -> rtp )  sub -> rtp = NULL; if ( ast_strlen_zero ( sub -> exten ) || ! ast_exists_extension ( c , c -> context , sub -> exten , 1 , l -> cid_num ) )  if ( d -> hookstate == SKINNY_ONHOOK )  d -> hookstate = SKINNY_OFFHOOK; sub -> substate = SUBSTATE_DIALING; if ( ! ( sub -> substate == SUBSTATE_DIALING || sub -> substate == SUBSTATE_PROGRESS ) )  sub -> substate = SUBSTATE_RINGOUT; if ( d -> hookstate == SKINNY_ONHOOK )  l -> activesub = sub; sub -> substate = SUBSTATE_RINGIN; sub -> substate = SUBSTATE_CALLWAIT; sub -> substate = SUBSTATE_CONNECTED; l -> activesub = sub; if ( ! ( sub -> substate == SUBSTATE_DIALING || sub -> substate == SUBSTATE_PROGRESS || sub -> substate == SUBSTATE_RINGOUT ) )  sub -> substate = SUBSTATE_BUSY; if ( ! ( sub -> substate == SUBSTATE_DIALING || sub -> substate == SUBSTATE_PROGRESS || sub -> substate == SUBSTATE_RINGOUT ) )  sub -> substate = SUBSTATE_CONGESTION; if ( sub -> substate != SUBSTATE_DIALING )  sub -> substate = SUBSTATE_PROGRESS; if ( sub -> substate != SUBSTATE_CONNECTED )  ast_queue_control_data ( sub -> owner , AST_CONTROL_HOLD , S_OR ( l -> mohsuggest , NULL ) , ! ast_strlen_zero ( l -> mohsuggest ) ? strlen ( l -> mohsuggest ) + 1 : 0 ); 
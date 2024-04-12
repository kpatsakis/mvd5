static int handle_enbloc_call_message(struct skinny_req *req, struct skinnysession *s) struct skinny_device * d = s -> device ; struct skinny_line * l ; struct ast_channel * c ; sub = find_subchannel_by_instance_reference ( d , d -> lastlineinstance , d -> lastcallreference ); static struct skinny_subchannel *find_subchannel_by_instance_reference(struct skinny_device *d, int instance, int reference) struct skinny_line * l = find_line_by_instance ( d , instance ) ; struct skinny_subchannel * sub ; if ( ! l )  return NULL ; if ( ! reference )  sub = AST_LIST_FIRST ( & l -> sub ); return sub ; if ( ! sub )  l = find_line_by_instance ( d , d -> lastlineinstance ); static struct skinny_line *find_line_by_instance(struct skinny_device *d, int instance) struct skinny_line * l ; return l ; if ( ! l )  l = sub -> line; c = skinny_new ( l , NULL , AST_STATE_DOWN , NULL , SKINNY_OUTGOING ); static struct ast_channel *skinny_new(struct skinny_line *l, struct skinny_subline *subline, int state, const char *linkedid, int direction) struct ast_channel * tmp ; struct skinny_subchannel * sub ; struct skinny_device * d = l -> device ; if ( ! l -> device )  return NULL ; tmp = ast_channel_alloc ( 1 , state , l -> cid_num , l -> cid_name , l -> accountcode , l -> exten , l -> context , linkedid , l -> amaflags , "Skinny/%s@%s-%d" , l -> name , d -> name , callnums ); if ( ! tmp )  return NULL ; sub = ast_calloc ( 1 , sizeof ( * sub ) ); if ( ! sub )  return NULL ; if ( subline )  sub -> subline = NULL; tmp -> tech = & skinny_tech; tmp -> tech_pvt = sub; if ( state == AST_STATE_RING )  tmp -> rings = 1; if ( l -> amaflags )  tmp -> amaflags = l -> amaflags; tmp -> callgroup = l -> callgroup; tmp -> pickupgroup = l -> pickupgroup; if ( ! ast_strlen_zero ( l -> cid_num ) )  tmp -> caller . ani . number . valid = 1; tmp -> caller . ani . number . str = ast_strdup ( l -> cid_num ); tmp -> priority = 1; tmp -> adsicpe = AST_ADSI_UNAVAILABLE; if ( state != AST_STATE_DOWN )  if ( ast_pbx_start ( tmp ) )  tmp = NULL; return tmp ; if ( ! c )  sub = c -> tech_pvt; dialandactivatesub ( sub , req -> data . enbloccallmessage . calledParty ); static void dialandactivatesub(struct skinny_subchannel *sub, char exten[AST_MAX_EXTENSION]) activatesub ( sub , SUBSTATE_DIALING ); static void activatesub(struct skinny_subchannel *sub, int state) struct skinny_line * l = sub -> line ; if ( sub == l -> activesub )  setsubstate ( sub , state ); static void setsubstate(struct skinny_subchannel *sub, int state) struct skinny_line * l = sub -> line ; struct skinny_subline * subline = sub -> subline ; struct skinny_device * d = l -> device ; struct ast_channel * c = sub -> owner ; pthread_t t ; int actualstate = state ; if ( sub -> substate == SUBSTATE_ONHOOK )  if ( state != SUBSTATE_RINGIN && sub -> aa_sched )  sub -> aa_sched = 0; sub -> aa_beep = 0; sub -> aa_mute = 0; if ( ( state == SUBSTATE_RINGIN ) && ( ( d -> hookstate == SKINNY_OFFHOOK ) || ( AST_LIST_NEXT ( AST_LIST_FIRST ( & l -> sub ) , list ) ) ) )  actualstate = SUBSTATE_CALLWAIT; if ( ( state == SUBSTATE_CONNECTED ) && ( ! subline ) && ( AST_LIST_FIRST ( & l -> sublines ) ) )  const char * slastation ; struct skinny_subline * tmpsubline ; slastation = pbx_builtin_getvar_helper ( c , "SLASTATION" ); if ( slastation )  subline = tmpsubline; if ( subline )  subline -> sub = sub; sub -> subline = subline; subline -> callid = sub -> callid; if ( subline )  switch ( actualstate )  if ( sub -> substate != SUBSTATE_CONNECTED )  sub -> substate = SUBSTATE_HOLD; if ( actualstate == sub -> substate )  switch ( actualstate )  l -> activesub = sub; sub -> substate = SUBSTATE_OFFHOOK; if ( sub -> related )  sub -> related -> related = NULL; if ( sub == l -> activesub )  l -> activesub = NULL; sub -> cxmode = SKINNY_CX_RECVONLY; sub -> substate = SUBSTATE_ONHOOK; if ( sub -> rtp )  sub -> rtp = NULL; if ( ast_strlen_zero ( sub -> exten ) || ! ast_exists_extension ( c , c -> context , sub -> exten , 1 , l -> cid_num ) )  if ( ast_pthread_create ( & t , NULL , skinny_newcall , c ) )  ast_log ( LOG_WARNING , "Unable to create new call thread: %s\n" , strerror ( errno ) ); 
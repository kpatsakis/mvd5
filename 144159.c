static int handle_message(struct skinny_req *req, struct skinnysession *s) if ( ( ! s -> device ) && ( letohl ( req -> e ) != REGISTER_MESSAGE && letohl ( req -> e ) != ALARM_MESSAGE ) )  switch ( letohl ( req -> e ) )  res = handle_stimulus_message ( req , s ); static int handle_stimulus_message(struct skinny_req *req, struct skinnysession *s) struct skinny_device * d = s -> device ; struct skinny_line * l ; struct skinny_subchannel * sub ; struct ast_channel * c ; int event ; int instance ; event = letohl ( req -> data . stimulus . stimulus ); instance = letohl ( req -> data . stimulus . stimulusInstance ); sub = find_subchannel_by_instance_reference ( d , d -> lastlineinstance , d -> lastcallreference ); if ( ! sub )  l = find_line_by_instance ( d , d -> lastlineinstance ); if ( ! l )  sub = l -> activesub; l = sub -> line; switch ( event )  struct skinny_speeddial * sd ; if ( ! ( sd = find_speeddial_by_instance ( d , instance , 0 ) ) )  if ( ! sub || ! sub -> owner )  c = skinny_new ( l , NULL , AST_STATE_DOWN , NULL , SKINNY_OUTGOING ); c = sub -> owner; if ( ! c )  sub = c -> tech_pvt; if ( ! sub || ! sub -> owner )  c = skinny_new ( l , NULL , AST_STATE_DOWN , NULL , SKINNY_OUTGOING ); c = sub -> owner; if ( ( sub && sub -> owner ) && ( sub -> owner -> _state == AST_STATE_UP ) )  c = sub -> owner; if ( l -> dnd != 0 )  l -> dnd = 1; if ( ! sub || ! sub -> owner )  c = skinny_new ( l , NULL , AST_STATE_DOWN , NULL , SKINNY_OUTGOING ); c = sub -> owner; if ( ! c )  sub = c -> tech_pvt; if ( ! sub || ! sub -> owner )  c = skinny_new ( l , NULL , AST_STATE_DOWN , NULL , SKINNY_OUTGOING ); static struct ast_channel *skinny_new(struct skinny_line *l, struct skinny_subline *subline, int state, const char *linkedid, int direction) struct ast_channel * tmp ; struct skinny_subchannel * sub ; struct skinny_device * d = l -> device ; if ( ! l -> device )  return NULL ; tmp = ast_channel_alloc ( 1 , state , l -> cid_num , l -> cid_name , l -> accountcode , l -> exten , l -> context , linkedid , l -> amaflags , "Skinny/%s@%s-%d" , l -> name , d -> name , callnums ); if ( ! tmp )  return NULL ; sub = ast_calloc ( 1 , sizeof ( * sub ) ); if ( ! sub )  return NULL ; if ( subline )  sub -> subline = NULL; tmp -> tech = & skinny_tech; tmp -> tech_pvt = sub; if ( state == AST_STATE_RING )  tmp -> rings = 1; if ( l -> amaflags )  tmp -> amaflags = l -> amaflags; tmp -> callgroup = l -> callgroup; tmp -> pickupgroup = l -> pickupgroup; if ( ! ast_strlen_zero ( l -> cid_num ) )  tmp -> caller . ani . number . valid = 1; tmp -> caller . ani . number . str = ast_strdup ( l -> cid_num ); tmp -> priority = 1; tmp -> adsicpe = AST_ADSI_UNAVAILABLE; if ( state != AST_STATE_DOWN )  if ( ast_pbx_start ( tmp ) )  tmp = NULL; return tmp ; c = sub -> owner; if ( ! c )  sub = c -> tech_pvt; if ( ! sub || ! sub -> owner )  c = skinny_new ( l , NULL , AST_STATE_DOWN , NULL , SKINNY_OUTGOING ); static struct ast_channel *skinny_new(struct skinny_line *l, struct skinny_subline *subline, int state, const char *linkedid, int direction) struct ast_channel * tmp ; struct skinny_subchannel * sub ; struct skinny_device * d = l -> device ; if ( ! l -> device )  return NULL ; tmp = ast_channel_alloc ( 1 , state , l -> cid_num , l -> cid_name , l -> accountcode , l -> exten , l -> context , linkedid , l -> amaflags , "Skinny/%s@%s-%d" , l -> name , d -> name , callnums ); if ( ! tmp )  return NULL ; sub = ast_calloc ( 1 , sizeof ( * sub ) ); if ( ! sub )  return NULL ; if ( subline )  sub -> subline = NULL; tmp -> tech = & skinny_tech; tmp -> tech_pvt = sub; if ( state == AST_STATE_RING )  tmp -> rings = 1; if ( l -> amaflags )  tmp -> amaflags = l -> amaflags; tmp -> callgroup = l -> callgroup; tmp -> pickupgroup = l -> pickupgroup; if ( ! ast_strlen_zero ( l -> cid_num ) )  tmp -> caller . ani . number . valid = 1; tmp -> caller . ani . number . str = ast_strdup ( l -> cid_num ); tmp -> priority = 1; tmp -> adsicpe = AST_ADSI_UNAVAILABLE; if ( state != AST_STATE_DOWN )  if ( ast_pbx_start ( tmp ) )  tmp = NULL; return tmp ; c = sub -> owner; if ( ! c )  sub = c -> tech_pvt; handle_callforward_button ( sub , SKINNY_CFWD_NOANSWER ); static int handle_callforward_button(struct skinny_subchannel *sub, int cfwdtype) struct skinny_line * l = sub -> line ; if ( l -> cfwdtype & cfwdtype )  set_callforwards ( l , NULL , cfwdtype ); static int set_callforwards(struct skinny_line *l, const char *cfwd, int cfwdtype) if ( ! l )  if ( ! ast_strlen_zero ( cfwd ) )  if ( cfwdtype & SKINNY_CFWD_ALL )  l -> cfwdtype &= ~SKINNY_CFWD_ALL; memset ( l -> call_forward_all , 0 , sizeof ( l -> call_forward_all ) ); if ( cfwdtype & SKINNY_CFWD_BUSY )  l -> cfwdtype &= ~SKINNY_CFWD_BUSY; memset ( l -> call_forward_busy , 0 , sizeof ( l -> call_forward_busy ) ); if ( cfwdtype & SKINNY_CFWD_NOANSWER )  l -> cfwdtype &= ~SKINNY_CFWD_NOANSWER; memset ( l -> call_forward_noanswer , 0 , sizeof ( l -> call_forward_noanswer ) ); return l -> cfwdtype ; 
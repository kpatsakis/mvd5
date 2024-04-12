static void *skinny_session(void *data) int res ; struct skinny_req * req ; struct skinnysession * s = data ; res = get_input ( s ); static int get_input(struct skinnysession *s) int res ; int timeout = keep_alive * 1100 ; time_t now ; int * bufaddr ; struct pollfd fds [ 1 ] ; if ( ! s -> device )  if ( time ( & now ) == - 1 )  return - 1 ; timeout = ( auth_timeout - ( now - s -> start ) ) * 1000; if ( timeout < 0 )  return - 1 ; fds [ 0 ] . fd = s -> fd; fds [ 0 ] . events = POLLIN; fds [ 0 ] . revents = 0; res = ast_poll ( fds , 1 , timeout ); if ( res < 0 )  if ( errno != EINTR )  return res ; if ( res == 0 )  return - 1 ; if ( fds [ 0 ] . revents )  memset ( s -> inbuf , 0 , sizeof ( s -> inbuf ) ); res = read ( s -> fd , s -> inbuf , 4 ); if ( res < 0 )  return res ; if ( res != 4 )  return - 1 ; bufaddr = ( int * ) s -> inbuf; dlen = letohl ( * bufaddr ); if ( dlen < 4 )  return - 1 ; if ( dlen + 8 > sizeof ( s -> inbuf ) )  dlen = sizeof ( s -> inbuf ) - 8; res = read ( s -> fd , s -> inbuf + 4 , dlen + 4 ); if ( res < 0 )  return res ; if ( res != ( dlen + 4 ) )  return - 1 ; return res ; return 0 ; if ( res < 0 )  if ( res > 0 )  if ( ! ( req = skinny_req_parse ( s ) ) )  static struct skinny_req *skinny_req_parse(struct skinnysession *s) struct skinny_req * req ; int * bufaddr ; if ( ! ( req = ast_calloc ( 1 , SKINNY_MAX_PACKET ) ) )  return NULL ; memcpy ( req , s -> inbuf , skinny_header_size ); bufaddr = ( int * ) ( s -> inbuf ); memcpy ( & req -> data , s -> inbuf + skinny_header_size , letohl ( * bufaddr ) - 4 ); if ( letohl ( req -> e ) < 0 )  return NULL ; return req ; res = handle_message ( req , s ); if ( res < 0 )  static int handle_message(struct skinny_req *req, struct skinnysession *s) if ( ( ! s -> device ) && ( letohl ( req -> e ) != REGISTER_MESSAGE && letohl ( req -> e ) != ALARM_MESSAGE ) )  switch ( letohl ( req -> e ) )  if ( skinny_register ( req , s ) )  static int skinny_register(struct skinny_req *req, struct skinnysession *s) struct skinny_device * d ; struct skinny_line * l ; struct sockaddr_in sin ; int instance ; s -> device = d; d -> type = letohl ( req -> data . reg . type ); d -> registered = 1; d -> session = s; sin . sin_addr = __ourip; d -> ourip = sin . sin_addr; instance = 0; instance ++; l -> device = d; l -> prefs = l -> confprefs; l -> prefs = d -> confprefs; l -> instance = instance; l -> newmsgs = ast_app_has_voicemail ( l -> mailbox , NULL ); set_callforwards ( l , NULL , 0 ); static int set_callforwards(struct skinny_line *l, const char *cfwd, int cfwdtype) if ( ! l )  if ( ! ast_strlen_zero ( cfwd ) )  if ( cfwdtype & SKINNY_CFWD_ALL )  l -> cfwdtype &= ~SKINNY_CFWD_ALL; memset ( l -> call_forward_all , 0 , sizeof ( l -> call_forward_all ) ); if ( cfwdtype & SKINNY_CFWD_BUSY )  l -> cfwdtype &= ~SKINNY_CFWD_BUSY; memset ( l -> call_forward_busy , 0 , sizeof ( l -> call_forward_busy ) ); if ( cfwdtype & SKINNY_CFWD_NOANSWER )  l -> cfwdtype &= ~SKINNY_CFWD_NOANSWER; memset ( l -> call_forward_noanswer , 0 , sizeof ( l -> call_forward_noanswer ) ); return l -> cfwdtype ; 
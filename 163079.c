static void *skinny_session(void *data) int res ; struct skinny_req * req ; struct skinnysession * s = data ; res = get_input ( s ); if ( res < 0 )  if ( res > 0 )  if ( ! ( req = skinny_req_parse ( s ) ) )  destroy_session ( s ); res = handle_message ( req , s ); if ( res < 0 )  static void destroy_session(struct skinnysession *s) struct skinnysession * cur ; if ( cur == s )  if ( s -> fd > - 1 )  close ( s -> fd ); 
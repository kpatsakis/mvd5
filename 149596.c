int ff_filter_frame(AVFilterLink *link,AVFilterBufferRef *frame) if ( ( link -> type ) == AVMEDIA_TYPE_AUDIO && link -> min_samples && ( link -> partial_buf || frame -> audio -> nb_samples < link -> min_samples || frame -> audio -> nb_samples > link -> max_samples ) )  return ff_filter_frame_needs_framing ( link , frame ) ; static int ff_filter_frame_needs_framing(AVFilterLink *link,AVFilterBufferRef *frame) int insamples = frame -> audio -> nb_samples ; int inpos = 0 ; int nb_samples ; AVFilterBufferRef * pbuf = link -> partial_buf ; while ( insamples )  if ( ! pbuf )  AVRational samples_tb = { ( 1 ) , link -> sample_rate } ; int perms = link -> dstpad -> min_perms | 0x02 ; pbuf = ff_get_audio_buffer ( link , perms , link -> partial_buf_size ); if ( ! pbuf )  pbuf -> pts = frame -> pts + av_rescale_q ( inpos , samples_tb , link -> time_base ); pbuf -> audio -> nb_samples = 0; nb_samples = ( insamples > link -> partial_buf_size - pbuf -> audio -> nb_samples ? link -> partial_buf_size - pbuf -> audio -> nb_samples : insamples ); inpos += nb_samples; insamples -= nb_samples; pbuf -> audio -> nb_samples += nb_samples; if ( pbuf -> audio -> nb_samples >= link -> min_samples )  ret = ff_filter_frame_framed ( link , pbuf ); pbuf = ( ( void * ) 0 ); static int ff_filter_frame_framed(AVFilterLink *link,AVFilterBufferRef *frame) AVFilterPad * dst = link -> dstpad ; AVFilterBufferRef * out ; int perms ; AVFilterCommand * cmd = link -> dst -> command_queue ; if ( link -> closed )  frame -> perms &= ~src -> rej_perms; perms = frame -> perms; if ( frame -> linesize [ 0 ] < 0 )  perms |= 0x20; if ( ( dst -> min_perms & perms ) != dst -> min_perms || dst -> rej_perms & perms )  switch ( link -> type )  out = ff_get_video_buffer ( link , dst -> min_perms , link -> w , link -> h ); out = ff_get_audio_buffer ( link , dst -> min_perms , frame -> audio -> nb_samples ); if ( ! out )  switch ( link -> type )  out = frame; while ( cmd && cmd -> time <= ( out -> pts ) * av_q2d ( link -> time_base ) )  avfilter_process_command ( link -> dst , ( cmd -> command ) , ( cmd -> arg ) , 0 , 0 , cmd -> flags ); cmd = link -> dst -> command_queue; int avfilter_process_command(AVFilterContext *filter,const char *cmd,const char *arg,char *res,int res_len,int flags) if ( ! strcmp ( cmd , "ping" ) )  
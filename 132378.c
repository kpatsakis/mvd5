int avcodec_decode_subtitle2(AVCodecContext *avctx, AVSubtitle int AVPacket *avpkt) if ( ! avpkt -> data && avpkt -> size )  if ( ! avctx -> codec )  if ( avctx -> codec -> type != AVMEDIA_TYPE_SUBTITLE )  get_subtitle_defaults ( sub ); static void get_subtitle_defaults(AVSubtitle *sub) memset ( sub , 0 , sizeof ( * sub ) ); sub -> pts = AV_NOPTS_VALUE; 
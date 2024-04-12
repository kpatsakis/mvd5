int attribute_align_arg avcodec_decode_audio3(AVCodecContext *avctx, int16_t int AVPacket *avpkt) AVFrame * frame = av_frame_alloc ( ) ; if ( ! frame )  if ( avctx -> get_buffer != avcodec_default_get_buffer )  avctx -> get_buffer = avcodec_default_get_buffer; avctx -> release_buffer = avcodec_default_release_buffer; ret = avcodec_decode_audio4 ( avctx , frame , & got_frame , avpkt ); int attribute_align_arg avcodec_decode_audio4(AVCodecContext AVFrame int const AVPacket *avpkt) AVCodecInternal * avci = avctx -> internal ; * got_frame_ptr = 0; if ( ! avpkt -> data && avpkt -> size )  if ( ! avctx -> codec )  if ( avctx -> codec -> type != AVMEDIA_TYPE_AUDIO )  if ( ( avctx -> codec -> capabilities & AV_CODEC_CAP_DELAY ) || avpkt -> size || ( avctx -> active_thread_type & FF_THREAD_FRAME ) )  uint8_t * side ; int side_size ; uint32_t discard_padding = 0 ; AVPacket tmp = * avpkt ; int did_split = av_packet_split_side_data ( & tmp ) ; ret = apply_param_change ( avctx , & tmp ); static int apply_param_change(AVCodecContext *avctx, AVPacket *avpkt) int size = 0 , ret ; const uint8_t * data ; uint32_t flags ; int64_t val ; data = av_packet_get_side_data ( avpkt , AV_PKT_DATA_PARAM_CHANGE , & size ); if ( ! data )  return 0 ; if ( ! ( avctx -> codec -> capabilities & AV_CODEC_CAP_PARAM_CHANGE ) )  return AVERROR ( EINVAL ) ; if ( size < 4 )  flags = bytestream_get_le32 ( & data ); size -= 4; if ( flags & AV_SIDE_DATA_PARAM_CHANGE_CHANNEL_COUNT )  if ( size < 4 )  val = bytestream_get_le32 ( & data ); if ( val <= 0 || val > INT_MAX )  return AVERROR_INVALIDDATA ; avctx -> channels = val; size -= 4; if ( flags & AV_SIDE_DATA_PARAM_CHANGE_CHANNEL_LAYOUT )  if ( size < 8 )  avctx -> channel_layout = bytestream_get_le64 ( & data ); size -= 8; if ( flags & AV_SIDE_DATA_PARAM_CHANGE_SAMPLE_RATE )  if ( size < 4 )  val = bytestream_get_le32 ( & data ); if ( val <= 0 || val > INT_MAX )  return AVERROR_INVALIDDATA ; avctx -> sample_rate = val; size -= 4; if ( flags & AV_SIDE_DATA_PARAM_CHANGE_DIMENSIONS )  if ( size < 8 )  avctx -> width = bytestream_get_le32 ( & data ); avctx -> height = bytestream_get_le32 ( & data ); ret = ff_set_dimensions ( avctx , avctx -> width , avctx -> height ); if ( ret < 0 )  return ret ; return 0 ; return AVERROR_INVALIDDATA ; if ( ret < 0 )  if ( avctx -> err_recognition & AV_EF_EXPLODE )  avctx -> internal -> pkt = & tmp; if ( HAVE_THREADS && avctx -> active_thread_type & FF_THREAD_FRAME )  ret = ff_thread_decode_frame ( avctx , frame , got_frame_ptr , & tmp ); ret = avctx -> codec -> decode ( avctx , frame , got_frame_ptr , & tmp ); frame -> pkt_dts = avpkt -> dts; if ( ret >= 0 && * got_frame_ptr )  avctx -> frame_number ++; if ( frame -> format == AV_SAMPLE_FMT_NONE )  frame -> format = avctx -> sample_fmt; if ( ! frame -> channel_layout )  frame -> channel_layout = avctx -> channel_layout; if ( ! frame -> sample_rate )  frame -> sample_rate = avctx -> sample_rate; side = av_packet_get_side_data ( avctx -> internal -> pkt , AV_PKT_DATA_SKIP_SAMPLES , & side_size ); if ( side && side_size >= 10 )  avctx -> internal -> skip_samples = AV_RL32 ( side ); discard_padding = AV_RL32 ( side + 4 ); if ( avctx -> internal -> skip_samples && * got_frame_ptr && ! ( avctx -> flags2 & AV_CODEC_FLAG2_SKIP_MANUAL ) )  if ( frame -> nb_samples <= avctx -> internal -> skip_samples )  * got_frame_ptr = 0; if ( avctx -> pkt_timebase . num && avctx -> sample_rate )  int64_t diff_ts = av_rescale_q ( avctx -> internal -> skip_samples ( AVRational ) 1 , avctx -> sample_rate avctx -> pkt_timebase ) if ( frame -> pkt_pts != AV_NOPTS_VALUE )  frame -> pkt_pts += diff_ts; if ( frame -> pkt_dts != AV_NOPTS_VALUE )  frame -> pkt_dts += diff_ts; frame -> nb_samples -= avctx -> internal -> skip_samples; avctx -> internal -> skip_samples = 0; if ( discard_padding > 0 && discard_padding <= frame -> nb_samples && * got_frame_ptr && ! ( avctx -> flags2 & AV_CODEC_FLAG2_SKIP_MANUAL ) )  if ( discard_padding == frame -> nb_samples )  * got_frame_ptr = 0; frame -> nb_samples -= discard_padding; if ( ( avctx -> flags2 & AV_CODEC_FLAG2_SKIP_MANUAL ) && * got_frame_ptr )  AVFrameSideData * fside = av_frame_new_side_data ( frame , AV_FRAME_DATA_SKIP_SAMPLES , 10 ) ; if ( fside )  avctx -> internal -> skip_samples = 0; avctx -> internal -> pkt = NULL; if ( did_split )  if ( ret == tmp . size )  ret = avpkt -> size; if ( ret >= 0 && * got_frame_ptr )  if ( ! avctx -> refcounted_frames )  int err = unrefcount_frame ( avci , frame ) ; static int unrefcount_frame(AVCodecInternal *avci, AVFrame *frame) int ret ; ret = av_frame_copy_props ( frame , avci -> to_free ); if ( ret < 0 )  memcpy ( frame -> data , avci -> to_free -> data , sizeof ( frame -> data ) ); memcpy ( frame -> linesize , avci -> to_free -> linesize , sizeof ( frame -> linesize ) ); int size = planes * sizeof ( * frame -> extended_data ) ; if ( ! size )  av_frame_unref ( frame ); frame -> extended_data = av_malloc ( size ); if ( ! frame -> extended_data )  av_frame_unref ( frame ); memcpy ( frame -> extended_data , avci -> to_free -> extended_data , size ); 
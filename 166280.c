static void probe_codec(AVFormatContext *s,AVStream *st,const AVPacket *pkt) if ( st -> request_probe > 0 )  AVProbeData * pd = & st -> probe_data ; int end ; if ( pkt )  uint8_t * new_buf = ( av_realloc ( ( pd -> buf ) , ( pd -> buf_size + pkt -> size + 32 ) ) ) ; if ( ! new_buf )  pd -> buf = new_buf; memcpy ( ( pd -> buf + pd -> buf_size ) , ( pkt -> data ) , ( pkt -> size ) ); pd -> buf_size += pkt -> size; memset ( ( pd -> buf + pd -> buf_size ) , 0 , 32 ); st -> probe_packets = 0; end = s -> raw_packet_buffer_remaining_size <= 0 || st -> probe_packets <= 0; if ( end || ff_log2_c ( ( pd -> buf_size ) ) != ff_log2_c ( ( pd -> buf_size - pkt -> size ) ) )  int score = set_codec_from_probe_data ( s , st , pd ) ; static int set_codec_from_probe_data(AVFormatContext *s,AVStream *st,AVProbeData *pd) AVInputFormat * fmt = av_probe_input_format3 ( pd , 1 , & score ) ; AVInputFormat *av_probe_input_format3(AVProbeData *pd,int is_opened,int *score_ret) AVProbeData lpd = * pd ; AVInputFormat * fmt1 = ( ( void * ) 0 ) ; static const uint8_t zerobuffer [ 32 ] ; if ( ! lpd . buf )  lpd . buf = zerobuffer; if ( lpd . buf_size > '\n' && ff_id3v2_match ( lpd . buf , "ID3" ) )  int id3len = ff_id3v2_tag_len ( lpd . buf ) ; if ( lpd . buf_size > id3len + 16 )  lpd . buf += id3len; lpd . buf_size -= id3len; while ( fmt1 = av_iformat_next ( fmt1 ) )  if ( ! is_opened == ! ( fmt1 -> flags & 0x1 ) )  if ( fmt1 -> read_probe )  if ( fmt1 -> extensions )  if ( av_match_ext ( lpd . filename , fmt1 -> extensions ) )  int av_match_ext(const char *filename,const char *extensions) const char * ext ; if ( ! filename )  ext = ( strrchr ( filename , '.' ) ); if ( ext )  ext ++; if ( ! av_strcasecmp ( ext1 , ext ) )  
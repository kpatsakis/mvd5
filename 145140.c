static int mov_read_udta_string(MOVContext *c, AVIOContext *pb, MOVAtom atom) char tmp_key [ 5 ] ; const char * key = NULL ; key = "title"; key = "artist"; key = "album_artist"; key = "composer"; key = "copyright"; key = "grouping"; key = "lyrics"; key = "comment"; key = "album"; key = "date"; key = "genre"; key = "genre"; key = "encoder"; key = "encoder"; key = "description"; key = "synopsis"; key = "show"; key = "episode_id"; key = "network"; key = "track"; key = "disc"; key = "episode_sort"; key = "season_number"; key = "media_type"; key = "hd_video"; key = "gapless_playback"; if ( c -> itunes_metadata && atom . size > 8 )  int tag = avio_rl32 ( pb ) ; if ( tag == MKTAG ( 'd' , 'a' , 't' , 'a' ) )  atom . size -= 16; if ( atom . size > 4 && key && ! c -> itunes_metadata )  atom . size -= 4; if ( ! key )  snprintf ( tmp_key , 5 , "%.4s" , ( char * ) & atom . type ); key = tmp_key; if ( ! key )  parse ( c , pb , str_size , key ); av_dict_set ( & c -> fc -> metadata , key , str , 0 ); snprintf ( key2 , sizeof ( key2 ) , "%s-%s" , key , language ); av_dict_set ( & c -> fc -> metadata , key2 , str , 0 ); av_dlog ( c -> fc , "tag \"%s\" value \"%s\" atom \"%.4s\" %d %" PRId64 "\n" key , str , ( char * ) & atom . type , str_size , atom . size ) 
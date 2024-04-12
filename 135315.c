 nestegg_track_seek(nestegg * ctx, unsigned int track, uint64_t tstamp) int r ; struct cue_point * cue_point ; struct cue_track_positions * pos ; uint64_t seek_pos , tc_scale ; if ( ! ctx -> segment . cues . cue_point . head )  r = ne_init_cue_points ( ctx , - 1 ); if ( r != 0 )  tc_scale = ne_get_timecode_scale ( ctx ); cue_point = ne_find_cue_point_for_tstamp ( ctx , ctx -> segment . cues . cue_point . head , track , tc_scale , tstamp ); if ( ! cue_point )  pos = ne_find_cue_position_for_track ( ctx , cue_point -> cue_track_positions . head , track ); if ( pos == NULL )  if ( ne_get_uint ( pos -> cluster_position , & seek_pos ) != 0 )  r = nestegg_offset_seek ( ctx , ctx -> segment_offset + seek_pos );  nestegg_offset_seek(nestegg * ctx, uint64_t offset) int r ; if ( offset > INT64_MAX )  r = ne_io_seek ( ctx -> io , offset , NESTEGG_SEEK_SET ); if ( r != 0 )  ctx -> last_valid = 0; r = ne_parse ( ctx , NULL , - 1 ); static ne_parse(nestegg * ctx, struct ebml_element_desc * top_level, int64_t max_offset) int r ; int64_t * data_offset ; uint64_t id , size , peeked_id ; struct ebml_element_desc * element ; if ( ! ctx -> ancestor )  if ( max_offset > 0 && ne_io_tell ( ctx -> io ) >= max_offset )  r = ne_peek_element ( ctx , & id , & size ); if ( r != 1 )  element = ne_find_element ( id , ctx -> ancestor -> node ); if ( element )  if ( element -> flags & DESC_FLAG_SUSPEND )  r = ne_read_element ( ctx , & id , & size ); if ( r != 1 )  if ( element -> flags & DESC_FLAG_OFFSET )  data_offset = ( int64_t * ) ( ctx -> ancestor -> data + element -> data_offset ); * data_offset = ne_io_tell ( ctx -> io ); if ( * data_offset < 0 )  if ( element -> type == TYPE_MASTER )  if ( element -> flags & DESC_FLAG_MULTI )  if ( ne_read_master ( ctx , element ) < 0 )  if ( ne_read_single_master ( ctx , element ) < 0 )  r = ne_read_simple ( ctx , element , size ); if ( r < 0 )  if ( ne_is_ancestor_element ( id , ctx -> ancestor -> previous ) )  if ( top_level && ctx -> ancestor -> node == top_level )  ne_ctx_pop ( ctx ); r = ne_read_element ( ctx , & id , & size ); if ( r != 1 )  r = ne_io_read_skip ( ctx -> io , size ); if ( r != 1 )  static ne_ctx_pop(nestegg * ctx) struct list_node * item ; item = ctx -> ancestor; free ( item ); 
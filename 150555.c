 nestegg_track_seek(nestegg * ctx, unsigned int track, uint64_t tstamp) int r ; struct cue_point * cue_point ; uint64_t seek_pos , tc_scale ; if ( ! ctx -> segment . cues . cue_point . head )  r = ne_init_cue_points ( ctx , - 1 ); if ( r != 0 )  tc_scale = ne_get_timecode_scale ( ctx ); cue_point = ne_find_cue_point_for_tstamp ( ctx , ctx -> segment . cues . cue_point . head , track , tc_scale , tstamp ); static struct cue_point ne_find_cue_point_for_tstamp(nestegg * ctx, struct ebml_list_node * cue_point, unsigned int track, uint64_t scale, uint64_t tstamp) uint64_t time ; while ( cue_point )  c = cue_point -> data; if ( ne_get_uint ( c -> time , & time ) == 0 && time * scale > tstamp )  if ( ne_find_cue_position_for_track ( ctx , c -> cue_track_positions . head , track ) != NULL )  cue_point = cue_point -> next; static struct cue_track_positions ne_find_cue_position_for_track(nestegg * ctx, struct ebml_list_node * node, unsigned int track) uint64_t track_number ; unsigned int t ; while ( node )  pos = node -> data; if ( ne_get_uint ( pos -> track , & track_number ) != 0 )  if ( ne_map_track_number_to_index ( ctx , track_number , & t ) != 0 )  if ( t == track )  node = node -> next; static ne_get_uint(struct ebml_type type, uint64_t * value) if ( ! type . read )  assert ( type . type == TYPE_UINT ); 
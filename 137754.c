fragment_data fragment_add_multiple_ok(tvbuff_t *tvb, const int offset, const packet_info const guint32 id, GHashTable const guint32 frag_offset, const guint32 const gboolean more_frags) return fragment_add_common ( tvb , offset , pinfo , id , fragment_table , frag_offset , frag_data_len , more_frags , FALSE ) ; static fragment_data fragment_add_common(tvbuff_t *tvb, const int offset, const packet_info *pinfo, const guint32 GHashTable *fragment_table, const guint32 const guint32 frag_data_len, const gboolean const gboolean check_already_added) fragment_key key , * new_key ; fragment_data * fd_head ; fragment_data * fd_item ; gboolean already_added = pinfo -> fd -> flags . visited ; key . src = pinfo -> src; key . dst = pinfo -> dst; key . id = id; fd_head = g_hash_table_lookup ( fragment_table , & key ); if ( strcmp ( pinfo -> current_proto , "DCERPC" ) == 0 )  if ( fd_head != NULL )  for(fd_item=fd_head->next;fd_item;fd_item=fd_item->next) if ( ! already_added && check_already_added && fd_head != NULL )  if ( pinfo -> fd -> num <= fd_head -> frame )  for(fd_item=fd_head->next;fd_item;fd_item=fd_item->next) if ( pinfo -> fd -> num == fd_item -> frame && frag_offset == fd_item -> offset )  already_added = TRUE; if ( already_added )  if ( fd_head == NULL )  fd_head = new_head ( 0 ); static fragment_data *new_head(const guint32 flags) fragment_data * fd_head ; fd_head = g_slice_new0 ( fragment_data ); fd_head -> flags = flags; return fd_head ; if ( fragment_add_work ( fd_head , tvb , offset , pinfo , frag_offset , frag_data_len , more_frags ) )  static fragment_add_work(fragment_data *fd_head, tvbuff_t *tvb, const int const packet_info *pinfo, const guint32 const guint32 frag_data_len, const gboolean more_frags) fragment_data * fd ; fragment_data * fd_i ; guint32 max , dfpos ; fd = g_slice_new ( fragment_data ); fd -> next = NULL; fd -> flags = 0; fd -> frame = pinfo -> fd -> num; if ( fd -> frame > fd_head -> frame )  fd_head -> frame = fd -> frame; fd -> offset = frag_offset; fd -> len = frag_data_len; fd -> data = NULL; if ( fd_head -> flags & FD_DEFRAGMENTED && ( frag_offset + frag_data_len ) >= fd_head -> datalen && fd_head -> flags & FD_PARTIAL_REASSEMBLY )  for(fd_i=fd_head->next; fd_i; fd_i=fd_i->next) if ( ! fd_i -> data )  fd_i -> data = fd_head -> data + fd_i -> offset; fd_i -> flags |= FD_NOT_MALLOCED; fd_i -> flags &= ( ~FD_TOOLONGFRAGMENT ) & ( ~FD_MULTIPLETAILS ); fd_head -> flags &= ~ ( FD_DEFRAGMENTED | FD_PARTIAL_REASSEMBLY | FD_DATALEN_SET ); fd_head -> flags &= ( ~FD_TOOLONGFRAGMENT ) & ( ~FD_MULTIPLETAILS ); fd_head -> datalen = 0; fd_head -> reassembled_in = 0; if ( ! more_frags )  if ( fd_head -> flags & FD_DATALEN_SET )  if ( fd_head -> datalen != ( fd -> offset + fd -> len ) )  fd_head -> flags |= FD_MULTIPLETAILS; fd_head -> datalen = fd -> offset + fd -> len; fd_head -> flags |= FD_DATALEN_SET; if ( fd_head -> flags & FD_DEFRAGMENTED )  if ( ! ( fd_head -> flags & FD_DATALEN_SET ) )  max = 0; for (fd_i=fd_head->next;fd_i;fd_i=fd_i->next) if ( ( ( fd_i -> offset ) <= max ) && ( ( fd_i -> offset + fd_i -> len ) > max ) )  max = fd_i -> offset + fd_i -> len; if ( max < ( fd_head -> datalen ) )  if ( max > ( fd_head -> datalen ) )  fd_head -> flags |= FD_TOOLONGFRAGMENT; fd_head -> data = g_malloc ( max ); for (dfpos=0,fd_i=fd_head;fd_i;fd_i=fd_i->next) if ( fd_i -> len )  if ( fd_i -> offset + fd_i -> len > dfpos )  if ( fd_i -> offset + fd_i -> len > max )  if ( dfpos < fd_i -> offset )  if ( dfpos - fd_i -> offset > fd_i -> len )  if ( ! fd_head -> data )  if ( fd_i -> offset < dfpos )  fd_i -> flags |= FD_OVERLAP; fd_head -> flags |= FD_OVERLAP; if ( memcmp ( fd_head -> data + fd_i -> offset , fd_i -> data , MIN ( fd_i -> len , ( dfpos - fd_i -> offset ) ) ) )  fd_i -> flags |= FD_OVERLAPCONFLICT; fd_head -> flags |= FD_OVERLAPCONFLICT; if ( fd_i -> flags & FD_NOT_MALLOCED )  fd_i -> flags &= ~FD_NOT_MALLOCED; fd_i -> data = NULL; dfpos = MAX ( dfpos , ( fd_i -> offset + fd_i -> len ) ); 
static void v9fs_stat(void *opaque) int32_t fid ; size_t offset = 7 ; V9fsFidState * fidp ; V9fsPDU * pdu = opaque ; err = pdu_unmarshal ( pdu , offset , "d" , & fid ); if ( err < 0 )  fidp = get_fid ( pdu , fid ); static V9fsFidState *get_fid(V9fsPDU *pdu, int32_t fid) int err ; V9fsFidState * f ; V9fsState * s = pdu -> s ; for (f = s->fid_list; f; f = f->next) if ( f -> fid == fid )  f -> ref ++; err = v9fs_reopen_fid ( pdu , f ); if ( err < 0 )  return NULL ; f -> flags |= FID_REFERENCED; return f ; return NULL ; if ( fidp == NULL )  err = v9fs_co_lstat ( pdu , & fidp -> path , & stbuf ); if ( err < 0 )  err = stat_to_v9stat ( pdu , & fidp -> path , & stbuf , & v9stat ); static int stat_to_v9stat(V9fsPDU *pdu, V9fsPath const struct stat V9fsStat *v9stat) memset ( v9stat , 0 , sizeof ( * v9stat ) ); stat_to_qid ( stbuf , & v9stat -> qid ); static void stat_to_qid(const struct stat *stbuf, V9fsQID *qidp) memset ( & qidp -> path , 0 , sizeof ( qidp -> path ) ); size = MIN ( sizeof ( stbuf -> st_ino ) , sizeof ( qidp -> path ) ); memcpy ( & qidp -> path , & stbuf -> st_ino , size ); qidp -> version = stbuf -> st_mtime ^ ( stbuf -> st_size << 8 ); qidp -> type = 0; qidp -> type |= P9_QID_TYPE_DIR; qidp -> type |= P9_QID_TYPE_SYMLINK; 
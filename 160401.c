static void v9fs_version(void *opaque) ssize_t err ; V9fsPDU * pdu = opaque ; V9fsState * s = pdu -> s ; V9fsString version ; size_t offset = 7 ; err = pdu_unmarshal ( pdu , offset , "ds" , & s -> msize , & version ); if ( err < 0 )  if ( ! strcmp ( version . data , "9P2000.u" ) )  if ( ! strcmp ( version . data , "9P2000.L" ) )  
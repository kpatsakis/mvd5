cups_file_t *				/* O - CUPS file or @code NULL@ if the file or socket cannot be opened CVE_2010_2431_VULN_cupsFileOpen(const char *filename,	/* I - Name of file const char *mode)		/* I - Open mode */ char hostname [ 1024 ] , * portname ; if ( ! filename || ! mode || ( * mode != 'r' && * mode != 'w' && * mode != 'a' && * mode != 's' ) || ( * mode == 'a' && isdigit ( mode [ 1 ] & 255 ) ) )  switch ( * mode )  if ( ( portname = strrchr ( hostname , ':' ) ) != NULL )  * portname ++ = '\0'; if ( ( addrlist = httpAddrGetList ( hostname , AF_UNSPEC , portname ) ) == NULL )  if ( ! httpAddrConnect ( addrlist , & fd ) )  httpAddrFreeList ( addrlist ); httpAddrFreeList ( addrlist ); 
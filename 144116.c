void CWE367_TOC_TOU__stat_07_bad() if ( staticFive == 5 )  char filename [ 100 ] = "" ; if ( fgets ( filename , 100 , stdin ) == NULL )  filename [ 0 ] = '\0'; if ( strlen ( filename ) > 0 )  filename [ strlen ( filename ) - 1 ] = '\0'; if ( STAT ( filename , & statBuffer ) == - 1 )  fileDesc = OPEN ( filename , O_RDWR ); if ( fileDesc == - 1 )  if ( WRITE ( fileDesc , BAD_SINK_STRING , strlen ( BAD_SINK_STRING ) ) == - 1 )  if ( fileDesc != - 1 )  CLOSE ( fileDesc ); 
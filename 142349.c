cgiEnvironmentResultType cgiReadEnvironment(char *filename) FILE * in ; cgiFormEntry * e = 0 , * p ; char * version ; in = fopen ( filename , "rb" ); if ( ! in )  if ( ! cgiReadString ( in , & version ) )  static int cgiReadString(FILE *in, char **s) int len ; if ( ! cgiReadInt ( in , & len ) )  static int cgiReadInt(FILE *out, int *i) if ( ! fread ( i , sizeof ( int ) , 1 , out ) )  return 0 ; return 1 ; return 0 ; * s = ( char * ) malloc ( len + 1 ); if ( ! ( * s ) )  return 0 ; if ( ( ( int ) fread ( * s , 1 , len , in ) ) != len )  return 0 ; return 1 ; if ( ! cgiReadString ( in , & cgiServerSoftware ) )  static int cgiReadString(FILE *in, char **s) int len ; if ( ! cgiReadInt ( in , & len ) )  return 0 ; * s = ( char * ) malloc ( len + 1 ); if ( ! ( * s ) )  return 0 ; if ( ( ( int ) fread ( * s , 1 , len , in ) ) != len )  return 0 ; return 1 ; if ( ! cgiReadString ( in , & cgiServerName ) )  static int cgiReadString(FILE *in, char **s) int len ; if ( ! cgiReadInt ( in , & len ) )  return 0 ; * s = ( char * ) malloc ( len + 1 ); if ( ! ( * s ) )  return 0 ; if ( ( ( int ) fread ( * s , 1 , len , in ) ) != len )  return 0 ; return 1 ; if ( ! cgiReadString ( in , & cgiGatewayInterface ) )  static int cgiReadString(FILE *in, char **s) int len ; if ( ! cgiReadInt ( in , & len ) )  return 0 ; * s = ( char * ) malloc ( len + 1 ); if ( ! ( * s ) )  return 0 ; if ( ( ( int ) fread ( * s , 1 , len , in ) ) != len )  return 0 ; return 1 ; if ( ! cgiReadString ( in , & cgiServerProtocol ) )  static int cgiReadString(FILE *in, char **s) int len ; if ( ! cgiReadInt ( in , & len ) )  return 0 ; * s = ( char * ) malloc ( len + 1 ); if ( ! ( * s ) )  return 0 ; if ( ( ( int ) fread ( * s , 1 , len , in ) ) != len )  return 0 ; return 1 ; if ( ! cgiReadString ( in , & cgiServerPort ) )  static int cgiReadString(FILE *in, char **s) int len ; if ( ! cgiReadInt ( in , & len ) )  return 0 ; * s = ( char * ) malloc ( len + 1 ); if ( ! ( * s ) )  return 0 ; if ( ( ( int ) fread ( * s , 1 , len , in ) ) != len )  return 0 ; return 1 ; if ( ! cgiReadString ( in , & cgiRequestMethod ) )  static int cgiReadString(FILE *in, char **s) int len ; if ( ! cgiReadInt ( in , & len ) )  return 0 ; * s = ( char * ) malloc ( len + 1 ); if ( ! ( * s ) )  return 0 ; if ( ( ( int ) fread ( * s , 1 , len , in ) ) != len )  return 0 ; return 1 ; if ( ! cgiReadString ( in , & cgiPathInfo ) )  static int cgiReadString(FILE *in, char **s) int len ; if ( ! cgiReadInt ( in , & len ) )  return 0 ; * s = ( char * ) malloc ( len + 1 ); if ( ! ( * s ) )  return 0 ; if ( ( ( int ) fread ( * s , 1 , len , in ) ) != len )  return 0 ; return 1 ; if ( ! cgiReadString ( in , & cgiPathTranslated ) )  static int cgiReadString(FILE *in, char **s) int len ; if ( ! cgiReadInt ( in , & len ) )  return 0 ; * s = ( char * ) malloc ( len + 1 ); if ( ! ( * s ) )  return 0 ; if ( ( ( int ) fread ( * s , 1 , len , in ) ) != len )  return 0 ; return 1 ; if ( ! cgiReadString ( in , & cgiScriptName ) )  static int cgiReadString(FILE *in, char **s) int len ; if ( ! cgiReadInt ( in , & len ) )  return 0 ; * s = ( char * ) malloc ( len + 1 ); if ( ! ( * s ) )  return 0 ; if ( ( ( int ) fread ( * s , 1 , len , in ) ) != len )  return 0 ; return 1 ; if ( ! cgiReadString ( in , & cgiQueryString ) )  static int cgiReadString(FILE *in, char **s) int len ; if ( ! cgiReadInt ( in , & len ) )  return 0 ; * s = ( char * ) malloc ( len + 1 ); if ( ! ( * s ) )  return 0 ; if ( ( ( int ) fread ( * s , 1 , len , in ) ) != len )  return 0 ; return 1 ; if ( ! cgiReadString ( in , & cgiRemoteHost ) )  static int cgiReadString(FILE *in, char **s) int len ; if ( ! cgiReadInt ( in , & len ) )  return 0 ; * s = ( char * ) malloc ( len + 1 ); if ( ! ( * s ) )  return 0 ; if ( ( ( int ) fread ( * s , 1 , len , in ) ) != len )  return 0 ; return 1 ; if ( ! cgiReadString ( in , & cgiRemoteAddr ) )  static int cgiReadString(FILE *in, char **s) int len ; if ( ! cgiReadInt ( in , & len ) )  return 0 ; * s = ( char * ) malloc ( len + 1 ); if ( ! ( * s ) )  return 0 ; if ( ( ( int ) fread ( * s , 1 , len , in ) ) != len )  return 0 ; return 1 ; if ( ! cgiReadString ( in , & cgiAuthType ) )  static int cgiReadString(FILE *in, char **s) int len ; if ( ! cgiReadInt ( in , & len ) )  return 0 ; * s = ( char * ) malloc ( len + 1 ); if ( ! ( * s ) )  return 0 ; if ( ( ( int ) fread ( * s , 1 , len , in ) ) != len )  return 0 ; return 1 ; if ( ! cgiReadString ( in , & cgiRemoteUser ) )  static int cgiReadString(FILE *in, char **s) int len ; if ( ! cgiReadInt ( in , & len ) )  return 0 ; * s = ( char * ) malloc ( len + 1 ); if ( ! ( * s ) )  return 0 ; if ( ( ( int ) fread ( * s , 1 , len , in ) ) != len )  return 0 ; return 1 ; if ( ! cgiReadString ( in , & cgiRemoteIdent ) )  static int cgiReadString(FILE *in, char **s) int len ; if ( ! cgiReadInt ( in , & len ) )  return 0 ; * s = ( char * ) malloc ( len + 1 ); if ( ! ( * s ) )  return 0 ; if ( ( ( int ) fread ( * s , 1 , len , in ) ) != len )  return 0 ; return 1 ; if ( ! cgiReadString ( in , & cgiContentType ) )  static int cgiReadString(FILE *in, char **s) int len ; if ( ! cgiReadInt ( in , & len ) )  return 0 ; * s = ( char * ) malloc ( len + 1 ); if ( ! ( * s ) )  return 0 ; if ( ( ( int ) fread ( * s , 1 , len , in ) ) != len )  return 0 ; return 1 ; if ( ! cgiReadString ( in , & cgiAccept ) )  static int cgiReadString(FILE *in, char **s) int len ; if ( ! cgiReadInt ( in , & len ) )  return 0 ; * s = ( char * ) malloc ( len + 1 ); if ( ! ( * s ) )  return 0 ; if ( ( ( int ) fread ( * s , 1 , len , in ) ) != len )  return 0 ; return 1 ; if ( ! cgiReadString ( in , & cgiUserAgent ) )  static int cgiReadString(FILE *in, char **s) int len ; if ( ! cgiReadInt ( in , & len ) )  return 0 ; * s = ( char * ) malloc ( len + 1 ); if ( ! ( * s ) )  return 0 ; if ( ( ( int ) fread ( * s , 1 , len , in ) ) != len )  return 0 ; return 1 ; if ( ! cgiReadString ( in , & cgiReferrer ) )  static int cgiReadString(FILE *in, char **s) int len ; if ( ! cgiReadInt ( in , & len ) )  return 0 ; * s = ( char * ) malloc ( len + 1 ); if ( ! ( * s ) )  return 0 ; if ( ( ( int ) fread ( * s , 1 , len , in ) ) != len )  return 0 ; return 1 ; if ( ! cgiReadString ( in , & cgiCookie ) )  static int cgiReadString(FILE *in, char **s) int len ; if ( ! cgiReadInt ( in , & len ) )  return 0 ; * s = ( char * ) malloc ( len + 1 ); if ( ! ( * s ) )  return 0 ; if ( ( ( int ) fread ( * s , 1 , len , in ) ) != len )  return 0 ; return 1 ; if ( ! cgiReadInt ( in , & cgiContentLength ) )  static int cgiReadInt(FILE *out, int *i) if ( ! fread ( i , sizeof ( int ) , 1 , out ) )  return 0 ; return 1 ; while ( 1 )  int fileFlag ; e = ( cgiFormEntry * ) calloc ( 1 , sizeof ( cgiFormEntry ) ); if ( ! e )  memset ( e , 0 , sizeof ( cgiFormEntry ) ); if ( ! cgiReadString ( in , & e -> attr ) )  static int cgiReadString(FILE *in, char **s) int len ; if ( ! cgiReadInt ( in , & len ) )  return 0 ; * s = ( char * ) malloc ( len + 1 ); if ( ! ( * s ) )  return 0 ; if ( ( ( int ) fread ( * s , 1 , len , in ) ) != len )  return 0 ; return 1 ; if ( ! cgiReadString ( in , & e -> value ) )  static int cgiReadString(FILE *in, char **s) int len ; if ( ! cgiReadInt ( in , & len ) )  return 0 ; * s = ( char * ) malloc ( len + 1 ); if ( ! ( * s ) )  return 0 ; if ( ( ( int ) fread ( * s , 1 , len , in ) ) != len )  return 0 ; return 1 ; if ( ! cgiReadString ( in , & e -> fileName ) )  static int cgiReadString(FILE *in, char **s) int len ; if ( ! cgiReadInt ( in , & len ) )  return 0 ; * s = ( char * ) malloc ( len + 1 ); if ( ! ( * s ) )  return 0 ; if ( ( ( int ) fread ( * s , 1 , len , in ) ) != len )  return 0 ; return 1 ; if ( ! cgiReadString ( in , & e -> contentType ) )  static int cgiReadString(FILE *in, char **s) int len ; if ( ! cgiReadInt ( in , & len ) )  return 0 ; * s = ( char * ) malloc ( len + 1 ); if ( ! ( * s ) )  return 0 ; if ( ( ( int ) fread ( * s , 1 , len , in ) ) != len )  return 0 ; return 1 ; if ( ! cgiReadInt ( in , & e -> valueLength ) )  static int cgiReadInt(FILE *out, int *i) if ( ! fread ( i , sizeof ( int ) , 1 , out ) )  return 0 ; return 1 ; if ( ! cgiReadInt ( in , & fileFlag ) )  static int cgiReadInt(FILE *out, int *i) if ( ! fread ( i , sizeof ( int ) , 1 , out ) )  return 0 ; return 1 ; if ( fileFlag )  char buffer [ 1024 ] ; FILE * out ; char tfileName [ 1024 ] ; int got ; int len = e -> valueLength ; if ( getTempFileName ( tfileName ) != cgiParseSuccess )  static cgiParseResultType getTempFileName(char *tfileName) int outfd ; strcpy ( tfileName , cgicTempDir "/cgicXXXXXX" ) outfd = mkstemp ( tfileName ); if ( outfd == - 1 )  return cgiParseIO ; if ( chmod ( tfileName , 0600 ) != 0 )  return cgiParseIO ; return cgiParseSuccess ; out = fopen ( tfileName , "w+b" ); if ( ! out )  while ( len > 0 )  int tryr = len ; if ( tryr > ( ( int ) sizeof ( buffer ) ) )  tryr = sizeof ( buffer ); got = fread ( buffer , 1 , tryr , in ); if ( got <= 0 )  if ( ( ( int ) fwrite ( buffer , 1 , got , out ) ) != got )  len -= got; e -> tfileName = ( char * ) malloc ( ( int ) strlen ( tfileName ) + 1 ); if ( ! e -> tfileName )  e -> tfileName = ( char * ) malloc ( 1 ); if ( ! e -> tfileName )  e -> tfileName [ 0 ] = '\0'; e -> next = 0; if ( e )  free ( e ); 
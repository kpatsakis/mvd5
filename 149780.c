int main(int argc, char *argv[]) char * e ; e = getenv ( "CONTENT_TYPE" ); if ( e )  cgiContentType [ 0 ] = '\0'; if ( cgiStrEqNc ( cgiRequestMethod , "post" ) )  if ( cgiStrEqNc ( cgiContentType , "application/x-www-form-urlencoded" ) )  static int cgiStrEqNc(char *s1, char *s2) while ( 1 )  if ( ! ( * s1 ) )  if ( ! ( * s2 ) )  return 1 ; return 0 ; if ( ! ( * s2 ) )  return 0 ; if ( isalpha ( * s1 ) )  if ( tolower ( * s1 ) != tolower ( * s2 ) )  return 0 ; if ( ( * s1 ) != ( * s2 ) )  return 0 ; s1 ++; s2 ++; if ( cgiParsePostFormInput ( ) != cgiParseSuccess )  static cgiParseResultType cgiParsePostFormInput() char * input ; cgiParseResultType result ; if ( ! cgiContentLength )  return cgiParseSuccess ; input = ( char * ) malloc ( cgiContentLength ); if ( ! input )  return cgiParseMemory ; if ( ( ( int ) fread ( input , 1 , cgiContentLength , cgiIn ) ) != cgiContentLength )  return cgiParseIO ; result = cgiParseFormInput ( input , cgiContentLength ); static cgiParseResultType cgiParseFormInput(char *data, int length) int pos = 0 ; cgiFormEntry * n ; while ( pos != length )  int foundEq = 0 ; int foundAmp = 0 ; int start = pos ; int len = 0 ; char * attr ; char * value ; while ( pos != length )  if ( data [ pos ] == '=' )  foundEq = 1; pos ++; pos ++; len ++; if ( ! foundEq )  if ( cgiUnescapeChars ( & attr , data + start , len ) != cgiUnescapeSuccess )  return cgiParseMemory ; start = pos; len = 0; while ( pos != length )  if ( data [ pos ] == '&' )  foundAmp = 1; pos ++; pos ++; len ++; if ( cgiUnescapeChars ( & value , data + start , len ) != cgiUnescapeSuccess )  return cgiParseMemory ; n = ( cgiFormEntry * ) malloc ( sizeof ( cgiFormEntry ) ); if ( ! n )  return cgiParseMemory ; n -> attr = attr; n -> value = value; n -> valueLength = strlen ( n -> value ); n -> fileName = ( char * ) malloc ( 1 ); if ( ! n -> fileName )  return cgiParseMemory ; n -> fileName [ 0 ] = '\0'; n -> contentType = ( char * ) malloc ( 1 ); if ( ! n -> contentType )  return cgiParseMemory ; n -> contentType [ 0 ] = '\0'; n -> tfileName = ( char * ) malloc ( 1 ); if ( ! n -> tfileName )  return cgiParseMemory ; if ( ! foundAmp )  return cgiParseSuccess ; return result ; cgiHeaderStatus ( 500 , "Error reading form data" ); void cgiHeaderStatus(int status, char *statusMessage) fprintf ( cgiOut , "Status: %d %s\r\n\r\n" , status , statusMessage ); 
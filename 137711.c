cgiFormResultType char *name, char *result, int resultSpace) cgiFormEntry * e ; e = cgiFormEntryFindFirst ( name ); static cgiFormEntry *cgiFormEntryFindFirst(char *name) return cgiFormEntryFindNext ( ) ; static cgiFormEntry *cgiFormEntryFindNext() while ( cgiFindPos )  cgiFormEntry * c = cgiFindPos ; cgiFindPos = c -> next; if ( ! strcmp ( c -> attr , cgiFindTarget ) )  return c ; return 0 ; if ( ! e )  if ( ! strlen ( e -> contentType ) )  if ( ( ( int ) strlen ( e -> contentType ) ) > ( resultSpace - 1 ) )  
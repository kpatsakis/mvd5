int main(int argc, char *argv[]) buf = malloc ( 25 * sizeof ( char ) ); if ( buf != ( char * ) NULL )  char * t = rand_text ( ) ; char *rand_text() unsigned length = ( rand ( ) % 25 ) - 1 ; char * t = malloc ( length * sizeof ( char ) ) ; if ( ! t )  return NULL ; unsigned i = 0 ; for (;i<length;++i) t [ i ] = ( char ) ( ( rand ( ) % 26 ) + 'a' ); t [ i - 1 ] = '\0'; return t ; if ( t )  free ( t ); 
int main(int argc, char *argv[]) short badAlloc = 0 ; if ( argc > 1 )  const unsigned int nbArgs = argc - 1 ; if ( ( fileNames = ( char * * ) malloc ( ( nbArgs ) * sizeof ( char * * ) ) ) == NULL )  for (unsigned int i=0;i<nbArgs;++i) if ( ! ( fileNames [ i ] = ( char * ) malloc ( 256 * sizeof ( char ) ) ) )  badAlloc = 1; if ( ! badAlloc )  for (unsigned int i=0;i<nbArgs;++i) free ( fileNames [ i ] ); 
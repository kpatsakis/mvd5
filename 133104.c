int main(int argc, char *argv[]) if ( argc > 1 )  const unsigned int nbArgs = argc - 1 ; if ( ( fileNames = ( char * * ) malloc ( ( nbArgs ) * sizeof ( char * * ) ) ) == NULL )  for (unsigned int i=0;i<nbArgs;++i) if ( ! ( fileNames [ i ] = ( char * ) malloc ( 256 * sizeof ( char ) ) ) )  strncpy ( fileNames [ i ] , argv [ i + 1 ] , 255 ); inputFiltering ( fileNames [ i ] ); void inputFiltering(char *fName) char * c = fName , * b = buf ; for (;*c != '\0';c++) while ( * c == '/' )  c ++; * b ++ = * c; strncpy ( fName , buf , 255 ); for (unsigned int i=0;i<nbArgs;++i) if ( printFile ( fileNames [ i ] ) )  int printFile(const char *fileName) if ( fp = fopen ( fileName , "r" ) )  printf ( ">>> %s\n" , fileName ); while ( fgets ( buffer , 512 , fp ) )  printf ( "%3d: %s" , ++ lNumber , buffer ); fclose ( fp ); printf ( "Argument error, the given argument is not a readable file (%s).\n" , fileNames [ i ] ); for (unsigned int i=0;i<nbArgs;++i) free ( fileNames [ i ] ); free ( fileNames ); 
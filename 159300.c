void bad() list < char * > dataList ; badSink ( dataList ); void badSink(list<char *> dataList) char * data = dataList . back ( ) ; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 
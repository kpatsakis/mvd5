void bad() char * data ; data = new char [ 100 ]; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; badSink ( & data ); void badSink(char * * dataPtr) char * data = * dataPtr ; char dest [ 50 ] = "" ; strcat ( dest , data ); 
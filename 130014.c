static void goodG2B() int h ; char * data ; data = new char [ 100 ]; for(h = 0; h < 1; h++) memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; size_t i , dataLen ; dataLen = strlen ( data ); for (i = 0; i < dataLen; i++) 
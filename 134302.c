void bad() char * data ; char * * dataPtr1 = & data ; char * * dataPtr2 = & data ; data = new char [ 100 ]; char * data = * dataPtr1 ; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; char * data = * dataPtr2 ; size_t i , dataLen ; dataLen = strlen ( data ); for (i = 0; i < dataLen; i++) 
void bad() vector < wchar_t * > dataVector ; badSink ( dataVector ); void badSink(vector<wchar_t *> dataVector) wchar_t * data = dataVector [ 2 ] ; wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' wcscpy ( data , source ); free ( data ); 
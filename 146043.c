void bad() vector < wchar_t * > dataVector ; badSink ( dataVector ); void badSink(vector<wchar_t *> dataVector) wchar_t * data = dataVector [ 2 ] ; badVaSink ( data , data ); static void badVaSink(wchar_t * data, ...) wchar_t dest [ 100 ] = L "" va_list args ; _vsnwprintf ( dest , 100 - 1 , data , args ); 
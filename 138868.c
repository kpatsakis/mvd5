void bad() wchar_t * data ; data = new wchar_t [ 100 ]; data = badSource ( data ); static wchar_t * badSource(wchar_t * data) wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' return data ; wchar_t dest [ 50 ] = L "" wcscpy ( dest , data ); 
static token parse_bracket_exp() int c ; int c1 ; int c2 ; charclass ccl ; wint_t wc ; wint_t wc2 ; wint_t wc1 = 0 ; memset ( ccl , 0 , sizeof ( ccl ) ); if ( ! lexleft )  if ( gettext ( "unbalanced [" ) != 0 )  wchar_t _wc ; cur_mb_len = ( mbrtowc ( & _wc , lexptr , lexleft , & mbs ) ); if ( cur_mb_len <= 0 )  cur_mb_len = 1; wc = ( c = ( to_uchar ( * ( lexptr ++ ) ) ) ); lexptr += cur_mb_len; lexleft -= cur_mb_len; wc = _wc; c = wctob ( wc ); while ( 0 )  if ( c == '^' )  if ( ! lexleft )  if ( gettext ( "unbalanced [" ) != 0 )  wchar_t _wc ; cur_mb_len = ( mbrtowc ( & _wc , lexptr , lexleft , & mbs ) ); if ( cur_mb_len <= 0 )  cur_mb_len = 1; wc = ( c = ( to_uchar ( * ( lexptr ++ ) ) ) ); lexptr += cur_mb_len; lexleft -= cur_mb_len; wc = _wc; c = wctob ( wc ); while ( 0 )  c1 = - 1; if ( c == '[' && syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 )  if ( ! lexleft )  if ( gettext ( "unbalanced [" ) != 0 )  wchar_t _wc ; cur_mb_len = ( mbrtowc ( & _wc , lexptr , lexleft , & mbs ) ); if ( cur_mb_len <= 0 )  cur_mb_len = 1; wc1 = ( c1 = ( to_uchar ( * ( lexptr ++ ) ) ) ); lexptr += cur_mb_len; lexleft -= cur_mb_len; wc1 = _wc; c1 = wctob ( wc1 ); while ( 0 )  if ( c1 == ':' || __ctype_get_mb_cur_max ( ) > 1 && ( c1 == '.' || c1 == '=' ) )  if ( ! lexleft )  if ( gettext ( "unbalanced [" ) != 0 )  wchar_t _wc ; cur_mb_len = ( mbrtowc ( & _wc , lexptr , lexleft , & mbs ) ); if ( cur_mb_len <= 0 )  cur_mb_len = 1; wc = ( c = ( to_uchar ( * ( lexptr ++ ) ) ) ); lexptr += cur_mb_len; lexleft -= cur_mb_len; wc = _wc; c = wctob ( wc ); while ( 0 )  if ( c == c1 && ( * lexptr ) == ']' || lexleft == 0 )  if ( ! lexleft )  if ( gettext ( "unbalanced [" ) != 0 )  cur_mb_len = ( mbrtowc ( & _wc , lexptr , lexleft , & mbs ) ); if ( cur_mb_len <= 0 )  cur_mb_len = 1; wc = ( c = ( to_uchar ( * ( lexptr ++ ) ) ) ); lexptr += cur_mb_len; lexleft -= cur_mb_len; while ( 0 )  if ( c1 == ':' )  if ( ! lexleft )  if ( gettext ( "unbalanced [" ) != 0 )  wchar_t _wc ; cur_mb_len = ( mbrtowc ( & _wc , lexptr , lexleft , & mbs ) ); if ( cur_mb_len <= 0 )  cur_mb_len = 1; wc1 = ( c1 = ( to_uchar ( * ( lexptr ++ ) ) ) ); lexptr += cur_mb_len; lexleft -= cur_mb_len; wc1 = _wc; c1 = wctob ( wc1 ); while ( 0 )  if ( c == '\\' && syntax_bits & ( ( unsigned long ) 1 ) )  if ( ! lexleft )  if ( gettext ( "unbalanced [" ) != 0 )  wchar_t _wc ; cur_mb_len = ( mbrtowc ( & _wc , lexptr , lexleft , & mbs ) ); if ( cur_mb_len <= 0 )  cur_mb_len = 1; wc = ( c = ( to_uchar ( * ( lexptr ++ ) ) ) ); lexptr += cur_mb_len; lexleft -= cur_mb_len; wc = _wc; c = wctob ( wc ); while ( 0 )  if ( c1 == - 1 )  if ( ! lexleft )  if ( gettext ( "unbalanced [" ) != 0 )  wchar_t _wc ; cur_mb_len = ( mbrtowc ( & _wc , lexptr , lexleft , & mbs ) ); if ( cur_mb_len <= 0 )  cur_mb_len = 1; wc1 = ( c1 = ( to_uchar ( * ( lexptr ++ ) ) ) ); lexptr += cur_mb_len; lexleft -= cur_mb_len; wc1 = _wc; c1 = wctob ( wc1 ); while ( 0 )  if ( c1 == '-' )  if ( ! lexleft )  if ( gettext ( "unbalanced [" ) != 0 )  wchar_t _wc ; cur_mb_len = ( mbrtowc ( & _wc , lexptr , lexleft , & mbs ) ); if ( cur_mb_len <= 0 )  cur_mb_len = 1; wc2 = ( c2 = ( to_uchar ( * ( lexptr ++ ) ) ) ); lexptr += cur_mb_len; lexleft -= cur_mb_len; wc2 = _wc; c2 = wctob ( wc2 ); while ( 0 )  if ( c2 == ']' )  lexptr -= cur_mb_len; lexleft += cur_mb_len; if ( c1 == '-' && c2 != ']' )  if ( c2 == '\\' && syntax_bits & ( ( unsigned long ) 1 ) )  if ( ! lexleft )  if ( gettext ( "unbalanced [" ) != 0 )  wchar_t _wc ; cur_mb_len = ( mbrtowc ( & _wc , lexptr , lexleft , & mbs ) ); if ( cur_mb_len <= 0 )  cur_mb_len = 1; wc2 = ( c2 = ( to_uchar ( * ( lexptr ++ ) ) ) ); lexptr += cur_mb_len; lexleft -= cur_mb_len; wc2 = _wc; c2 = wctob ( wc2 ); while ( 0 )  if ( __ctype_get_mb_cur_max ( ) > 1 )  c1 = c; if ( case_fold )  c1 = tolower ( c1 ); c2 = tolower ( c2 ); if ( ! lexleft )  if ( gettext ( "unbalanced [" ) != 0 )  wchar_t _wc ; cur_mb_len = ( mbrtowc ( & _wc , lexptr , lexleft , & mbs ) ); if ( cur_mb_len <= 0 )  cur_mb_len = 1; wc1 = ( c1 = ( to_uchar ( * ( lexptr ++ ) ) ) ); lexptr += cur_mb_len; lexleft -= cur_mb_len; wc1 = _wc; c1 = wctob ( wc1 ); while ( 0 )  while ( wc = wc1 , ( c = c1 ) != ']' )  if ( __ctype_get_mb_cur_max ( ) > 1 )  return ( CSET + charclass_index ( ccl ) ) ; static size_t charclass_index(const int s[((1 << 8) + 8 * sizeof(int ) - 1) / (8 * sizeof(int ))]) size_t i ; for (i = 0; i < dfa -> cindex; ++i) if ( equal ( s , dfa -> charclasses [ i ] ) )  if ( dfa -> calloc <= dfa -> cindex + 1 )  size_t new_n_alloc = dfa -> cindex + 1 + ( ! dfa -> charclasses ) ; dfa -> charclasses = ( x2nrealloc ( ( dfa -> charclasses ) , & new_n_alloc , sizeof ( ( * dfa -> charclasses ) ) ) ); dfa -> calloc = new_n_alloc; while ( 0 )  copyset ( s , dfa -> charclasses [ i ] ); static void copyset(const int src[((1 << 8) + 8 * sizeof(int ) - 1) / (8 * sizeof(int ))],charclass dst) memcpy ( dst , src , sizeof ( charclass ) ); 
static token parse_bracket_exp() int invert ; int c ; int c1 ; int c2 ; charclass ccl ; wint_t wc ; wint_t wc2 ; wint_t wc1 = 0 ; struct mb_char_classes * work_mbc ; size_t chars_al ; size_t range_sts_al ; size_t range_ends_al ; size_t ch_classes_al ; size_t equivs_al ; size_t coll_elems_al ; chars_al = 0; range_sts_al = range_ends_al = 0; ch_classes_al = equivs_al = coll_elems_al = 0; if ( __ctype_get_mb_cur_max ( ) > 1 )  if ( dfa -> mbcsets_alloc <= dfa -> nmbcsets + 1 )  size_t new_n_alloc = dfa -> nmbcsets + 1 + ( ! dfa -> mbcsets ) ; dfa -> mbcsets = ( x2nrealloc ( ( dfa -> mbcsets ) , & new_n_alloc , sizeof ( ( * dfa -> mbcsets ) ) ) ); dfa -> mbcsets_alloc = new_n_alloc; while ( 0 )  work_mbc = & dfa -> mbcsets [ dfa -> nmbcsets ++ ]; memset ( work_mbc , 0 , sizeof ( ( * work_mbc ) ) ); work_mbc = ( ( void * ) 0 ); memset ( ccl , 0 , sizeof ( ccl ) ); if ( ! lexleft )  if ( gettext ( "unbalanced [" ) != 0 )  wchar_t _wc ; cur_mb_len = ( mbrtowc ( & _wc , lexptr , lexleft , & mbs ) ); if ( cur_mb_len <= 0 )  cur_mb_len = 1; wc = ( c = ( to_uchar ( * ( lexptr ++ ) ) ) ); lexptr += cur_mb_len; lexleft -= cur_mb_len; wc = _wc; c = wctob ( wc ); while ( 0 )  if ( c == '^' )  if ( ! lexleft )  if ( gettext ( "unbalanced [" ) != 0 )  wchar_t _wc ; cur_mb_len = ( mbrtowc ( & _wc , lexptr , lexleft , & mbs ) ); if ( cur_mb_len <= 0 )  cur_mb_len = 1; wc = ( c = ( to_uchar ( * ( lexptr ++ ) ) ) ); lexptr += cur_mb_len; lexleft -= cur_mb_len; wc = _wc; c = wctob ( wc ); while ( 0 )  invert = 1; invert = 0; c1 = - 1; if ( c == '[' && syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 )  char str [ 128 ] ; if ( ! lexleft )  if ( gettext ( "unbalanced [" ) != 0 )  wchar_t _wc ; cur_mb_len = ( mbrtowc ( & _wc , lexptr , lexleft , & mbs ) ); if ( cur_mb_len <= 0 )  cur_mb_len = 1; wc1 = ( c1 = ( to_uchar ( * ( lexptr ++ ) ) ) ); lexptr += cur_mb_len; lexleft -= cur_mb_len; wc1 = _wc; c1 = wctob ( wc1 ); while ( 0 )  if ( c1 == ':' || __ctype_get_mb_cur_max ( ) > 1 && ( c1 == '.' || c1 == '=' ) )  size_t len = 0 ; if ( ! lexleft )  if ( gettext ( "unbalanced [" ) != 0 )  wchar_t _wc ; cur_mb_len = ( mbrtowc ( & _wc , lexptr , lexleft , & mbs ) ); if ( cur_mb_len <= 0 )  cur_mb_len = 1; wc = ( c = ( to_uchar ( * ( lexptr ++ ) ) ) ); lexptr += cur_mb_len; lexleft -= cur_mb_len; wc = _wc; c = wctob ( wc ); while ( 0 )  if ( c == c1 && ( * lexptr ) == ']' || lexleft == 0 )  if ( len < 128 )  str [ len ++ ] = c; str [ 0 ] = '\0'; str [ len ] = '\0'; if ( ! lexleft )  if ( gettext ( "unbalanced [" ) != 0 )  cur_mb_len = ( mbrtowc ( & _wc , lexptr , lexleft , & mbs ) ); if ( cur_mb_len <= 0 )  cur_mb_len = 1; wc = ( c = ( to_uchar ( * ( lexptr ++ ) ) ) ); lexptr += cur_mb_len; lexleft -= cur_mb_len; while ( 0 )  if ( c1 == ':' )  const char * class = case_fold && ( strcmp ( str , "upper" ) == 0 || strcmp ( str , "lower" ) == 0 ) ? "alpha" : const struct dfa_ctype * pred = find_pred ( class ) if ( __ctype_get_mb_cur_max ( ) > 1 && ! pred -> single_byte_only )  wctype_t wt = wctype ( class ) if ( ch_classes_al <= work_mbc -> nch_classes + 1 )  size_t new_n_alloc = work_mbc -> nch_classes + 1 + ( ! work_mbc -> ch_classes ) ; work_mbc -> ch_classes = ( x2nrealloc ( ( work_mbc -> ch_classes ) , & new_n_alloc , sizeof ( ( * work_mbc -> ch_classes ) ) ) ); ch_classes_al = new_n_alloc; while ( 0 )  work_mbc -> ch_classes [ work_mbc -> nch_classes ++ ] = wt; if ( 1 && ( c1 == '=' || c1 == '.' ) )  char * elem = ( xmemdup ( str , len + 1 ) ) ; if ( c1 == '=' )  if ( equivs_al <= work_mbc -> nequivs + 1 )  size_t new_n_alloc = work_mbc -> nequivs + 1 + ( ! work_mbc -> equivs ) ; work_mbc -> equivs = ( x2nrealloc ( ( work_mbc -> equivs ) , & new_n_alloc , sizeof ( ( * work_mbc -> equivs ) ) ) ); equivs_al = new_n_alloc; while ( 0 )  work_mbc -> equivs [ work_mbc -> nequivs ++ ] = elem; if ( c1 == '.' )  if ( coll_elems_al <= work_mbc -> ncoll_elems + 1 )  size_t new_n_alloc = work_mbc -> ncoll_elems + 1 + ( ! work_mbc -> coll_elems ) ; work_mbc -> coll_elems = ( x2nrealloc ( ( work_mbc -> coll_elems ) , & new_n_alloc , sizeof ( ( * work_mbc -> coll_elems ) ) ) ); coll_elems_al = new_n_alloc; while ( 0 )  work_mbc -> coll_elems [ work_mbc -> ncoll_elems ++ ] = elem; if ( ! lexleft )  if ( gettext ( "unbalanced [" ) != 0 )  wchar_t _wc ; cur_mb_len = ( mbrtowc ( & _wc , lexptr , lexleft , & mbs ) ); if ( cur_mb_len <= 0 )  cur_mb_len = 1; wc1 = ( c1 = ( to_uchar ( * ( lexptr ++ ) ) ) ); lexptr += cur_mb_len; lexleft -= cur_mb_len; wc1 = _wc; c1 = wctob ( wc1 ); while ( 0 )  if ( c == '\\' && syntax_bits & ( ( unsigned long ) 1 ) )  if ( ! lexleft )  if ( gettext ( "unbalanced [" ) != 0 )  wchar_t _wc ; cur_mb_len = ( mbrtowc ( & _wc , lexptr , lexleft , & mbs ) ); if ( cur_mb_len <= 0 )  cur_mb_len = 1; wc = ( c = ( to_uchar ( * ( lexptr ++ ) ) ) ); lexptr += cur_mb_len; lexleft -= cur_mb_len; wc = _wc; c = wctob ( wc ); while ( 0 )  if ( c1 == - 1 )  if ( ! lexleft )  if ( gettext ( "unbalanced [" ) != 0 )  wchar_t _wc ; cur_mb_len = ( mbrtowc ( & _wc , lexptr , lexleft , & mbs ) ); if ( cur_mb_len <= 0 )  cur_mb_len = 1; wc1 = ( c1 = ( to_uchar ( * ( lexptr ++ ) ) ) ); lexptr += cur_mb_len; lexleft -= cur_mb_len; wc1 = _wc; c1 = wctob ( wc1 ); while ( 0 )  if ( c1 == '-' )  if ( ! lexleft )  if ( gettext ( "unbalanced [" ) != 0 )  wchar_t _wc ; cur_mb_len = ( mbrtowc ( & _wc , lexptr , lexleft , & mbs ) ); if ( cur_mb_len <= 0 )  cur_mb_len = 1; wc2 = ( c2 = ( to_uchar ( * ( lexptr ++ ) ) ) ); lexptr += cur_mb_len; lexleft -= cur_mb_len; wc2 = _wc; c2 = wctob ( wc2 ); while ( 0 )  if ( c2 == ']' )  lexptr -= cur_mb_len; lexleft += cur_mb_len; if ( c1 == '-' && c2 != ']' )  if ( c2 == '\\' && syntax_bits & ( ( unsigned long ) 1 ) )  if ( ! lexleft )  if ( gettext ( "unbalanced [" ) != 0 )  wchar_t _wc ; cur_mb_len = ( mbrtowc ( & _wc , lexptr , lexleft , & mbs ) ); if ( cur_mb_len <= 0 )  cur_mb_len = 1; wc2 = ( c2 = ( to_uchar ( * ( lexptr ++ ) ) ) ); lexptr += cur_mb_len; lexleft -= cur_mb_len; wc2 = _wc; c2 = wctob ( wc2 ); while ( 0 )  if ( __ctype_get_mb_cur_max ( ) > 1 )  if ( range_sts_al <= work_mbc -> nranges + 1 )  size_t new_n_alloc = work_mbc -> nranges + 1 + ( ! work_mbc -> range_sts ) ; work_mbc -> range_sts = ( x2nrealloc ( ( work_mbc -> range_sts ) , & new_n_alloc , sizeof ( ( * work_mbc -> range_sts ) ) ) ); range_sts_al = new_n_alloc; while ( 0 )  if ( range_ends_al <= work_mbc -> nranges + 1 )  size_t new_n_alloc = work_mbc -> nranges + 1 + ( ! work_mbc -> range_ends ) ; work_mbc -> range_ends = ( x2nrealloc ( ( work_mbc -> range_ends ) , & new_n_alloc , sizeof ( ( * work_mbc -> range_ends ) ) ) ); range_ends_al = new_n_alloc; while ( 0 )  work_mbc -> range_sts [ work_mbc -> nranges ] = ( ( case_fold ? towlower ( wc ) : ( ( wchar_t ) wc ) ) ); work_mbc -> range_ends [ work_mbc -> nranges ++ ] = ( ( case_fold ? towlower ( wc2 ) : ( ( wchar_t ) wc2 ) ) ); c1 = c; if ( case_fold )  c1 = tolower ( c1 ); c2 = tolower ( c2 ); if ( ! lexleft )  if ( gettext ( "unbalanced [" ) != 0 )  wchar_t _wc ; cur_mb_len = ( mbrtowc ( & _wc , lexptr , lexleft , & mbs ) ); if ( cur_mb_len <= 0 )  cur_mb_len = 1; wc1 = ( c1 = ( to_uchar ( * ( lexptr ++ ) ) ) ); lexptr += cur_mb_len; lexleft -= cur_mb_len; wc1 = _wc; c1 = wctob ( wc1 ); while ( 0 )  if ( __ctype_get_mb_cur_max ( ) == 1 )  if ( case_fold && iswalpha ( wc ) )  wc = towlower ( wc ); if ( ! setbit_wc ( wc , ccl ) )  if ( chars_al <= work_mbc -> nchars + 1 )  size_t new_n_alloc = work_mbc -> nchars + 1 + ( ! work_mbc -> chars ) ; work_mbc -> chars = ( x2nrealloc ( ( work_mbc -> chars ) , & new_n_alloc , sizeof ( ( * work_mbc -> chars ) ) ) ); chars_al = new_n_alloc; while ( 0 )  work_mbc -> chars [ work_mbc -> nchars ++ ] = wc; if ( ! setbit_wc ( wc , ccl ) )  if ( chars_al <= work_mbc -> nchars + 1 )  size_t new_n_alloc = work_mbc -> nchars + 1 + ( ! work_mbc -> chars ) ; work_mbc -> chars = ( x2nrealloc ( ( work_mbc -> chars ) , & new_n_alloc , sizeof ( ( * work_mbc -> chars ) ) ) ); chars_al = new_n_alloc; while ( 0 )  work_mbc -> chars [ work_mbc -> nchars ++ ] = wc; while ( wc = wc1 , ( c = c1 ) != ']' )  if ( __ctype_get_mb_cur_max ( ) > 1 )  static charclass zeroclass ; work_mbc -> invert = invert; work_mbc -> cset = ( ( equal ( ccl , zeroclass ) ? ( - 1 ) : charclass_index ( ccl ) ) ); static size_t charclass_index(const int s[((1 << 8) + 8 * sizeof(int ) - 1) / (8 * sizeof(int ))]) size_t i ; for (i = 0; i < dfa -> cindex; ++i) if ( equal ( s , dfa -> charclasses [ i ] ) )  static int equal(const int s1[((1 << 8) + 8 * sizeof(int ) - 1) / (8 * sizeof(int ))],const int s2[((1 << 8) + 8 * sizeof(int ) - 1) / (8 * sizeof(int ))]) return memcmp ( s1 , s2 , sizeof ( charclass ) ) == 0 ; 
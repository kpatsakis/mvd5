static enum storeEntityValue(XML_Parser const ENCODING const char const char *entityTextEnd) DTD * const dtd = _dtd STRING_POOL * pool = & ( dtd -> entityValuePool ) ; if ( ! pool -> blocks )  if ( ! poolGrow ( pool ) )  const char * next ; int tok = XmlEntityValueTok ( enc , entityTextPtr , entityTextEnd , & next ) ; switch ( tok )  if ( isParamEntity || enc != encoding )  const XML_Char * name ; ENTITY * entity ; name = poolStoreString ( & tempPool , enc , entityTextPtr + enc -> minBytesPerChar , next - enc -> minBytesPerChar ); if ( ! name )  entity = ( ENTITY * ) lookup ( & dtd -> paramEntities , name , 0 ); if ( ! entity )  if ( entity -> open )  if ( entity -> systemId )  if ( externalEntityRefHandler )  entity -> open = XML_TRUE; if ( ! externalEntityRefHandler ( externalEntityRefHandlerArg , 0 , entity -> base , entity -> systemId , entity -> publicId ) )  entity -> open = XML_FALSE; entity -> open = XML_TRUE; result = storeEntityValue ( parser , internalEncoding , ( char * ) entity -> textPtr , ( char * ) ( entity -> textPtr + entity -> textLen ) ); entity -> open = XML_FALSE; if ( result )  if ( ! poolAppend ( pool , enc , entityTextPtr , next ) )  next = entityTextPtr + enc -> minBytesPerChar; if ( pool -> end == pool -> ptr && ! poolGrow ( pool ) )  * ( pool -> ptr ) ++ = 0xA; XML_Char buf [ XML_ENCODE_MAX ] ; int i ; int n = XmlCharRefNumber ( enc , entityTextPtr ) ; if ( n < 0 )  n = XmlEncode ( n , ( ICHAR * ) buf ); if ( ! n )  for (i = 0; i < n; i++) if ( pool -> end == pool -> ptr && ! poolGrow ( pool ) )  * ( pool -> ptr ) ++ = buf [ i ]; entityTextPtr = next; static enum storeEntityValue(XML_Parser const ENCODING const char const char *entityTextEnd) DTD * const dtd = _dtd STRING_POOL * pool = & ( dtd -> entityValuePool ) ; if ( ! pool -> blocks )  if ( ! poolGrow ( pool ) )  const char * next ; int tok = XmlEntityValueTok ( enc , entityTextPtr , entityTextEnd , & next ) ; switch ( tok )  if ( isParamEntity || enc != encoding )  const XML_Char * name ; ENTITY * entity ; name = poolStoreString ( & tempPool , enc , entityTextPtr + enc -> minBytesPerChar , next - enc -> minBytesPerChar ); if ( ! name )  entity = ( ENTITY * ) lookup ( & dtd -> paramEntities , name , 0 ); if ( ! entity )  if ( entity -> open )  if ( entity -> systemId )  if ( externalEntityRefHandler )  entity -> open = XML_TRUE; if ( ! externalEntityRefHandler ( externalEntityRefHandlerArg , 0 , entity -> base , entity -> systemId , entity -> publicId ) )  entity -> open = XML_FALSE; entity -> open = XML_TRUE; result = storeEntityValue ( parser , internalEncoding , ( char * ) entity -> textPtr , ( char * ) ( entity -> textPtr + entity -> textLen ) ); entity -> open = XML_FALSE; if ( result )  if ( ! poolAppend ( pool , enc , entityTextPtr , next ) )  next = entityTextPtr + enc -> minBytesPerChar; if ( pool -> end == pool -> ptr && ! poolGrow ( pool ) )  * ( pool -> ptr ) ++ = 0xA; XML_Char buf [ XML_ENCODE_MAX ] ; int i ; int n = XmlCharRefNumber ( enc , entityTextPtr ) ; if ( n < 0 )  n = XmlEncode ( n , ( ICHAR * ) buf ); if ( ! n )  if ( pool -> end == pool -> ptr && ! poolGrow ( pool ) )  * ( pool -> ptr ) ++ = buf [ i ]; entityTextPtr = next; static enum storeEntityValue(XML_Parser const ENCODING const char const char *entityTextEnd) DTD * const dtd = _dtd STRING_POOL * pool = & ( dtd -> entityValuePool ) ; if ( ! pool -> blocks )  if ( ! poolGrow ( pool ) )  const char * next ; int tok = XmlEntityValueTok ( enc , entityTextPtr , entityTextEnd , & next ) ; switch ( tok )  if ( isParamEntity || enc != encoding )  const XML_Char * name ; ENTITY * entity ; name = poolStoreString ( & tempPool , enc , entityTextPtr + enc -> minBytesPerChar , next - enc -> minBytesPerChar ); if ( ! name )  entity = ( ENTITY * ) lookup ( & dtd -> paramEntities , name , 0 ); if ( ! entity )  if ( entity -> open )  if ( entity -> systemId )  if ( externalEntityRefHandler )  entity -> open = XML_TRUE; if ( ! externalEntityRefHandler ( externalEntityRefHandlerArg , 0 , entity -> base , entity -> systemId , entity -> publicId ) )  entity -> open = XML_FALSE; entity -> open = XML_TRUE; result = storeEntityValue ( parser , internalEncoding , ( char * ) entity -> textPtr , ( char * ) ( entity -> textPtr + entity -> textLen ) ); entity -> open = XML_FALSE; if ( result )  if ( ! poolAppend ( pool , enc , entityTextPtr , next ) )  next = entityTextPtr + enc -> minBytesPerChar; if ( pool -> end == pool -> ptr && ! poolGrow ( pool ) )  * ( pool -> ptr ) ++ = 0xA; XML_Char buf [ XML_ENCODE_MAX ] ; int i ; int n = XmlCharRefNumber ( enc , entityTextPtr ) ; if ( n < 0 )  n = XmlEncode ( n , ( ICHAR * ) buf ); if ( ! n )  if ( pool -> end == pool -> ptr && ! poolGrow ( pool ) )  * ( pool -> ptr ) ++ = buf [ i ]; entityTextPtr = next; static NAMED lookup(HASH_TABLE *table, KEY name, size_t createSize) size_t i ; if ( table -> size == 0 )  size_t tsize ; if ( ! createSize )  table -> power = INIT_POWER; table -> size = ( size_t ) 1 << INIT_POWER; tsize = table -> size * sizeof ( NAMED * ); table -> v = ( NAMED * * ) table -> mem -> malloc_fcn ( tsize ); if ( ! table -> v )  memset ( table -> v , 0 , tsize ); i = hash ( name ) & ( ( unsigned long ) table -> size - 1 ); unsigned long h = hash ( name ) ; unsigned long mask = ( unsigned long ) table -> size - 1 ; unsigned char step = 0 ; i = h & mask; while ( table -> v [ i ] )  if ( keyeq ( name , table -> v [ i ] -> name ) )  if ( ! step )  step = PROBE_STEP ( h , mask , table -> power ); i < step ? ( i += table -> size - step ) : ( i -= step ); if ( ! createSize )  if ( table -> used >> ( table -> power - 1 ) )  unsigned char newPower = table -> power + 1 ; size_t newSize = ( size_t ) 1 << newPower ; unsigned long newMask = ( unsigned long ) newSize - 1 ; size_t tsize = newSize * sizeof ( NAMED * ) ; NAMED * * newV = ( NAMED * * ) table -> mem -> malloc_fcn ( tsize ) ; if ( ! newV )  memset ( newV , 0 , tsize ); for (i = 0; i < table->size; i++) if ( table -> v [ i ] )  unsigned long newHash = hash ( table -> v [ i ] -> name ) ; size_t j = newHash & newMask ; step = 0; while ( newV [ j ] )  if ( ! step )  step = PROBE_STEP ( newHash , newMask , newPower ); j < step ? ( j += newSize - step ) : ( j -= step ); newV [ j ] = table -> v [ i ]; table -> v = newV; table -> power = newPower; table -> size = newSize; i = h & newMask; step = 0; while ( table -> v [ i ] )  if ( ! step )  step = PROBE_STEP ( h , newMask , newPower ); i < step ? ( i += newSize - step ) : ( i -= step ); table -> v [ i ] = ( NAMED * ) table -> mem -> malloc_fcn ( createSize ); if ( ! table -> v [ i ] )  memset ( table -> v [ i ] , 0 , createSize ); table -> v [ i ] -> name = name; ( table -> used ) ++; return table -> v [ i ] ; 
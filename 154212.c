XML_Parser XML_ExternalEntityParserCreate(XML_Parser const XML_Char const XML_Char *encodingName) XML_Parser parser = oldParser ; DTD * newDtd = NULL ; DTD * oldDtd = _dtd ; if ( ! context )  newDtd = oldDtd; if ( ns )  XML_Char tmp [ 2 ] ; * tmp = namespaceSeparator; parser = parserCreate ( encodingName , & parser -> m_mem , tmp , newDtd ); parser = parserCreate ( encodingName , & parser -> m_mem , NULL , newDtd ); if ( ! parser )  if ( context )  if ( ! dtdCopy ( _dtd , oldDtd , & parser -> m_mem ) || ! setContext ( parser , context ) )  static dtdCopy(DTD *newDtd, const DTD *oldDtd, const XML_Memory_Handling_Suite *ms) const XML_Char * name ; const PREFIX * oldP = ( PREFIX * ) hashTableIterNext ( & iter ) ; static NAMED * hashTableIterNext(HASH_TABLE_ITER *iter) while ( iter -> p != iter -> end )  NAMED * tem = * ( iter -> p ) ++ ; if ( tem )  return tem ; return NULL ; if ( ! oldP )  name = poolCopyString ( & ( newDtd -> pool ) , oldP -> name ); static const XML_Char * poolCopyString(STRING_POOL *pool, const XML_Char *s) if ( ! poolAppendChar ( pool , * s ) )  return NULL ; while ( * s ++ )  s = pool -> start; return s ; if ( ! name )  if ( ! lookup ( & ( newDtd -> prefixes ) , name , sizeof ( PREFIX ) ) )  ATTRIBUTE_ID * newA ; const XML_Char * name ; const ATTRIBUTE_ID * oldA = ( ATTRIBUTE_ID * ) hashTableIterNext ( & iter ) ; static NAMED * hashTableIterNext(HASH_TABLE_ITER *iter) while ( iter -> p != iter -> end )  NAMED * tem = * ( iter -> p ) ++ ; if ( tem )  return tem ; return NULL ; if ( ! oldA )  if ( ! poolAppendChar ( & ( newDtd -> pool ) , XML_T ( '\0' ) ) )  name = poolCopyString ( & ( newDtd -> pool ) , oldA -> name ); static const XML_Char * poolCopyString(STRING_POOL *pool, const XML_Char *s) if ( ! poolAppendChar ( pool , * s ) )  return NULL ; while ( * s ++ )  s = pool -> start; return s ; if ( ! name )  newA = ( ATTRIBUTE_ID * ) lookup ( & ( newDtd -> attributeIds ) , name , sizeof ( ATTRIBUTE_ID ) ); if ( ! newA )  if ( oldA -> prefix )  if ( oldA -> prefix == & oldDtd -> defaultPrefix )  newA -> prefix = ( PREFIX * ) lookup ( & ( newDtd -> prefixes ) , oldA -> prefix -> name , 0 ); static NAMED lookup(HASH_TABLE *table, KEY name, size_t createSize) if ( table -> size == 0 )  size_t tsize ; if ( ! createSize )  table -> power = INIT_POWER; table -> size = ( size_t ) 1 << INIT_POWER; tsize = table -> size * sizeof ( NAMED * ); table -> v = ( NAMED * * ) table -> mem -> malloc_fcn ( tsize ); if ( ! table -> v )  memset ( table -> v , 0 , tsize ); i = hash ( name ) & ( ( unsigned long ) table -> size - 1 ); table -> v [ i ] = ( NAMED * ) table -> mem -> malloc_fcn ( createSize ); if ( ! table -> v [ i ] )  memset ( table -> v [ i ] , 0 , createSize ); table -> v [ i ] -> name = name; ( table -> used ) ++; return table -> v [ i ] ; 
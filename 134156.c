static enum storeEntityValue(XML_Parser const ENCODING const char const char *entityTextEnd) DTD * const dtd = _dtd STRING_POOL * pool = & ( dtd -> entityValuePool ) ; if ( ! pool -> blocks )  if ( ! poolGrow ( pool ) )  static XML_Bool poolGrow(STRING_POOL *pool) if ( pool -> freeBlocks )  if ( pool -> start == 0 )  if ( pool -> end - pool -> start < pool -> freeBlocks -> size )  BLOCK * tem = pool -> freeBlocks -> next ; pool -> freeBlocks -> next = pool -> blocks; pool -> blocks = pool -> freeBlocks; pool -> freeBlocks = tem; memcpy ( pool -> blocks -> s , pool -> start , ( pool -> end - pool -> start ) * sizeof ( XML_Char ) ); pool -> ptr = pool -> blocks -> s + ( pool -> ptr - pool -> start ); pool -> start = pool -> blocks -> s; pool -> end = pool -> start + pool -> blocks -> size; 
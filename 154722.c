static enum processXmlDecl(XML_Parser parser, int const char *s, const char *next) const char * encodingName = NULL ; const char * versionend ; if ( ! ( ns ? XmlParseXmlDeclNS : XmlParseXmlDecl ) ( isGeneralTextEntity , encoding , s , next , & eventPtr , & version , & versionend , & encodingName , & newEncoding , & standalone ) )  if ( xmlDeclHandler )  if ( encodingName != NULL )  storedEncName = poolStoreString ( & temp2Pool , encoding , encodingName , encodingName + XmlNameLength ( encoding , encodingName ) ); static XML_Char poolStoreString(STRING_POOL *pool, const ENCODING const char *ptr, const char *end) if ( ! poolAppend ( pool , enc , ptr , end ) )  static XML_Char poolAppend(STRING_POOL *pool, const ENCODING const char *ptr, const char *end) if ( ! pool -> ptr && ! poolGrow ( pool ) )  static XML_Bool poolGrow(STRING_POOL *pool) if ( pool -> freeBlocks )  if ( pool -> start == 0 )  if ( pool -> end - pool -> start < pool -> freeBlocks -> size )  BLOCK * tem = pool -> freeBlocks -> next ; pool -> freeBlocks -> next = pool -> blocks; pool -> blocks = pool -> freeBlocks; pool -> freeBlocks = tem; memcpy ( pool -> blocks -> s , pool -> start , ( pool -> end - pool -> start ) * sizeof ( XML_Char ) ); pool -> ptr = pool -> blocks -> s + ( pool -> ptr - pool -> start ); pool -> start = pool -> blocks -> s; pool -> end = pool -> start + pool -> blocks -> size; 
 CVE_2014_1509_PATCHED__cairo_dwrite_load_truetype_table(void                 unsigned long         long                  unsigned char        unsigned long        *length) const void * data ; UINT32 size ; BOOL exists ; if ( ! exists )  if ( buffer && * length && ( UINT32 ) offset < size )  size = MIN ( size - ( UINT32 ) offset , * length ); memcpy ( buffer , ( const char * ) data + offset , size ); 
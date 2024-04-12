status_t MPEG4Extractor::parseMetaData(off64_t offset, size_t size) if ( size < 4 )  uint8_t * buffer = new uint8_t [ size + 1 ] ; if ( mDataSource -> readAt ( offset , buffer , size ) != ( ssize_t ) size )  buffer = NULL; uint32_t flags = U32_AT ( buffer ) ; uint32_t metadataKey = 0 ; metadataKey = kKeyAlbum; metadataKey = kKeyArtist; metadataKey = kKeyAlbumArtist; metadataKey = kKeyYear; metadataKey = kKeyTitle; metadataKey = kKeyWriter; metadataKey = kKeyAlbumArt; metadataKey = kKeyGenre; metadataKey = kKeyGenre; buffer [ size ] = '\0'; if ( size >= 8 && metadataKey )  if ( metadataKey == kKeyAlbumArt )  if ( metadataKey == kKeyGenre )  if ( flags == 0 )  int genrecode = ( int ) buffer [ size - 1 ] ; genrecode --; if ( genrecode < 0 )  genrecode = 255; char genre [ 10 ] ; sprintf ( genre , "%d" , genrecode ); mFileMetaData -> setCString ( metadataKey , genre ); 
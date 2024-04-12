 nsClipboard::GetData(nsITransferable *aTransferable, int32_t aWhichClipboard) if ( ! aTransferable )  GtkClipboard * clipboard ; clipboard = gtk_clipboard_get ( GetSelectionAtom ( aWhichClipboard ) ); nsCOMPtr < nsISupportsArray > flavors ; nsresult rv ; rv = aTransferable -> FlavorsTransferableCanImport ( getter_AddRefs ( flavors ) ); if ( ! flavors || NS_FAILED ( rv ) )  uint32_t count ; for (uint32_t i=0; i < count; i++) nsCOMPtr < nsISupports > genericFlavor ; nsCOMPtr < nsISupportsCString > currentFlavor ; currentFlavor = do_QueryInterface ( genericFlavor ); if ( currentFlavor )  nsXPIDLCString flavorStr ; if ( ! strcmp ( flavorStr , kUnicodeMime ) )  gchar * new_text = wait_for_text ( clipboard ) ; if ( new_text )  if ( ! strcmp ( flavorStr , kJPEGImageMime ) || ! strcmp ( flavorStr , kJPGImageMime ) || ! strcmp ( flavorStr , kPNGImageMime ) || ! strcmp ( flavorStr , kGIFImageMime ) )  GdkAtom atom = gdk_atom_intern ( flavorStr , FALSE ) ; GtkSelectionData * selectionData = wait_for_contents ( clipboard , atom ) ; if ( ! selectionData )  GdkAtom atom = gdk_atom_intern ( flavorStr , FALSE ) ; GtkSelectionData * selectionData ; selectionData = wait_for_contents ( clipboard , atom ); if ( selectionData )  const guchar * clipboardData = gtk_selection_data_get_data ( selectionData ) ; length = gtk_selection_data_get_length ( selectionData ); if ( ! strcmp ( flavorStr , kHTMLMime ) )  int32_t htmlBodyLen = 0 ; if ( ! htmlBodyLen )  data = ( guchar * ) moz_xmalloc ( length ); if ( ! data )  memcpy ( data , clipboardData , length ); nsPrimitiveHelpers :: CreatePrimitiveForData ( foundFlavor . get ( ) , data , length , getter_AddRefs ( wrapper ) );  nsPrimitiveHelpers :: CreatePrimitiveForData ( const char* aFlavor, const void* uint32_t aDataLen, nsISupports** aPrimitive ) if ( ! aPrimitive )  if ( strcmp ( aFlavor , kTextMime ) == 0 || strcmp ( aFlavor , kNativeHTMLMime ) == 0 )  const char * start = reinterpret_cast < const char * > aDataBuff primitive -> SetData ( Substring ( start , start + aDataLen ) ); NS_ADDREF ( * aPrimitive = primitive ); if ( aDataLen % 2 )  memcpy ( buffer , aDataBuff , aDataLen ); buffer [ aDataLen ] = 0; const char16_t * start = reinterpret_cast < const char16_t * > buffer . get ( ) primitive -> SetData ( Substring ( start , start + ( aDataLen + 1 ) / 2 ) ); const char16_t * start = reinterpret_cast < const char16_t * > aDataBuff primitive -> SetData ( Substring ( start , start + ( aDataLen / 2 ) ) ); NS_ADDREF ( * aPrimitive = primitive ); if ( data )  free ( data ); 
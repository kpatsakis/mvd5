 nsClipboard::GetData(nsITransferable *aTransferable, int32_t aWhichClipboard) if ( ! aTransferable )  GtkClipboard * clipboard ; clipboard = gtk_clipboard_get ( GetSelectionAtom ( aWhichClipboard ) ); nsCOMPtr < nsISupportsArray > flavors ; nsresult rv ; rv = aTransferable -> FlavorsTransferableCanImport ( getter_AddRefs ( flavors ) ); if ( ! flavors || NS_FAILED ( rv ) )  uint32_t count ; for (uint32_t i=0; i < count; i++) nsCOMPtr < nsISupports > genericFlavor ; nsCOMPtr < nsISupportsCString > currentFlavor ; currentFlavor = do_QueryInterface ( genericFlavor ); if ( currentFlavor )  nsXPIDLCString flavorStr ; if ( ! strcmp ( flavorStr , kUnicodeMime ) )  gchar * new_text = wait_for_text ( clipboard ) ; static gchar wait_for_text(GtkClipboard *clipboard) gtk_clipboard_request_text ( clipboard , clipboard_text_received , context . get ( ) ); if ( new_text )  if ( ! strcmp ( flavorStr , kJPEGImageMime ) || ! strcmp ( flavorStr , kJPGImageMime ) || ! strcmp ( flavorStr , kPNGImageMime ) || ! strcmp ( flavorStr , kGIFImageMime ) )  GdkAtom atom = gdk_atom_intern ( flavorStr , FALSE ) ; GtkSelectionData * selectionData = wait_for_contents ( clipboard , atom ) ; static GtkSelectionData wait_for_contents(GtkClipboard *clipboard, GdkAtom target) gtk_clipboard_request_contents ( clipboard , target , clipboard_contents_received , context . get ( ) ); if ( ! selectionData )  GdkAtom atom = gdk_atom_intern ( flavorStr , FALSE ) ; GtkSelectionData * selectionData ; selectionData = wait_for_contents ( clipboard , atom ); static GtkSelectionData wait_for_contents(GtkClipboard *clipboard, GdkAtom target) gtk_clipboard_request_contents ( clipboard , target , clipboard_contents_received , context . get ( ) ); if ( selectionData )  if ( ! strcmp ( flavorStr , kHTMLMime ) )  int32_t htmlBodyLen = 0 ; if ( ! htmlBodyLen )  
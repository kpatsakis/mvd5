static int xhci_submit(XHCIState *xhci, XHCITransfer *xfer, XHCIEPContext *epctx) xfer -> in_xfer = epctx -> type >> 2; switch ( epctx -> type )  xfer -> pkts = 0; xfer -> iso_xfer = false; xfer -> timed_xfer = true; if ( xfer -> running_retry )  xfer -> pkts = 0; xfer -> iso_xfer = false; xfer -> timed_xfer = false; xfer -> pkts = 1; xfer -> iso_xfer = true; xfer -> timed_xfer = true; if ( xfer -> running_retry )  if ( xhci_setup_packet ( xfer ) < 0 )  static int xhci_setup_packet(XHCITransfer *xfer) XHCIState * xhci = xfer -> xhci ; USBEndpoint * ep ; if ( xfer -> packet . ep )  ep = xhci_epid_to_usbep ( xhci , xfer -> slotid , xfer -> epid ); if ( ! ep )  return - 1 ; return 0 ; if ( ! xfer -> running_async && ! xfer -> running_retry )  xhci_kick_ep ( xhci , xfer -> slotid , xfer -> epid , xfer -> streamid ); static void xhci_kick_ep(XHCIState *xhci, unsigned int unsigned int epid, unsigned int streamid) XHCIStreamContext * stctx ; XHCIEPContext * epctx ; XHCIRing * ring ; int length ; if ( ! xhci -> slots [ slotid - 1 ] . enabled )  epctx = xhci -> slots [ slotid - 1 ] . eps [ epid - 1 ]; if ( ! epctx )  if ( ! xhci -> slots [ slotid - 1 ] . uport || ! xhci -> slots [ slotid - 1 ] . uport -> dev || ! xhci -> slots [ slotid - 1 ] . uport -> dev -> attached )  if ( epctx -> retry )  XHCITransfer * xfer = epctx -> retry ; if ( xfer -> timed_xfer )  if ( xfer -> running_retry )  xfer -> timed_xfer = 0; xfer -> running_retry = 1; if ( xfer -> iso_xfer )  if ( xhci_setup_packet ( xfer ) < 0 )  if ( xhci_setup_packet ( xfer ) < 0 )  if ( xfer -> packet . status == USB_RET_NAK )  epctx -> retry = NULL; if ( epctx -> state == EP_HALTED )  if ( epctx -> nr_pstreams )  stctx = xhci_find_stream ( epctx , streamid , & err ); if ( stctx == NULL )  ring = & stctx -> ring; ring = & epctx -> ring; streamid = 0; while ( 1 )  XHCITransfer * xfer = & epctx -> transfers [ epctx -> next_xfer ] ; if ( xfer -> running_async || xfer -> running_retry )  length = xhci_ring_chain_length ( xhci , ring ); if ( length < 0 )  if ( length == 0 )  if ( xfer -> trbs && xfer -> trb_alloced < length )  xfer -> trb_count = 0; xfer -> trb_alloced = 0; xfer -> trbs = NULL; if ( ! xfer -> trbs )  xfer -> trbs = g_malloc ( sizeof ( XHCITRB ) * length ); xfer -> trb_alloced = length; xfer -> trb_count = length; xfer -> streamid = streamid; if ( epid == 1 )  if ( xhci_fire_ctl_transfer ( xhci , xfer ) >= 0 )  epctx -> next_xfer = ( epctx -> next_xfer + 1 ) % TD_QUEUE; if ( xhci_fire_transfer ( xhci , xfer , epctx ) >= 0 )  epctx -> next_xfer = ( epctx -> next_xfer + 1 ) % TD_QUEUE; if ( epctx -> state == EP_HALTED )  if ( xfer -> running_retry )  static int xhci_fire_ctl_transfer(XHCIState *xhci, XHCITransfer *xfer) XHCITRB * trb_setup , * trb_status ; uint8_t bmRequestType ; trb_setup = & xfer -> trbs [ 0 ]; trb_status = & xfer -> trbs [ xfer -> trb_count - 1 ]; if ( TRB_TYPE ( * trb_status ) == TR_EVDATA && xfer -> trb_count > 2 )  trb_status --; if ( TRB_TYPE ( * trb_setup ) != TR_SETUP )  if ( TRB_TYPE ( * trb_status ) != TR_STATUS )  if ( ! ( trb_setup -> control & TRB_TR_IDT ) )  if ( ( trb_setup -> status & 0x1ffff ) != 8 )  bmRequestType = trb_setup -> parameter; xfer -> in_xfer = bmRequestType & USB_DIR_IN; xfer -> iso_xfer = false; xfer -> timed_xfer = false; if ( xhci_setup_packet ( xfer ) < 0 )  xfer -> packet . parameter = trb_setup -> parameter; if ( ! xfer -> running_async && ! xfer -> running_retry )  xhci_kick_ep ( xhci , xfer -> slotid , xfer -> epid , 0 ); static void xhci_kick_ep(XHCIState *xhci, unsigned int unsigned int epid, unsigned int streamid) XHCIStreamContext * stctx ; XHCIEPContext * epctx ; XHCIRing * ring ; int length ; int i ; if ( ! xhci -> slots [ slotid - 1 ] . enabled )  epctx = xhci -> slots [ slotid - 1 ] . eps [ epid - 1 ]; if ( ! epctx )  if ( ! xhci -> slots [ slotid - 1 ] . uport || ! xhci -> slots [ slotid - 1 ] . uport -> dev || ! xhci -> slots [ slotid - 1 ] . uport -> dev -> attached )  if ( epctx -> retry )  XHCITransfer * xfer = epctx -> retry ; if ( xfer -> timed_xfer )  if ( xfer -> running_retry )  xfer -> timed_xfer = 0; xfer -> running_retry = 1; if ( xfer -> iso_xfer )  if ( xhci_setup_packet ( xfer ) < 0 )  if ( xhci_setup_packet ( xfer ) < 0 )  if ( xfer -> packet . status == USB_RET_NAK )  epctx -> retry = NULL; if ( epctx -> state == EP_HALTED )  if ( epctx -> nr_pstreams )  stctx = xhci_find_stream ( epctx , streamid , & err ); if ( stctx == NULL )  ring = & stctx -> ring; ring = & epctx -> ring; streamid = 0; while ( 1 )  XHCITransfer * xfer = & epctx -> transfers [ epctx -> next_xfer ] ; if ( xfer -> running_async || xfer -> running_retry )  length = xhci_ring_chain_length ( xhci , ring ); if ( length < 0 )  if ( length == 0 )  if ( xfer -> trbs && xfer -> trb_alloced < length )  xfer -> trb_count = 0; xfer -> trb_alloced = 0; xfer -> trbs = NULL; if ( ! xfer -> trbs )  xfer -> trbs = g_malloc ( sizeof ( XHCITRB ) * length ); xfer -> trb_alloced = length; xfer -> trb_count = length; for (i = 0; i < length; i++) assert ( xhci_ring_fetch ( xhci , ring , & xfer -> trbs [ i ] , NULL ) ); xfer -> streamid = streamid; if ( epid == 1 )  if ( xhci_fire_ctl_transfer ( xhci , xfer ) >= 0 )  epctx -> next_xfer = ( epctx -> next_xfer + 1 ) % TD_QUEUE; if ( xhci_fire_transfer ( xhci , xfer , epctx ) >= 0 )  epctx -> next_xfer = ( epctx -> next_xfer + 1 ) % TD_QUEUE; if ( epctx -> state == EP_HALTED )  if ( xfer -> running_retry )  
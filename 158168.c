static int xhci_fire_ctl_transfer(XHCIState *xhci, XHCITransfer *xfer) XHCITRB * trb_setup , * trb_status ; uint8_t bmRequestType ; trb_setup = & xfer -> trbs [ 0 ]; trb_status = & xfer -> trbs [ xfer -> trb_count - 1 ]; if ( TRB_TYPE ( * trb_status ) == TR_EVDATA && xfer -> trb_count > 2 )  trb_status --; if ( TRB_TYPE ( * trb_setup ) != TR_SETUP )  if ( TRB_TYPE ( * trb_status ) != TR_STATUS )  if ( ! ( trb_setup -> control & TRB_TR_IDT ) )  if ( ( trb_setup -> status & 0x1ffff ) != 8 )  bmRequestType = trb_setup -> parameter; xfer -> in_xfer = bmRequestType & USB_DIR_IN; xfer -> iso_xfer = false; xfer -> timed_xfer = false; if ( xhci_setup_packet ( xfer ) < 0 )  xfer -> packet . parameter = trb_setup -> parameter; if ( ! xfer -> running_async && ! xfer -> running_retry )  xhci_kick_ep ( xhci , xfer -> slotid , xfer -> epid , 0 ); static void xhci_kick_ep(XHCIState *xhci, unsigned int unsigned int epid, unsigned int streamid) XHCIStreamContext * stctx ; XHCIEPContext * epctx ; if ( ! xhci -> slots [ slotid - 1 ] . enabled )  epctx = xhci -> slots [ slotid - 1 ] . eps [ epid - 1 ]; if ( ! epctx )  if ( ! xhci -> slots [ slotid - 1 ] . uport || ! xhci -> slots [ slotid - 1 ] . uport -> dev || ! xhci -> slots [ slotid - 1 ] . uport -> dev -> attached )  if ( epctx -> retry )  XHCITransfer * xfer = epctx -> retry ; if ( xfer -> timed_xfer )  if ( xfer -> running_retry )  xfer -> timed_xfer = 0; xfer -> running_retry = 1; if ( xfer -> iso_xfer )  if ( xhci_setup_packet ( xfer ) < 0 )  if ( xhci_setup_packet ( xfer ) < 0 )  if ( xfer -> packet . status == USB_RET_NAK )  epctx -> retry = NULL; if ( epctx -> state == EP_HALTED )  if ( epctx -> nr_pstreams )  stctx = xhci_find_stream ( epctx , streamid , & err ); if ( stctx == NULL )  xhci_set_ep_state ( xhci , epctx , stctx , EP_RUNNING ); static void xhci_set_ep_state(XHCIState *xhci, XHCIEPContext XHCIStreamContext *sctx, uint32_t state) uint32_t ctx2 [ 2 ] ; if ( epctx -> nr_pstreams )  if ( sctx != NULL )  ctx2 [ 0 ] &= 0xe; ctx2 [ 0 ] |= sctx -> ring . dequeue | sctx -> ring . ccs; ctx2 [ 1 ] = ( sctx -> ring . dequeue >> 16 ) >> 16; xhci_dma_write_u32s ( xhci , sctx -> pctx , ctx2 , sizeof ( ctx2 ) ); static inline void xhci_dma_write_u32s(XHCIState *xhci, dma_addr_t uint32_t *buf, size_t len) assert ( ( len % sizeof ( uint32_t ) ) == 0 ); 
static int xhci_complete_packet(XHCITransfer *xfer) if ( xfer -> packet . status == USB_RET_ASYNC )  if ( xfer -> packet . status == USB_RET_NAK )  xfer -> running_async = 0; xfer -> running_retry = 0; xfer -> complete = 1; if ( xfer -> packet . status == USB_RET_SUCCESS )  xfer -> status = CC_SUCCESS; switch ( xfer -> packet . status )  xfer -> status = CC_STALL_ERROR; xhci_stall_ep ( xfer ); static void xhci_stall_ep(XHCITransfer *xfer) XHCIState * xhci = xfer -> xhci ; XHCISlot * slot = & xhci -> slots [ xfer -> slotid - 1 ] ; XHCIEPContext * epctx = slot -> eps [ xfer -> epid - 1 ] ; XHCIStreamContext * sctx ; if ( epctx -> nr_pstreams )  sctx = xhci_find_stream ( epctx , xfer -> streamid , & err ); if ( sctx == NULL )  sctx -> ring . dequeue = xfer -> trbs [ 0 ] . addr; sctx -> ring . ccs = xfer -> trbs [ 0 ] . ccs; xhci_set_ep_state ( xhci , epctx , sctx , EP_HALTED ); static void xhci_set_ep_state(XHCIState *xhci, XHCIEPContext XHCIStreamContext *sctx, uint32_t state) uint32_t ctx2 [ 2 ] ; if ( epctx -> nr_pstreams )  if ( sctx != NULL )  xhci_dma_read_u32s ( xhci , sctx -> pctx , ctx2 , sizeof ( ctx2 ) ); static inline void xhci_dma_read_u32s(XHCIState *xhci, dma_addr_t uint32_t *buf, size_t len) assert ( ( len % sizeof ( uint32_t ) ) == 0 ); 
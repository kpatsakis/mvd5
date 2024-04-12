static TRBCCode xhci_configure_slot(XHCIState *xhci, unsigned int uint64_t pictx, bool dc) int i ; if ( dc )  for (i = 2; i <= 31; i++) if ( xhci -> slots [ slotid - 1 ] . eps [ i - 1 ] )  xhci_disable_ep ( xhci , slotid , i ); static TRBCCode xhci_disable_ep(XHCIState *xhci, unsigned int unsigned int epid) XHCISlot * slot ; XHCIEPContext * epctx ; slot = & xhci -> slots [ slotid - 1 ]; if ( ! slot -> eps [ epid - 1 ] )  epctx = slot -> eps [ epid - 1 ]; xhci_set_ep_state ( xhci , epctx , NULL , EP_DISABLED ); static void xhci_set_ep_state(XHCIState *xhci, XHCIEPContext XHCIStreamContext *sctx, uint32_t state) uint32_t ctx2 [ 2 ] ; if ( epctx -> nr_pstreams )  if ( sctx != NULL )  ctx2 [ 0 ] &= 0xe; ctx2 [ 0 ] |= sctx -> ring . dequeue | sctx -> ring . ccs; ctx2 [ 1 ] = ( sctx -> ring . dequeue >> 16 ) >> 16; xhci_dma_write_u32s ( xhci , sctx -> pctx , ctx2 , sizeof ( ctx2 ) ); static inline void xhci_dma_write_u32s(XHCIState *xhci, dma_addr_t uint32_t *buf, size_t len) assert ( ( len % sizeof ( uint32_t ) ) == 0 ); 
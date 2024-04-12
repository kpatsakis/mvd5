static void xhci_process_commands(XHCIState *xhci) XHCITRB trb ; TRBType type ; XHCIEvent event = { ER_COMMAND_COMPLETE , CC_SUCCESS } ; dma_addr_t addr ; unsigned int i , slotid = 0 ; if ( ! xhci_running ( xhci ) )  xhci -> crcr_low |= CRCR_CRR; while ( type = xhci_ring_fetch ( xhci , & xhci -> cmd_ring , & trb , & addr ) )  event . ptr = addr; switch ( type )  for (i = 0; i < xhci->numslots; i++) if ( ! xhci -> slots [ i ] . enabled )  if ( i >= xhci -> numslots )  event . ccode = CC_NO_SLOTS_ERROR; slotid = i + 1; event . ccode = xhci_enable_slot ( xhci , slotid ); slotid = xhci_get_slot ( xhci , & event , & trb ); if ( slotid )  event . ccode = xhci_disable_slot ( xhci , slotid ); slotid = xhci_get_slot ( xhci , & event , & trb ); if ( slotid )  event . ccode = xhci_address_slot ( xhci , slotid , trb . parameter , trb . control & TRB_CR_BSR ); slotid = xhci_get_slot ( xhci , & event , & trb ); if ( slotid )  event . ccode = xhci_configure_slot ( xhci , slotid , trb . parameter , trb . control & TRB_CR_DC ); slotid = xhci_get_slot ( xhci , & event , & trb ); if ( slotid )  event . ccode = xhci_evaluate_slot ( xhci , slotid , trb . parameter ); slotid = xhci_get_slot ( xhci , & event , & trb ); if ( slotid )  unsigned int epid = ( trb . control >> TRB_CR_EPID_SHIFT ) & TRB_CR_EPID_MASK ; event . ccode = xhci_stop_ep ( xhci , slotid , epid ); slotid = xhci_get_slot ( xhci , & event , & trb ); if ( slotid )  unsigned int epid = ( trb . control >> TRB_CR_EPID_SHIFT ) & TRB_CR_EPID_MASK ; event . ccode = xhci_reset_ep ( xhci , slotid , epid ); slotid = xhci_get_slot ( xhci , & event , & trb ); if ( slotid )  unsigned int epid = ( trb . control >> TRB_CR_EPID_SHIFT ) & TRB_CR_EPID_MASK ; unsigned int streamid = ( trb . status >> 16 ) & 0xffff ; event . ccode = xhci_set_ep_dequeue ( xhci , slotid , epid , streamid , trb . parameter ); slotid = xhci_get_slot ( xhci , & event , & trb ); if ( slotid )  event . ccode = xhci_reset_slot ( xhci , slotid ); event . ccode = xhci_get_port_bandwidth ( xhci , trb . parameter ); event . type = 48; event . length = 0x3025; uint32_t chi = trb . parameter >> 32 ; uint32_t clo = trb . parameter ; uint32_t val = xhci_nec_challenge ( chi , clo ) ; event . length = val & 0xFFFF; event . epid = val >> 16; slotid = val >> 24; event . type = 48; event . ccode = CC_TRB_ERROR; event . slotid = slotid; static TRBCCode xhci_set_ep_dequeue(XHCIState *xhci, unsigned int unsigned int epid, unsigned int uint64_t pdequeue) XHCISlot * slot ; XHCIEPContext * epctx ; XHCIStreamContext * sctx ; dma_addr_t dequeue ; if ( epid < 1 || epid > 31 )  dequeue = xhci_mask64 ( pdequeue ); static inline dma_addr_t xhci_mask64(uint64_t addr) if ( sizeof ( dma_addr_t ) == 4 )  return addr & 0xffffffff ; return addr ; slot = & xhci -> slots [ slotid - 1 ]; if ( ! slot -> eps [ epid - 1 ] )  epctx = slot -> eps [ epid - 1 ]; if ( epctx -> state != EP_STOPPED )  if ( epctx -> nr_pstreams )  sctx = xhci_find_stream ( epctx , streamid , & err ); static XHCIStreamContext *xhci_find_stream(XHCIEPContext unsigned int uint32_t *cc_error) XHCIStreamContext * sctx ; uint32_t ctx [ 2 ] , sct ; if ( epctx -> lsa )  if ( streamid >= epctx -> nr_pstreams )  return NULL ; sctx = epctx -> pstreams + streamid; if ( sctx -> sct == - 1 )  sct = ( ctx [ 0 ] >> 1 ) & 0x07; if ( epctx -> lsa && sct != 1 )  return NULL ; sctx -> sct = sct; return sctx ; if ( sctx == NULL )  sctx -> ring . ccs = dequeue & 1; sctx = NULL; epctx -> ring . ccs = dequeue & 1; xhci_set_ep_state ( xhci , epctx , sctx , EP_STOPPED ); static void xhci_set_ep_state(XHCIState *xhci, XHCIEPContext XHCIStreamContext *sctx, uint32_t state) XHCIRing * ring = NULL ; uint32_t ctx [ 5 ] ; ctx [ 0 ] &= ~EP_STATE_MASK; ctx [ 0 ] |= state; if ( epctx -> nr_pstreams )  if ( sctx != NULL )  ring = & sctx -> ring; ring = & epctx -> ring; if ( ring )  ctx [ 2 ] = ring -> dequeue | ring -> ccs; ctx [ 3 ] = ( ring -> dequeue >> 16 ) >> 16; xhci_dma_write_u32s ( xhci , epctx -> pctx , ctx , sizeof ( ctx ) ); static inline void xhci_dma_write_u32s(XHCIState *xhci, dma_addr_t uint32_t *buf, size_t len) assert ( ( len % sizeof ( uint32_t ) ) == 0 ); 
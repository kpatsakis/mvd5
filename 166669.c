static void xhci_child_detach(USBPort *uport, USBDevice *child) USBBus * bus = usb_bus_from_device ( child ) ; XHCIState * xhci = container_of ( bus , XHCIState , bus ) ; xhci_detach_slot ( xhci , child -> port ); static void xhci_detach_slot(XHCIState *xhci, USBPort *uport) int slot , ep ; for (slot = 0; slot < xhci->numslots; slot++) if ( xhci -> slots [ slot ] . uport == uport )  if ( slot == xhci -> numslots )  for (ep = 0; ep < 31; ep++) if ( xhci -> slots [ slot ] . eps [ ep ] )  xhci_ep_nuke_xfers ( xhci , slot + 1 , ep + 1 , 0 ); static int xhci_ep_nuke_xfers(XHCIState *xhci, unsigned int unsigned int epid, TRBCCode report) assert ( slotid >= 1 && slotid <= xhci -> numslots ); 
static uint64_t fdctrl_read_mem (void *opaque, hwaddr unsigned ize) return fdctrl_read ( opaque , ( uint32_t ) reg ) ; static uint32_t fdctrl_read (void *opaque, uint32_t reg) FDCtrl * fdctrl = opaque ; uint32_t retval ; reg &= 7; switch ( reg )  retval = fdctrl_read_data ( fdctrl ); static uint32_t fdctrl_read_data(FDCtrl *fdctrl) FDrive * cur_drv ; int pos ; cur_drv = get_cur_drv ( fdctrl ); static FDrive *get_cur_drv(FDCtrl *fdctrl) switch ( fdctrl -> cur_drv )  return drv0 ( fdctrl ) ; static inline FDrive *drv0(FDCtrl *fdctrl) return & fdctrl -> drives [ ( fdctrl -> tdr & FD_TDR_BOOTSEL ) >> 2 ] ; return drv1 ( fdctrl ) ; static inline FDrive *drv1(FDCtrl *fdctrl) if ( ( fdctrl -> tdr & FD_TDR_BOOTSEL ) < ( 1 << 2 ) )  return & fdctrl -> drives [ 1 ] ; return & fdctrl -> drives [ 0 ] ; return drv2 ( fdctrl ) ; static inline FDrive *drv2(FDCtrl *fdctrl) if ( ( fdctrl -> tdr & FD_TDR_BOOTSEL ) < ( 2 << 2 ) )  return & fdctrl -> drives [ 2 ] ; return & fdctrl -> drives [ 1 ] ; return drv3 ( fdctrl ) ; static inline FDrive *drv3(FDCtrl *fdctrl) if ( ( fdctrl -> tdr & FD_TDR_BOOTSEL ) < ( 3 << 2 ) )  return & fdctrl -> drives [ 3 ] ; return & fdctrl -> drives [ 2 ] ; return NULL ; fdctrl -> dsr &= ~FD_DSR_PWRDOWN; if ( ! ( fdctrl -> msr & FD_MSR_RQM ) || ! ( fdctrl -> msr & FD_MSR_DIO ) )  pos = fdctrl -> data_pos; if ( fdctrl -> msr & FD_MSR_NONDMA )  pos %= FD_SECTOR_LEN; if ( pos == 0 )  if ( fdctrl -> data_pos != 0 )  if ( ! fdctrl_seek_to_next_sect ( fdctrl , cur_drv ) )  static int fdctrl_seek_to_next_sect(FDCtrl *fdctrl, FDrive *cur_drv) uint8_t new_head = cur_drv -> head ; uint8_t new_sect = cur_drv -> sect ; int ret = 1 ; if ( new_sect >= cur_drv -> last_sect || new_sect == fdctrl -> eot )  if ( FD_MULTI_TRACK ( fdctrl -> data_state ) )  if ( new_head == 0 && ( cur_drv -> flags & FDISK_DBL_SIDES ) != 0 )  if ( ( cur_drv -> flags & FDISK_DBL_SIDES ) == 0 )  ret = 0; ret = 0; return ret ; if ( blk_read ( cur_drv -> blk , fd_sector ( cur_drv ) , fdctrl -> fifo , 1 ) < 0 )  static int fd_sector(FDrive *drv) return fd_sector_calc ( drv -> head , drv -> track , drv -> sect , drv -> last_sect , NUM_SIDES ( drv ) ) ; static int fd_sector_calc(uint8_t head, uint8_t track, uint8_t uint8_t last_sect, uint8_t num_sides) return ( ( ( track * num_sides ) + head ) * last_sect ) + sect - 1 ; memset ( fdctrl -> fifo , 0 , FD_SECTOR_LEN ); retval = fdctrl -> fifo [ pos ]; if ( ++ fdctrl -> data_pos == fdctrl -> data_len )  fdctrl -> data_pos = 0; if ( fdctrl -> msr & FD_MSR_NONDMA )  fdctrl_stop_transfer ( fdctrl , 0x00 , 0x00 , 0x00 ); static void fdctrl_stop_transfer(FDCtrl *fdctrl, uint8_t uint8_t status1, uint8_t status2) cur_drv = get_cur_drv ( fdctrl ); static FDrive *get_cur_drv(FDCtrl *fdctrl) switch ( fdctrl -> cur_drv )  return drv0 ( fdctrl ) ; return drv1 ( fdctrl ) ; return drv2 ( fdctrl ) ; return drv3 ( fdctrl ) ; fdctrl -> status0 &= ~ ( FD_SR0_DS0 | FD_SR0_DS1 | FD_SR0_HEAD ); fdctrl -> status0 |= GET_CUR_DRV ( fdctrl ); if ( cur_drv -> head )  fdctrl -> status0 |= FD_SR0_HEAD; fdctrl -> status0 |= status0; FLOPPY_DPRINTF ( "transfer status: %02x %02x %02x (%02x)\n" , status0 , status1 , status2 , fdctrl -> status0 ); fdctrl -> fifo [ 0 ] = fdctrl -> status0; fdctrl -> fifo [ 1 ] = status1; fdctrl -> fifo [ 2 ] = status2; fdctrl -> fifo [ 3 ] = cur_drv -> track; fdctrl -> fifo [ 4 ] = cur_drv -> head; fdctrl -> fifo [ 5 ] = cur_drv -> sect; fdctrl -> fifo [ 6 ] = FD_SECTOR_SC; fdctrl -> data_dir = FD_DIR_READ; if ( ! ( fdctrl -> msr & FD_MSR_NONDMA ) )  DMA_release_DREQ ( fdctrl -> dma_chann ); fdctrl -> msr |= FD_MSR_RQM | FD_MSR_DIO; fdctrl -> msr &= ~FD_MSR_NONDMA; fdctrl_set_fifo ( fdctrl , 7 ); static void fdctrl_set_fifo(FDCtrl *fdctrl, int fifo_len) fdctrl -> data_dir = FD_DIR_READ; fdctrl -> data_len = fifo_len; fdctrl -> data_pos = 0; fdctrl -> msr |= FD_MSR_CMDBUSY | FD_MSR_RQM | FD_MSR_DIO; fdctrl_raise_irq ( fdctrl ); static void fdctrl_raise_irq(FDCtrl *fdctrl) if ( fdctrl -> sun4m && ( fdctrl -> msr & FD_MSR_CMDBUSY ) )  fdctrl -> msr &= ~FD_MSR_CMDBUSY; fdctrl -> msr |= FD_MSR_RQM | FD_MSR_DIO; if ( ! ( fdctrl -> sra & FD_SRA_INTPEND ) )  qemu_set_irq ( fdctrl -> irq , 1 ); fdctrl -> sra |= FD_SRA_INTPEND; fdctrl -> reset_sensei = 0; FLOPPY_DPRINTF ( "Set interrupt status to 0x%02x\n" , fdctrl -> status0 ); fdctrl_reset_fifo ( fdctrl ); static void fdctrl_reset_fifo(FDCtrl *fdctrl) fdctrl -> data_dir = FD_DIR_WRITE; fdctrl -> data_pos = 0; fdctrl -> msr &= ~ ( FD_MSR_CMDBUSY | FD_MSR_DIO ); fdctrl_reset_irq ( fdctrl ); static void fdctrl_reset_irq(FDCtrl *fdctrl) fdctrl -> status0 = 0; if ( ! ( fdctrl -> sra & FD_SRA_INTPEND ) )  qemu_set_irq ( fdctrl -> irq , 0 ); fdctrl -> sra &= ~FD_SRA_INTPEND; FLOPPY_DPRINTF ( "data register: 0x%02x\n" , retval ); return retval ; 
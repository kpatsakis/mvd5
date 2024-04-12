static void mmio_ide_write (void *opaque, target_phys_addr_t uint32_t val) MMIOState * s = ( MMIOState * ) opaque ; IDEState * ide = ( IDEState * ) s -> dev ; addr >>= s -> shift; if ( addr & 7 )  ide_ioport_write ( ide , addr , val ); static void ide_ioport_write(void *opaque, uint32_t addr, uint32_t val) IDEState * ide_if = opaque ; IDEState * s ; int unit , n ; addr &= 7; if ( addr != 7 && ( ide_if -> cur_drive -> status & ( BUSY_STAT | DRQ_STAT ) ) )  switch ( addr )  ide_if [ 0 ] . hob_feature = ide_if [ 0 ] . feature; ide_if [ 1 ] . hob_feature = ide_if [ 1 ] . feature; ide_if [ 0 ] . feature = val; ide_if [ 1 ] . feature = val; ide_if [ 0 ] . hob_nsector = ide_if [ 0 ] . nsector; ide_if [ 1 ] . hob_nsector = ide_if [ 1 ] . nsector; ide_if [ 0 ] . nsector = val; ide_if [ 1 ] . nsector = val; ide_if [ 0 ] . hob_sector = ide_if [ 0 ] . sector; ide_if [ 1 ] . hob_sector = ide_if [ 1 ] . sector; ide_if [ 0 ] . sector = val; ide_if [ 1 ] . sector = val; ide_if [ 0 ] . hob_lcyl = ide_if [ 0 ] . lcyl; ide_if [ 1 ] . hob_lcyl = ide_if [ 1 ] . lcyl; ide_if [ 0 ] . lcyl = val; ide_if [ 1 ] . lcyl = val; ide_if [ 0 ] . hob_hcyl = ide_if [ 0 ] . hcyl; ide_if [ 1 ] . hob_hcyl = ide_if [ 1 ] . hcyl; ide_if [ 0 ] . hcyl = val; ide_if [ 1 ] . hcyl = val; ide_if [ 0 ] . select = ( val & ~0x10 ) | 0xa0; ide_if [ 1 ] . select = ( val | 0x10 ) | 0xa0; unit = ( val >> 4 ) & 1; s = ide_if + unit; ide_if -> cur_drive = s; s = ide_if -> cur_drive; if ( ! s -> bs )  if ( ( s -> status & ( BUSY_STAT | DRQ_STAT ) ) && val != WIN_DEVICE_RESET )  switch ( val )  if ( ! s -> is_cf )  s -> error = 0x09; s -> status = READY_STAT | SEEK_STAT; if ( ! s -> is_cf )  if ( val == CFA_WEAR_LEVEL )  s -> nsector = 0; if ( val == CFA_ERASE_SECTORS )  s -> media_changed = 1; s -> error = 0x00; s -> status = READY_STAT | SEEK_STAT; if ( ! s -> is_cf )  s -> error = 0x00; s -> status = READY_STAT | SEEK_STAT; memset ( s -> io_buffer , 0 , 0x200 ); s -> io_buffer [ 0x00 ] = s -> hcyl; s -> io_buffer [ 0x01 ] = s -> lcyl; s -> io_buffer [ 0x02 ] = s -> select; s -> io_buffer [ 0x03 ] = s -> sector; s -> io_buffer [ 0x04 ] = ide_get_sector ( s ) >> 16; s -> io_buffer [ 0x05 ] = ide_get_sector ( s ) >> 8; s -> io_buffer [ 0x06 ] = ide_get_sector ( s ) >> 0; s -> io_buffer [ 0x13 ] = 0x00; s -> io_buffer [ 0x18 ] = 0x00; s -> io_buffer [ 0x19 ] = 0x00; s -> io_buffer [ 0x1a ] = 0x01; ide_transfer_start ( s , s -> io_buffer , 0x200 , ide_transfer_stop ); ide_set_irq ( s ); if ( ! s -> is_cf )  switch ( s -> feature )  ide_cfata_metadata_inquiry ( s ); ide_cfata_metadata_read ( s ); ide_cfata_metadata_write ( s ); ide_transfer_start ( s , s -> io_buffer , 0x200 , ide_transfer_stop ); s -> status = 0x00; ide_set_irq ( s ); 
static int megasas_dcmd_ld_get_info(MegasasState *s, MegasasCmd *cmd) size_t dcmd_size = sizeof ( info ) ; uint16_t ld_id ; uint32_t max_ld_disks = s -> fw_luns ; SCSIDevice * sdev = NULL ; if ( cmd -> iov_size < dcmd_size )  ld_id = le16_to_cpu ( cmd -> frame -> dcmd . mbox [ 0 ] ); if ( megasas_is_jbod ( s ) )  static bool megasas_is_jbod(MegasasState *s) return s -> flags & MEGASAS_MASK_USE_JBOD ; if ( ld_id < max_ld_disks )  sdev = scsi_device_find ( & s -> bus , 0 , ld_id , 0 ); if ( sdev )  retval = megasas_ld_get_info_submit ( sdev , ld_id , cmd ); static int megasas_ld_get_info_submit(SCSIDevice *sdev, int MegasasCmd *cmd) size_t dcmd_size = sizeof ( struct mfi_ld_info ) ; uint8_t cdb [ 6 ] ; if ( ! cmd -> iov_buf )  cmd -> iov_buf = g_malloc0 ( dcmd_size ); info = cmd -> iov_buf; megasas_setup_inquiry ( cdb , 0x83 , sizeof ( info -> vpd_page83 ) ); static int megasas_setup_inquiry(uint8_t *cdb, int pg, int len) memset ( cdb , 0 , 6 ); cdb [ 0 ] = INQUIRY; cdb [ 1 ] = 0x1; cdb [ 2 ] = pg; cdb [ 3 ] = ( len >> 8 ) & 0xff; cdb [ 4 ] = ( len & 0xff ); 
static int32_t scsi_target_send_command(SCSIRequest *req, uint8_t *buf) SCSITargetReq * r = DO_UPCAST ( SCSITargetReq , req , req ) ; switch ( buf [ 0 ] )  if ( ! scsi_target_emulate_report_luns ( r ) )  static bool scsi_target_emulate_report_luns(SCSITargetReq *r) BusChild * kid ; int i , len , n ; int channel , id ; bool found_lun0 ; if ( r -> req . cmd . xfer < 16 )  if ( r -> req . cmd . buf [ 2 ] > 2 )  channel = r -> req . dev -> channel; id = r -> req . dev -> id; found_lun0 = false; n = 0; DeviceState * qdev = kid -> child ; SCSIDevice * dev = SCSI_DEVICE ( qdev ) ; if ( dev -> channel == channel && dev -> id == id )  if ( dev -> lun == 0 )  found_lun0 = true; n += 8; if ( ! found_lun0 )  n += 8; i = found_lun0 ? 8 : 16; DeviceState * qdev = kid -> child ; SCSIDevice * dev = SCSI_DEVICE ( qdev ) ; if ( dev -> channel == channel && dev -> id == id )  i += 8; assert ( i == n + 8 ); 
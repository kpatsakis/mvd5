static void scsi_target_read_data(SCSIRequest *req) SCSITargetReq * r = DO_UPCAST ( SCSITargetReq , req , req ) ; uint32_t n ; n = r -> len; if ( n > 0 )  r -> len = 0; scsi_req_complete ( & r -> req , GOOD ); void scsi_req_complete(SCSIRequest *req, int status) req -> status = status; if ( status == GOOD )  req -> sense_len = 0; if ( req -> sense_len )  req -> dev -> sense_len = 0; req -> dev -> sense_is_ua = false; scsi_req_ref ( req ); SCSIRequest *scsi_req_ref(SCSIRequest *req) assert ( req -> refcount > 0 ); 
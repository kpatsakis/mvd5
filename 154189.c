static void scsi_qdev_unrealize(DeviceState *qdev, Error **errp) SCSIDevice * dev = SCSI_DEVICE ( qdev ) ; scsi_device_purge_requests ( dev , SENSE_CODE ( NO_SENSE ) ); void scsi_device_purge_requests(SCSIDevice *sdev, SCSISense sense) SCSIRequest * req ; while ( ! QTAILQ_EMPTY ( & sdev -> requests ) )  req = QTAILQ_FIRST ( & sdev -> requests ); scsi_req_cancel ( req ); void scsi_req_cancel(SCSIRequest *req) if ( ! req -> enqueued )  req -> io_canceled = true; if ( req -> aiocb )  scsi_req_cancel_complete ( req ); void scsi_req_cancel_complete(SCSIRequest *req) assert ( req -> io_canceled ); 
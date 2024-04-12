static sg_write(struct file *filp, const char __user *buf, size_t count, loff_t * ppos) int input_size , blocking ; Sg_device * sdp ; Sg_fd * sfp ; struct sg_header old_hdr ; if ( ( ! ( sfp = ( Sg_fd * ) filp -> private_data ) ) || ( ! ( sdp = sfp -> parentdp ) ) )  if ( atomic_read ( & sdp -> detaching ) )  if ( ! ( ( filp -> f_flags & O_NONBLOCK ) || scsi_block_when_processing_errors ( sdp -> device ) ) )  if ( ! access_ok ( VERIFY_READ , buf , count ) )  if ( count < SZ_SG_HEADER )  if ( __copy_from_user ( & old_hdr , buf , SZ_SG_HEADER ) )  blocking = ! ( filp -> f_flags & O_NONBLOCK ); if ( old_hdr . reply_len < 0 )  return sg_new_write ( sfp , filp , buf , count , blocking , 0 , 0 , NULL ) ; static sg_new_write(Sg_fd *sfp, struct file *file, const char __user size_t count, int blocking, int read_only, int Sg_request **o_srp) Sg_request * srp ; if ( count < SZ_SG_IO_HDR )  if ( ! access_ok ( VERIFY_READ , buf , count ) )  sfp -> cmd_q = 1; if ( ! ( srp = sg_add_request ( sfp ) ) )  static Sg_request sg_add_request(Sg_fd * sfp) int k ; Sg_request * resp ; Sg_request * rp = sfp -> req_arr ; resp = sfp -> headrp; if ( ! resp )  if ( 0 == sfp -> cmd_q )  if ( k < SG_MAX_QUEUE )  memset ( rp , 0 , sizeof ( Sg_request ) ); rp -> parentfp = sfp; resp -> nextrp = rp; resp = rp; if ( resp )  resp -> nextrp = NULL; resp -> header . duration = jiffies_to_msecs ( jiffies ); return resp ; 
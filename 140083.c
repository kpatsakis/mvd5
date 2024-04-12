static void megasas_command_complete(SCSIRequest *req, uint32_t size_t resid) MegasasCmd * cmd = req -> hba_private ; if ( cmd -> req != req )  cmd_status = megasas_finish_internal_command ( cmd , req , resid ); static int megasas_finish_internal_command(MegasasCmd SCSIRequest *req, size_t resid) if ( cmd -> frame -> header . frame_cmd == MFI_CMD_DCMD )  cmd -> iov_size -= resid; retval = megasas_finish_internal_dcmd ( cmd , req ); static int megasas_finish_internal_dcmd(MegasasCmd SCSIRequest *req) int opcode ; int lun = req -> lun ; opcode = le32_to_cpu ( cmd -> frame -> dcmd . opcode ); switch ( opcode )  retval = megasas_ld_get_info_submit ( req -> dev , lun , cmd ); static int megasas_ld_get_info_submit(SCSIDevice *sdev, int MegasasCmd *cmd) struct mfi_ld_info * info = cmd -> iov_buf ; uint64_t ld_size ; if ( ! cmd -> iov_buf )  info -> ld_config . params . state = MFI_LD_STATE_OPTIMAL; info -> ld_config . properties . ld . v . target_id = lun; info -> ld_config . params . stripe_size = 3; info -> ld_config . params . num_drives = 1; info -> ld_config . params . is_consistent = 1; info -> size = cpu_to_le64 ( ld_size ); memset ( info -> ld_config . span , 0 , sizeof ( info -> ld_config . span ) ); info -> ld_config . span [ 0 ] . start_block = 0; info -> ld_config . span [ 0 ] . num_blocks = info -> size; info -> ld_config . span [ 0 ] . array_ref = cpu_to_le16 ( sdev_id ); 
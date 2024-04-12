static void fw_cfg_init1(DeviceState *dev) FWCfgState * s = FW_CFG ( dev ) ; fw_cfg_reboot ( s ); static void fw_cfg_reboot(FWCfgState *s) int reboot_timeout = - 1 ; char * p ; const char * temp ; QemuOptsList * plist = qemu_find_opts ( "boot-opts" ) ; QemuOpts * opts = QTAILQ_FIRST ( & plist -> head ) ; if ( opts != NULL )  temp = qemu_opt_get ( opts , "reboot-timeout" ); if ( temp != NULL )  p = ( char * ) temp; reboot_timeout = strtol ( p , ( char * * ) & p , 10 ); if ( reboot_timeout > 0xffff )  reboot_timeout = 0xffff; fw_cfg_add_file ( s , "etc/boot-fail-wait" , g_memdup ( & reboot_timeout , 4 ) , 4 ); void fw_cfg_add_file(FWCfgState *s,  const char void *data, size_t len) fw_cfg_add_file_callback ( s , filename , NULL , NULL , data , len ); void fw_cfg_add_file_callback(FWCfgState *s,  const char FWCfgReadCallback callback, void void *data, size_t len) int i , index ; size_t dsize ; if ( ! s -> files )  dsize = sizeof ( uint32_t ) + sizeof ( FWCfgFile ) * FW_CFG_FILE_SLOTS; s -> files = g_malloc0 ( dsize ); index = be32_to_cpu ( s -> files -> count ); for (i = 0; i < index; i++) if ( strcmp ( s -> files -> f [ index ] . name , s -> files -> f [ i ] . name ) == 0 )  
static void fw_cfg_init1(DeviceState *dev) FWCfgState * s = FW_CFG ( dev ) ; fw_cfg_bootsplash ( s ); static void fw_cfg_bootsplash(FWCfgState *s) const char * boot_splash_filename = NULL ; char * filename , * file_data ; gsize file_size ; int file_type ; const char * temp ; QemuOptsList * plist = qemu_find_opts ( "boot-opts" ) ; QemuOpts * opts = QTAILQ_FIRST ( & plist -> head ) ; if ( opts != NULL )  temp = qemu_opt_get ( opts , "splash" ); if ( temp != NULL )  boot_splash_filename = temp; if ( boot_splash_filename != NULL )  filename = qemu_find_file ( QEMU_FILE_TYPE_BIOS , boot_splash_filename ); if ( filename == NULL )  file_data = read_splashfile ( filename , & file_size , & file_type ); if ( file_data == NULL )  boot_splash_filedata = ( uint8_t * ) file_data; boot_splash_filedata_size = file_size; if ( file_type == JPG_FILE )  fw_cfg_add_file ( s , "bootsplash.bmp" , boot_splash_filedata , boot_splash_filedata_size ); void fw_cfg_add_file(FWCfgState *s,  const char void *data, size_t len) fw_cfg_add_file_callback ( s , filename , NULL , NULL , data , len ); void fw_cfg_add_file_callback(FWCfgState *s,  const char FWCfgReadCallback callback, void void *data, size_t len) int i , index ; size_t dsize ; if ( ! s -> files )  dsize = sizeof ( uint32_t ) + sizeof ( FWCfgFile ) * FW_CFG_FILE_SLOTS; s -> files = g_malloc0 ( dsize ); index = be32_to_cpu ( s -> files -> count ); assert ( index < FW_CFG_FILE_SLOTS ); 
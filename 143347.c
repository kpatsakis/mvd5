CharDriverState *qemu_chr_open(const char *label, const char *filename, void (*init)(struct CharDriverState *s)) const char * p ; CharDriverState * chr ; if ( ! strcmp ( filename , "vc" ) )  if ( strstart ( filename , "vc:" , & p ) )  if ( ! strcmp ( filename , "null" ) )  if ( strstart ( filename , "tcp:" , & p ) )  if ( strstart ( filename , "telnet:" , & p ) )  if ( strstart ( filename , "udp:" , & p ) )  if ( strstart ( filename , "mon:" , & p ) )  chr = qemu_chr_open ( label , p , NULL ); CharDriverState *qemu_chr_open(const char *label, const char *filename, void (*init)(struct CharDriverState *s)) const char * p ; CharDriverState * chr ; if ( ! strcmp ( filename , "vc" ) )  if ( strstart ( filename , "vc:" , & p ) )  if ( ! strcmp ( filename , "null" ) )  if ( strstart ( filename , "tcp:" , & p ) )  if ( strstart ( filename , "telnet:" , & p ) )  if ( strstart ( filename , "udp:" , & p ) )  if ( strstart ( filename , "mon:" , & p ) )  chr = qemu_chr_open ( label , p , NULL ); CharDriverState *qemu_chr_open(const char *label, const char *filename, void (*init)(struct CharDriverState *s)) const char * p ; CharDriverState * chr ; if ( ! strcmp ( filename , "vc" ) )  if ( strstart ( filename , "vc:" , & p ) )  if ( ! strcmp ( filename , "null" ) )  if ( strstart ( filename , "tcp:" , & p ) )  if ( strstart ( filename , "telnet:" , & p ) )  if ( strstart ( filename , "udp:" , & p ) )  if ( strstart ( filename , "mon:" , & p ) )  if ( ! strcmp ( filename , "msmouse" ) )  if ( strstart ( filename , "unix:" , & p ) )  if ( strstart ( filename , "file:" , & p ) )  if ( strstart ( filename , "pipe:" , & p ) )  if ( ! strcmp ( filename , "pty" ) )  if ( ! strcmp ( filename , "stdio" ) )  if ( strstart ( filename , "/dev/parport" , NULL ) )  chr = qemu_chr_open_pp ( filename ); static CharDriverState *qemu_chr_open_pp(const char *filename) int fd ; TFR ( fd = open ( filename , O_RDWR ) ); if ( fd < 0 )  if ( ioctl ( fd , PPCLAIM ) < 0 )  close ( fd ); drv -> fd = fd; drv -> mode = IEEE1284_MODE_COMPAT; chr -> opaque = drv; qemu_chr_reset ( chr ); void qemu_chr_reset(CharDriverState *s) if ( s -> bh == NULL && initial_reset_issued )  s -> bh = qemu_bh_new ( qemu_chr_reset_bh , s ); qemu_bh_schedule ( s -> bh ); return chr ; 
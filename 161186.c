CharDriverState *qemu_chr_open(const char *label, const char *filename, void (*init)(struct CharDriverState *s)) const char * p ; CharDriverState * chr ; if ( ! strcmp ( filename , "vc" ) )  if ( strstart ( filename , "vc:" , & p ) )  if ( ! strcmp ( filename , "null" ) )  if ( strstart ( filename , "tcp:" , & p ) )  if ( strstart ( filename , "telnet:" , & p ) )  if ( strstart ( filename , "udp:" , & p ) )  if ( strstart ( filename , "mon:" , & p ) )  chr = qemu_chr_open ( label , p , NULL ); CharDriverState *qemu_chr_open(const char *label, const char *filename, void (*init)(struct CharDriverState *s)) const char * p ; CharDriverState * chr ; if ( ! strcmp ( filename , "vc" ) )  if ( strstart ( filename , "vc:" , & p ) )  if ( ! strcmp ( filename , "null" ) )  if ( strstart ( filename , "tcp:" , & p ) )  if ( strstart ( filename , "telnet:" , & p ) )  if ( strstart ( filename , "udp:" , & p ) )  if ( strstart ( filename , "mon:" , & p ) )  chr = qemu_chr_open ( label , p , NULL ); CharDriverState *qemu_chr_open(const char *label, const char *filename, void (*init)(struct CharDriverState *s)) CharDriverState * chr ; if ( strstart ( filename , "/dev/" , NULL ) )  chr = qemu_chr_open_tty ( filename ); static CharDriverState *qemu_chr_open_tty(const char *filename) CharDriverState * chr ; int fd ; TFR ( fd = open ( filename , O_RDWR | O_NONBLOCK ) ); chr = qemu_chr_open_fd ( fd , fd ); static CharDriverState *qemu_chr_open_fd(int fd_in, int fd_out) CharDriverState * chr ; FDCharDriver * s ; chr = qemu_mallocz ( sizeof ( CharDriverState ) ); s = qemu_mallocz ( sizeof ( FDCharDriver ) ); s -> fd_in = fd_in; s -> fd_out = fd_out; chr -> opaque = s; chr -> chr_write = fd_chr_write; chr -> chr_update_read_handler = fd_chr_update_read_handler; chr -> chr_close = fd_chr_close; return chr ; if ( ! chr )  close ( fd ); 
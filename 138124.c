CharDriverState *qemu_chr_open(const char *label, const char *filename, void (*init)(struct CharDriverState *s)) const char * p ; CharDriverState * chr ; if ( ! strcmp ( filename , "vc" ) )  if ( strstart ( filename , "vc:" , & p ) )  if ( ! strcmp ( filename , "null" ) )  if ( strstart ( filename , "tcp:" , & p ) )  if ( strstart ( filename , "telnet:" , & p ) )  if ( strstart ( filename , "udp:" , & p ) )  if ( strstart ( filename , "mon:" , & p ) )  chr = qemu_chr_open ( label , p , NULL ); CharDriverState *qemu_chr_open(const char *label, const char *filename, void (*init)(struct CharDriverState *s)) const char * p ; CharDriverState * chr ; if ( ! strcmp ( filename , "vc" ) )  if ( strstart ( filename , "vc:" , & p ) )  if ( ! strcmp ( filename , "null" ) )  if ( strstart ( filename , "tcp:" , & p ) )  if ( strstart ( filename , "telnet:" , & p ) )  if ( strstart ( filename , "udp:" , & p ) )  if ( strstart ( filename , "mon:" , & p ) )  chr = qemu_chr_open ( label , p , NULL ); CharDriverState *qemu_chr_open(const char *label, const char *filename, void (*init)(struct CharDriverState *s)) const char * p ; CharDriverState * chr ; if ( ! strcmp ( filename , "vc" ) )  if ( strstart ( filename , "vc:" , & p ) )  if ( ! strcmp ( filename , "null" ) )  if ( strstart ( filename , "tcp:" , & p ) )  if ( strstart ( filename , "telnet:" , & p ) )  if ( strstart ( filename , "udp:" , & p ) )  if ( strstart ( filename , "mon:" , & p ) )  if ( ! strcmp ( filename , "msmouse" ) )  if ( strstart ( filename , "unix:" , & p ) )  if ( strstart ( filename , "file:" , & p ) )  if ( strstart ( filename , "pipe:" , & p ) )  chr = qemu_chr_open_pipe ( p ); static CharDriverState *qemu_chr_open_pipe(const char *filename) int fd_in , fd_out ; char filename_in [ 256 ] , filename_out [ 256 ] ; snprintf ( filename_in , 256 , "%s.in" , filename ); snprintf ( filename_out , 256 , "%s.out" , filename ); TFR ( fd_in = open ( filename_in , O_RDWR | O_BINARY ) ); TFR ( fd_out = open ( filename_out , O_RDWR | O_BINARY ) ); if ( fd_in < 0 || fd_out < 0 )  if ( fd_out >= 0 )  close ( fd_out ); 
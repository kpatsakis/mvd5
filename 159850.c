static void eepro100_write(void *opaque, hwaddr uint64_t data, unsigned size) EEPRO100State * s = opaque ; switch ( size )  eepro100_write4 ( s , addr , data ); static void eepro100_write4(EEPRO100State * s, uint32_t addr, uint32_t val) switch ( addr )  eepro100_write_port ( s ); static void eepro100_write_port(EEPRO100State *s) uint32_t val = e100_read_reg4 ( s , SCBPort ) ; static uint32_t e100_read_reg4(EEPRO100State *s, E100RegisterOffset addr) assert ( ! ( ( uintptr_t ) & s -> mem [ addr ] & 3 ) ); 
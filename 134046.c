static void eepro100_write2(EEPRO100State * s, uint32_t addr, uint16_t val) switch ( addr )  s -> mem [ SCBAck ] = ( val >> 8 ); eepro100_write_command ( s , val ); static void eepro100_write_command(EEPRO100State * s, uint8_t val) eepro100_ru_command ( s , val & 0x0f ); static void eepro100_ru_command(EEPRO100State * s, uint8_t val) switch ( val )  s -> ru_offset = e100_read_reg4 ( s , SCBPointer ); static uint32_t e100_read_reg4(EEPRO100State *s, E100RegisterOffset addr) assert ( ! ( ( uintptr_t ) & s -> mem [ addr ] & 3 ) ); 
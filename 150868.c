static uint64_t eepro100_read(void *opaque, hwaddr unsigned size) EEPRO100State * s = opaque ; switch ( size )  return eepro100_read2 ( s , addr ) ; static uint16_t eepro100_read2(EEPRO100State * s, uint32_t addr) switch ( addr )  val = ( uint16_t ) ( eepro100_read_mdi ( s ) >> ( 8 * ( addr & 3 ) ) ); static uint32_t eepro100_read_mdi(EEPRO100State * s) uint32_t val = e100_read_reg4 ( s , SCBCtrlMDI ) ; static uint32_t e100_read_reg4(EEPRO100State *s, E100RegisterOffset addr) return le32_to_cpup ( ( uint32_t * ) & s -> mem [ addr ] ) ; uint8_t raiseint = ( val & BIT ( 29 ) ) >> 29 ; uint8_t opcode = ( val & BITS ( 27 , 26 ) ) >> 26 ; uint8_t phy = ( val & BITS ( 25 , 21 ) ) >> 21 ; uint8_t reg = ( val & BITS ( 20 , 16 ) ) >> 16 ; uint16_t data = ( val & BITS ( 15 , 0 ) ) ; val |= BIT ( 28 ); TRACE ( MDI , logout ( "val=0x%08x (int=%u, %s, phy=%u, %s, data=0x%04x\n" , val , raiseint , mdi_op_name [ opcode ] , phy , reg2name ( reg ) , data ) ); static const char *reg2name(uint8_t reg) static char buffer [ 10 ] ; if ( reg < ARRAY_SIZE ( mdi_reg_name ) )  snprintf ( buffer , sizeof ( buffer ) , "reg=0x%02x" , reg ); 
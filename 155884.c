void CWE328_Reversible_One_Way_Hash__w32_MD2_12_bad() if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; UCHAR savedHash [ MD2_SUM_SIZE ] , calcHash [ MD2_SUM_SIZE ] ; size_t i ; UCHAR savedHash [ SHA512_SUM_SIZE ] , calcHash [ SHA512_SUM_SIZE ] ; size_t i ; for (i = 0; i < SHA512_SUM_SIZE; i++) ULONG val ; savedHash [ i ] = ( UCHAR ) val; if ( memcmp ( savedHash , calcHash , SHA512_SUM_SIZE * sizeof ( UCHAR ) ) == 0 )  
void CWE196_Unsigned_to_Signed_Conversion_Error__basic_12_bad() if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; unsigned intUnsigned ; intUnsigned = rand ( ); intUnsigned = UINT_MAX - intUnsigned; intSigned = intUnsigned; printIntLine ( intSigned ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); intUnsigned = UINT_MAX - intUnsigned; if ( intUnsigned > INT_MAX )  intSigned = intUnsigned; printIntLine ( intSigned ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 
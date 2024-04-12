static DoBinaryArithFallback(JSContext* cx, void* payload, ICBinaryArith_Fallback* HandleValue lhs, HandleValue rhs, MutableHandleValue ret) SharedStubInfo info ( cx , payload , stub_ -> icEntry ( ) ) ; DebugModeOSRVolatileStub < ICBinaryArith_Fallback * > stub ( engine , info . maybeFrame ( ) , stub_ ) ; jsbytecode * pc = info . pc ( ) ; JSOp op = JSOp ( * pc ) ; FallbackICSpew ( cx , stub , "BinaryArith(%s,%d,%d)" , CodeName [ op ] , int ( lhs . isDouble ( ) ? JSVAL_TYPE_DOUBLE : lhs . extractNonDoubleType ( ) ) , int ( rhs . isDouble ( ) ? JSVAL_TYPE_DOUBLE : rhs . extractNonDoubleType ( ) ) );  FallbackICSpew(JSContext* cx, ICFallbackStub* stub, const char* fmt, ...) if ( JitSpewEnabled ( JitSpew_BaselineICFallback ) )  char fmtbuf [ 100 ] ; va_list args ; vsnprintf ( fmtbuf , 100 , fmt , args ); JitSpew ( JitSpew_BaselineICFallback "Fallback hit for (%s:%" PRIuSIZE ") (pc=%" PRIuSIZE ",line=%d,uses=%d,stubs=%" PRIuSIZE "): %s" script -> filename ( ) script -> lineno ( ) script -> pcToOffset ( pc ) PCToLineNumber ( script , pc ) script -> getWarmUpCount ( ) stub -> numOptimizedStubs ( ) fmtbuf ) 
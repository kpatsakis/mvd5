bool passArg(MDefinition* argDef, VarType type, Call* call) if ( ! call -> sig ( ) . appendArg ( type ) )  return argTypes_ . append ( type ) ; bool appendArg(VarType type) if ( inDeadCode ( ) )  inline bool inDeadCode() const return curBlock_ == nullptr ; uint32_t childStackBytes = mirGen ( ) . resetAsmJSMaxStackArgBytes ( ) ; MIRGenerator & mirGen() const return * mirGen_ ; call -> maxChildStackBytes_ = Max ( call -> maxChildStackBytes_ , childStackBytes ); if ( childStackBytes > 0 && ! call -> stackArgs_ . empty ( ) )  call -> childClobbers_ = true; ABIArg arg = call -> abi_ . next ( type . toMIRType ( ) ) ; if ( arg . kind ( ) == ABIArg :: Stack )  MAsmJSPassStackArg * mir = MAsmJSPassStackArg :: New ( alloc ( ) , arg . offsetFromArgBase ( ) , argDef ) ; return * alloc_ ; TempAllocator &     alloc() const curBlock_ -> add ( mir ); if ( ! call -> stackArgs_ . append ( mir ) )  
bool branchAndCloseDoWhileLoop(MDefinition* cond, MBasicBlock* loopEntry, ParseNode* afterLoopStmt) if ( ! loopEntry )  if ( curBlock_ )  if ( cond -> isConstant ( ) )  MBasicBlock * afterLoop ; if ( ! newBlock ( curBlock_ , & afterLoop , afterLoopStmt ) )  bool newBlock(MBasicBlock* pred, MBasicBlock** block, ParseNode* pn) return newBlockWithDepth ( pred , loopStack_ . length ( ) , block , pn ) ; bool newBlockWithDepth(MBasicBlock* pred, unsigned loopDepth, MBasicBlock** block, ParseNode* pn) * block = MBasicBlock :: NewAsmJS ( mirGraph ( ) , info ( ) , pred , MBasicBlock :: NORMAL ); CompileInfo &  info() const return * info_ ; MIRGraph &     mirGraph() const return * graph_ ; if ( ! * block )  return false ; return true ; curBlock_ -> end ( MTest :: New ( alloc ( ) , cond , loopEntry , afterLoop ) ); return * alloc_ ; TempAllocator &     alloc() const 
bool bindContinues(ParseNode* pn, const LabelVector* maybeLabels) if ( p )  if ( ! bindBreaksOrContinues ( & p -> value ( ) , & createdJoinBlock , pn ) )  bool bindBreaksOrContinues(BlockVector* preds, bool* createdJoinBlock, ParseNode* pn) for (unsigned i = 0; i < preds->length(); i++) MBasicBlock * pred = ( * preds ) [ i ] ; if ( * createdJoinBlock )  if ( ! curBlock_ -> addPredecessor ( alloc ( ) , pred ) )  return * alloc_ ; TempAllocator &     alloc() const MBasicBlock * next ; if ( ! newBlock ( pred , & next , pn ) )  bool newBlock(MBasicBlock* pred, MBasicBlock** block, ParseNode* pn) return newBlockWithDepth ( pred , loopStack_ . length ( ) , block , pn ) ; bool newBlockWithDepth(MBasicBlock* pred, unsigned loopDepth, MBasicBlock** block, ParseNode* pn) * block = MBasicBlock :: NewAsmJS ( mirGraph ( ) , info ( ) , pred , MBasicBlock :: NORMAL ); CompileInfo &  info() const return * info_ ; MIRGraph &     mirGraph() const return * graph_ ; if ( ! * block )  return false ; return true ; pred -> end ( MGoto :: New ( alloc ( ) , next ) ); return * alloc_ ; TempAllocator &     alloc() const if ( curBlock_ )  if ( ! next -> addPredecessor ( alloc ( ) , curBlock_ ) )  TempAllocator &     alloc() const return * alloc_ ; TempAllocator &     alloc() const curBlock_ = next; * createdJoinBlock = true; if ( ! mirGen_ -> ensureBallast ( ) )  
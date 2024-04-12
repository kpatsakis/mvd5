 RestyleManager::ReparentStyleContext(nsIFrame* aFrame) nsStyleContext * oldContext = aFrame -> StyleContext ( ) ; nsRefPtr < nsStyleContext > newContext ; nsIFrame * providerFrame = aFrame -> GetParentStyleContextFrame ( ) ; bool isChild = providerFrame && providerFrame -> GetParent ( ) == aFrame ; nsStyleContext * newParentContext = nullptr ; if ( isChild )  newParentContext = providerFrame -> StyleContext ( ); if ( providerFrame )  newParentContext = providerFrame -> StyleContext ( ); nsIFrame * prevContinuation = GetPrevContinuationWithPossiblySameStyle ( aFrame ) ; static GetPrevContinuationWithPossiblySameStyle(nsIFrame* aFrame) nsIFrame * prevContinuation = aFrame -> GetPrevContinuation ( ) ; if ( ! prevContinuation && ( aFrame -> GetStateBits ( ) & NS_FRAME_PART_OF_IBSPLIT ) )  prevContinuation = static_cast < nsIFrame * > aFrame -> Properties ( ) . Get ( nsIFrame :: IBSplitPrevSibling ( ) ) if ( prevContinuation )  prevContinuation = static_cast < nsIFrame * > prevContinuation -> Properties ( ) . Get ( nsIFrame :: IBSplitPrevSibling ( ) ) return prevContinuation ; nsStyleContext * prevContinuationContext ; bool copyFromContinuation = prevContinuation && ( prevContinuationContext = prevContinuation -> StyleContext ( ) ) -> GetPseudo ( ) == oldContext -> GetPseudo ( ) && prevContinuationContext -> GetParent ( ) == newParentContext ; if ( copyFromContinuation )  newContext = prevContinuationContext; nsIFrame * parentFrame = aFrame -> GetParent ( ) ; Element * element = ElementForStyleContext ( parentFrame ? parentFrame -> GetContent ( ) : nullptr , aFrame , oldContext -> GetPseudoType ( ) ) ; static inline ElementForStyleContext(nsIContent* nsIFrame* nsCSSPseudoElements::Type aPseudoType) if ( aPseudoType == nsCSSPseudoElements :: ePseudo_NotPseudoElement )  return aFrame -> GetContent ( ) -> AsElement ( ) ; if ( aPseudoType == nsCSSPseudoElements :: ePseudo_AnonBox )  return nullptr ; if ( aPseudoType == nsCSSPseudoElements :: ePseudo_firstLetter )  nsBlockFrame * block = nsBlockFrame :: GetNearestAncestorBlock ( aFrame ) ; return block -> GetContent ( ) -> AsElement ( ) ; if ( aPseudoType == nsCSSPseudoElements :: ePseudo_mozColorSwatch )  nsIFrame * grandparentFrame = aFrame -> GetParent ( ) -> GetParent ( ) ; return grandparentFrame -> GetContent ( ) -> AsElement ( ) ; if ( aPseudoType == nsCSSPseudoElements :: ePseudo_mozNumberText || aPseudoType == nsCSSPseudoElements :: ePseudo_mozNumberWrapper || aPseudoType == nsCSSPseudoElements :: ePseudo_mozNumberSpinBox || aPseudoType == nsCSSPseudoElements :: ePseudo_mozNumberSpinUp || aPseudoType == nsCSSPseudoElements :: ePseudo_mozNumberSpinDown )  nsIFrame * f = aFrame -> GetParent ( ) ; while ( f -> GetType ( ) != nsGkAtoms :: numberControlFrame )  f = f -> GetParent ( ); return f -> GetContent ( ) -> AsElement ( ) ; if ( aParentContent )  return aParentContent -> AsElement ( ) ; return aFrame -> GetContent ( ) -> GetParent ( ) -> AsElement ( ) ; nsIContent * pseudoElementContent = aFrame -> GetContent ( ) ; Element * pseudoElement = ( pseudoElementContent && pseudoElementContent -> IsElement ( ) ) ? pseudoElementContent -> AsElement ( ) : nullptr ; newContext = mPresContext -> StyleSet ( ) -> ReparentStyleContext ( oldContext , newParentContext , element , pseudoElement ); if ( newContext )  if ( newContext != oldContext )  VerifyStyleTree ( mPresContext , aFrame , newParentContext ); static VerifyStyleTree(nsPresContext* aPresContext, nsIFrame* nsStyleContext* aParentContext) nsStyleContext * context = aFrame -> StyleContext ( ) ; VerifyContextParent ( aPresContext , aFrame , context , nullptr ); static VerifyContextParent(nsPresContext* aPresContext, nsIFrame* nsStyleContext* aContext, nsStyleContext* aParentContext) if ( ! aContext )  aContext = aFrame -> StyleContext ( ); if ( ! aParentContext )  nsIFrame * providerFrame = aFrame -> GetParentStyleContextFrame ( ) ; if ( providerFrame )  aParentContext = providerFrame -> StyleContext ( ); nsStyleContext * actualParentContext = aContext -> GetParent ( ) ; if ( aParentContext )  if ( aParentContext != actualParentContext )  DumpContext ( aFrame , aContext ); static DumpContext(nsIFrame* aFrame, nsStyleContext* aContext) if ( aFrame )  fprintf ( stdout , " (%p)" , static_cast < void * > ( aFrame ) ) if ( aContext )  fprintf ( stdout , " style: %p " , static_cast < void * > ( aContext ) ) nsIAtom * pseudoTag = aContext -> GetPseudo ( ) ; if ( pseudoTag )  nsAutoString buffer ; fputs ( NS_LossyConvertUTF16toASCII ( buffer ) . get ( ) , stdout ); 
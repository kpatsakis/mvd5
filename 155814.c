const nsRuleNode::ComputeSVGData(void* const nsRuleData* nsStyleContext* nsRuleNode* const RuleDetail const RuleNodeCacheConditions aConditions) const nsCSSValue * markerStartValue = aRuleData -> ValueForMarkerStart ( ) ; if ( eCSSUnit_URL == markerStartValue -> GetUnit ( ) )  if ( eCSSUnit_None == markerStartValue -> GetUnit ( ) || eCSSUnit_Initial == markerStartValue -> GetUnit ( ) )  if ( eCSSUnit_Inherit == markerStartValue -> GetUnit ( ) || eCSSUnit_Unset == markerStartValue -> GetUnit ( ) )  svg -> mMarkerStart = parentSVG -> mMarkerStart; const nsCSSValue * paintOrderValue = aRuleData -> ValueForPaintOrder ( ) ; switch ( paintOrderValue -> GetUnit ( ) )  svg -> mPaintOrder = static_cast < uint8_t > ( paintOrderValue -> GetIntValue ( ) ); svg -> mPaintOrder = parentSVG -> mPaintOrder; svg -> mPaintOrder = NS_STYLE_PAINT_ORDER_NORMAL; const nsCSSValue * strokeDasharrayValue = aRuleData -> ValueForStrokeDasharray ( ) ; switch ( strokeDasharrayValue -> GetUnit ( ) )  svg -> mStrokeDasharrayFromObject = parentSVG -> mStrokeDasharrayFromObject; if ( ! svg -> mStrokeDasharray )  svg -> mStrokeDasharrayLength = parentSVG -> mStrokeDasharrayLength; if ( svg -> mStrokeDasharrayLength )  svg -> mStrokeDasharray = new nsStyleCoord [ svg -> mStrokeDasharrayLength ]; if ( svg -> mStrokeDasharray )  memcpy ( svg -> mStrokeDasharray , parentSVG -> mStrokeDasharray , svg -> mStrokeDasharrayLength * sizeof ( nsStyleCoord ) ); if ( svg -> mStrokeDasharray )  SetCoord ( value -> mValue , svg -> mStrokeDasharray [ i ++ ] , nsStyleCoord ( ) , SETCOORD_LP | SETCOORD_FACTOR , aContext , mPresContext , conditions ); static bool SetCoord(const nsCSSValue& aValue, nsStyleCoord& const nsStyleCoord& int32_t aMask, nsStyleContext* nsPresContext* RuleNodeCacheConditions& aConditions) if ( aValue . GetUnit ( ) == eCSSUnit_Null )  if ( ( ( ( aMask & SETCOORD_LENGTH ) != 0 ) && aValue . IsLengthUnit ( ) ) || ( ( ( aMask & SETCOORD_CALC_LENGTH_ONLY ) != 0 ) && aValue . IsCalcUnit ( ) ) )  nscoord len = CalcLength ( aValue , aStyleContext , aPresContext , aConditions ) ; static inline nscoord CalcLength(const nsCSSValue& nsStyleContext* nsPresContext* RuleNodeCacheConditions& aConditions) return nsRuleNode :: CalcLength ( aValue , aStyleContext , aPresContext , aConditions ) ; /* static */ nsRuleNode::CalcLength(const nsCSSValue& nsStyleContext* nsPresContext* RuleNodeCacheConditions& aConditions) NS_ASSERTION ( aStyleContext , "Must have style data" ); return CalcLengthWith ( aValue , - 1 , nullptr , aStyleContext , aPresContext , false , true , aConditions ) ; static nscoord CalcLengthWith(const nsCSSValue& nscoord const nsStyleFont* nsStyleContext* nsPresContext* bool // aUseUserFontSet should always be // except when called // bool RuleNodeCacheConditions& aConditions) NS_ASSERTION ( aValue . IsLengthUnit ( ) || aValue . IsCalcUnit ( ) , "not a length or calc unit" ); NS_ASSERTION ( aStyleFont || aStyleContext , "Must have style data" ); NS_ASSERTION ( ! aStyleFont || ! aStyleContext , "Duplicate sources of data" ); NS_ASSERTION ( aPresContext , "Must have prescontext" ); if ( aValue . IsFixedLengthUnit ( ) )  return aValue . GetFixedLength ( aPresContext ) ; if ( aValue . IsPixelLengthUnit ( ) )  return aValue . GetPixelLength ( ) ; if ( aValue . IsCalcUnit ( ) )  return css :: ComputeCalc ( aValue , ops ) ; switch ( aValue . GetUnit ( ) )  nscoord viewportWidth = CalcViewportUnitsScale ( aPresContext ) . width ; static nsSize CalcViewportUnitsScale(nsPresContext* aPresContext) aPresContext -> SetUsesViewportUnits ( true ); nsSize viewportSize ( aPresContext -> GetVisibleArea ( ) . Size ( ) ) ; nsIScrollableFrame * scrollFrame = aPresContext -> PresShell ( ) -> GetRootScrollFrameAsScrollable ( ) ; if ( scrollFrame )  ScrollbarStyles styles ( scrollFrame -> GetScrollbarStyles ( ) ) ; if ( styles . mHorizontal == NS_STYLE_OVERFLOW_SCROLL || styles . mVertical == NS_STYLE_OVERFLOW_SCROLL )  nsRenderingContext context ( aPresContext -> PresShell ( ) -> CreateReferenceRenderingContext ( ) ) ; nsMargin sizes ( scrollFrame -> GetDesiredScrollbarSizes ( aPresContext , & context ) ) ; if ( styles . mHorizontal == NS_STYLE_OVERFLOW_SCROLL )  viewportSize . height -= sizes . TopBottom ( ); if ( styles . mVertical == NS_STYLE_OVERFLOW_SCROLL )  viewportSize . width -= sizes . LeftRight ( ); return viewportSize ; return ScaleViewportCoordTrunc ( aValue , viewportWidth ) ; static inline nscoord ScaleViewportCoordTrunc(const nsCSSValue& nscoord aViewportSize) return NSToCoordTruncClamped ( aValue . GetFloatValue ( ) * aViewportSize / 100.0f ) ; nscoord viewportHeight = CalcViewportUnitsScale ( aPresContext ) . height ; static nsSize CalcViewportUnitsScale(nsPresContext* aPresContext) aPresContext -> SetUsesViewportUnits ( true ); nsSize viewportSize ( aPresContext -> GetVisibleArea ( ) . Size ( ) ) ; nsIScrollableFrame * scrollFrame = aPresContext -> PresShell ( ) -> GetRootScrollFrameAsScrollable ( ) ; if ( scrollFrame )  ScrollbarStyles styles ( scrollFrame -> GetScrollbarStyles ( ) ) ; if ( styles . mHorizontal == NS_STYLE_OVERFLOW_SCROLL || styles . mVertical == NS_STYLE_OVERFLOW_SCROLL )  nsRenderingContext context ( aPresContext -> PresShell ( ) -> CreateReferenceRenderingContext ( ) ) ; nsMargin sizes ( scrollFrame -> GetDesiredScrollbarSizes ( aPresContext , & context ) ) ; if ( styles . mHorizontal == NS_STYLE_OVERFLOW_SCROLL )  viewportSize . height -= sizes . TopBottom ( ); if ( styles . mVertical == NS_STYLE_OVERFLOW_SCROLL )  viewportSize . width -= sizes . LeftRight ( ); return viewportSize ; return ScaleViewportCoordTrunc ( aValue , viewportHeight ) ; static inline nscoord ScaleViewportCoordTrunc(const nsCSSValue& nscoord aViewportSize) return NSToCoordTruncClamped ( aValue . GetFloatValue ( ) * aViewportSize / 100.0f ) ; nsSize vuScale ( CalcViewportUnitsScale ( aPresContext ) ) ; static nsSize CalcViewportUnitsScale(nsPresContext* aPresContext) aPresContext -> SetUsesViewportUnits ( true ); nsSize viewportSize ( aPresContext -> GetVisibleArea ( ) . Size ( ) ) ; nsIScrollableFrame * scrollFrame = aPresContext -> PresShell ( ) -> GetRootScrollFrameAsScrollable ( ) ; if ( scrollFrame )  ScrollbarStyles styles ( scrollFrame -> GetScrollbarStyles ( ) ) ; if ( styles . mHorizontal == NS_STYLE_OVERFLOW_SCROLL || styles . mVertical == NS_STYLE_OVERFLOW_SCROLL )  nsRenderingContext context ( aPresContext -> PresShell ( ) -> CreateReferenceRenderingContext ( ) ) ; nsMargin sizes ( scrollFrame -> GetDesiredScrollbarSizes ( aPresContext , & context ) ) ; if ( styles . mHorizontal == NS_STYLE_OVERFLOW_SCROLL )  viewportSize . height -= sizes . TopBottom ( ); if ( styles . mVertical == NS_STYLE_OVERFLOW_SCROLL )  viewportSize . width -= sizes . LeftRight ( ); return viewportSize ; nscoord viewportMin = min ( vuScale . width , vuScale . height ) ; return ScaleViewportCoordTrunc ( aValue , viewportMin ) ; static inline nscoord ScaleViewportCoordTrunc(const nsCSSValue& nscoord aViewportSize) return NSToCoordTruncClamped ( aValue . GetFloatValue ( ) * aViewportSize / 100.0f ) ; nsSize vuScale ( CalcViewportUnitsScale ( aPresContext ) ) ; static nsSize CalcViewportUnitsScale(nsPresContext* aPresContext) aPresContext -> SetUsesViewportUnits ( true ); nsSize viewportSize ( aPresContext -> GetVisibleArea ( ) . Size ( ) ) ; nsIScrollableFrame * scrollFrame = aPresContext -> PresShell ( ) -> GetRootScrollFrameAsScrollable ( ) ; if ( scrollFrame )  ScrollbarStyles styles ( scrollFrame -> GetScrollbarStyles ( ) ) ; if ( styles . mHorizontal == NS_STYLE_OVERFLOW_SCROLL || styles . mVertical == NS_STYLE_OVERFLOW_SCROLL )  nsRenderingContext context ( aPresContext -> PresShell ( ) -> CreateReferenceRenderingContext ( ) ) ; nsMargin sizes ( scrollFrame -> GetDesiredScrollbarSizes ( aPresContext , & context ) ) ; if ( styles . mHorizontal == NS_STYLE_OVERFLOW_SCROLL )  viewportSize . height -= sizes . TopBottom ( ); if ( styles . mVertical == NS_STYLE_OVERFLOW_SCROLL )  viewportSize . width -= sizes . LeftRight ( ); return viewportSize ; nscoord viewportMax = max ( vuScale . width , vuScale . height ) ; return ScaleViewportCoordTrunc ( aValue , viewportMax ) ; static inline nscoord ScaleViewportCoordTrunc(const nsCSSValue& nscoord aViewportSize) return NSToCoordTruncClamped ( aValue . GetFloatValue ( ) * aViewportSize / 100.0f ) ; aPresContext -> SetUsesRootEMUnits ( true ); const nsStyleFont * styleFont = aStyleFont ? aStyleFont : aStyleContext -> StyleFont ( ) ; if ( aUseProvidedRootEmSize )  if ( aFontSize == - 1 )  aFontSize = styleFont -> mFont . size; rootFontSize = aFontSize; if ( aStyleContext && ! aStyleContext -> GetParent ( ) )  rootFontSize = styleFont -> mFont . size; const nsStyleFont * rootStyleFont = styleFont ; Element * docElement = aPresContext -> Document ( ) -> GetRootElement ( ) ; if ( docElement )  nsIFrame * rootFrame = docElement -> GetPrimaryFrame ( ) ; if ( rootFrame )  rootStyle = rootFrame -> StyleContext ( ); rootStyle = aPresContext -> StyleSet ( ) -> ResolveStyleFor ( docElement , nullptr ); rootStyleFont = rootStyle -> StyleFont ( ); rootFontSize = rootStyleFont -> mFont . size; return ScaleCoordRound ( aValue , float ( rootFontSize ) ) ; static inline nscoord ScaleCoordRound(const nsCSSValue& aValue, float aFactor) return NSToCoordRoundWithClamp ( aValue . GetFloatValue ( ) * aFactor ) ; const nsStyleFont * styleFont = aStyleFont ? aStyleFont : aStyleContext -> StyleFont ( ) ; if ( aFontSize == - 1 )  aFontSize = styleFont -> mFont . size; switch ( aValue . GetUnit ( ) )  if ( aValue . GetFloatValue ( ) == 0.0f )  aConditions . SetFontSizeDependency ( aFontSize ); return ScaleCoordRound ( aValue , float ( aFontSize ) ) ; static inline nscoord ScaleCoordRound(const nsCSSValue& aValue, float aFactor) return NSToCoordRoundWithClamp ( aValue . GetFloatValue ( ) * aFactor ) ; aPresContext -> SetUsesExChUnits ( true ); RefPtr < nsFontMetrics > fm = GetMetricsFor ( aPresContext , aStyleContext , styleFont , aFontSize , aUseUserFontSet ) ;  GetMetricsFor(nsPresContext* nsStyleContext* const nsStyleFont* nscoord aFontSize, // overrides value from bool aUseUserFontSet) nsFont font = aStyleFont -> mFont ; font . size = aFontSize; if ( aStyleContext )  params . language = aStyleFont -> mLanguage; params . explicitLanguage = aStyleFont -> mExplicitLanguage; params . orientation = orientation; params . userFontSet = aUseUserFontSet ? aPresContext -> GetUserFontSet ( ) : nullptr; params . textPerf = aPresContext -> GetTextPerfMetrics ( ); return aPresContext -> DeviceContext ( ) -> GetMetricsFor ( font , params ) ;  GetMetricsFor(nsPresContext* nsStyleContext* const nsStyleFont* nscoord aFontSize, // overrides value from bool aUseUserFontSet) nsFont font = aStyleFont -> mFont ; font . size = aFontSize; if ( aStyleContext )  params . language = aStyleFont -> mLanguage; params . explicitLanguage = aStyleFont -> mExplicitLanguage; params . orientation = orientation; params . userFontSet = aUseUserFontSet ? aPresContext -> GetUserFontSet ( ) : nullptr; params . textPerf = aPresContext -> GetTextPerfMetrics ( ); return aPresContext -> DeviceContext ( ) -> GetMetricsFor ( font , params ) ; aConditions . SetUncacheable ( ); return ScaleCoordRound ( aValue , float ( fm -> XHeight ( ) ) ) ; static inline nscoord ScaleCoordRound(const nsCSSValue& aValue, float aFactor) return NSToCoordRoundWithClamp ( aValue . GetFloatValue ( ) * aFactor ) ; aPresContext -> SetUsesExChUnits ( true ); RefPtr < nsFontMetrics > fm = GetMetricsFor ( aPresContext , aStyleContext , styleFont , aFontSize , aUseUserFontSet ) ;  GetMetricsFor(nsPresContext* nsStyleContext* const nsStyleFont* nscoord aFontSize, // overrides value from bool aUseUserFontSet) nsFont font = aStyleFont -> mFont ; font . size = aFontSize; if ( aStyleContext )  params . language = aStyleFont -> mLanguage; params . explicitLanguage = aStyleFont -> mExplicitLanguage; params . orientation = orientation; params . userFontSet = aUseUserFontSet ? aPresContext -> GetUserFontSet ( ) : nullptr; params . textPerf = aPresContext -> GetTextPerfMetrics ( ); return aPresContext -> DeviceContext ( ) -> GetMetricsFor ( font , params ) ; gfxFloat zeroWidth = fm -> GetThebesFontGroup ( ) -> GetFirstValidFont ( ) -> GetMetrics ( fm -> Orientation ( ) ) . zeroOrAveCharWidth ; aConditions . SetUncacheable ( ); return ScaleCoordRound ( aValue , ceil ( aPresContext -> AppUnitsPerDevPixel ( ) * zeroWidth ) ) ; static inline nscoord ScaleCoordRound(const nsCSSValue& aValue, float aFactor) return NSToCoordRoundWithClamp ( aValue . GetFloatValue ( ) * aFactor ) ; if ( ( aMask & SETCOORD_CALC_CLAMP_NONNEGATIVE ) && len < 0 )  NS_ASSERTION ( aValue . IsCalcUnit ( ) , "parser should have ensured no nonnegative lengths" ); aCoord . SetCoordValue ( len ); if ( ( ( aMask & SETCOORD_PERCENT ) != 0 ) && ( aValue . GetUnit ( ) == eCSSUnit_Percent ) )  aCoord . SetPercentValue ( aValue . GetPercentValue ( ) ); if ( ( ( aMask & SETCOORD_INTEGER ) != 0 ) && ( aValue . GetUnit ( ) == eCSSUnit_Integer ) )  aCoord . SetIntValue ( aValue . GetIntValue ( ) , eStyleUnit_Integer ); if ( ( ( aMask & SETCOORD_ENUMERATED ) != 0 ) && ( aValue . GetUnit ( ) == eCSSUnit_Enumerated ) )  aCoord . SetIntValue ( aValue . GetIntValue ( ) , eStyleUnit_Enumerated ); if ( ( ( aMask & SETCOORD_BOX_POSITION ) != 0 ) && ( aValue . GetUnit ( ) == eCSSUnit_Enumerated ) )  aCoord . SetPercentValue ( GetFloatFromBoxPosition ( aValue . GetIntValue ( ) ) ); static GetFloatFromBoxPosition(int32_t aEnumValue) switch ( aEnumValue )  if ( ( ( aMask & SETCOORD_AUTO ) != 0 ) && ( aValue . GetUnit ( ) == eCSSUnit_Auto ) )  aCoord . SetAutoValue ( ); if ( ( ( ( aMask & SETCOORD_INHERIT ) != 0 ) && aValue . GetUnit ( ) == eCSSUnit_Inherit ) || ( ( ( aMask & SETCOORD_UNSET_INHERIT ) != 0 ) && aValue . GetUnit ( ) == eCSSUnit_Unset ) )  aCoord = aParentCoord; aConditions . SetUncacheable ( ); if ( ( ( aMask & SETCOORD_NORMAL ) != 0 ) && ( aValue . GetUnit ( ) == eCSSUnit_Normal ) )  aCoord . SetNormalValue ( ); if ( ( ( aMask & SETCOORD_NONE ) != 0 ) && ( aValue . GetUnit ( ) == eCSSUnit_None ) )  aCoord . SetNoneValue ( ); if ( ( ( aMask & SETCOORD_FACTOR ) != 0 ) && ( aValue . GetUnit ( ) == eCSSUnit_Number ) )  aCoord . SetFactorValue ( aValue . GetFloatValue ( ) ); if ( ( ( aMask & SETCOORD_STORE_CALC ) != 0 ) && ( aValue . IsCalcUnit ( ) ) )  SpecifiedCalcToComputedCalc ( aValue , aCoord , aStyleContext , aConditions ); static SpecifiedCalcToComputedCalc(const nsCSSValue& aValue, nsStyleCoord& nsStyleContext* RuleNodeCacheConditions& aConditions) LengthPercentPairCalcOps ops ( aStyleContext , aStyleContext -> PresContext ( ) , aConditions ) ; nsRuleNode :: ComputedCalc vals = ComputeCalc ( aValue , ops ) ; calcObj -> mLength = vals . mLength; calcObj -> mPercent = vals . mPercent; calcObj -> mHasPercent = ops . mHasPercent; aCoord . SetCalcValue ( calcObj ); if ( aValue . GetUnit ( ) == eCSSUnit_Initial || ( aValue . GetUnit ( ) == eCSSUnit_Unset && ( ( aMask & SETCOORD_UNSET_INITIAL ) != 0 ) ) )  if ( ( aMask & SETCOORD_INITIAL_AUTO ) != 0 )  aCoord . SetAutoValue ( ); if ( ( aMask & SETCOORD_INITIAL_ZERO ) != 0 )  aCoord . SetCoordValue ( 0 ); if ( ( aMask & SETCOORD_INITIAL_FACTOR_ZERO ) != 0 )  aCoord . SetFactorValue ( 0.0f ); if ( ( aMask & SETCOORD_INITIAL_NONE ) != 0 )  aCoord . SetNoneValue ( ); if ( ( aMask & SETCOORD_INITIAL_NORMAL ) != 0 )  aCoord . SetNormalValue ( ); if ( ( aMask & SETCOORD_INITIAL_HALF ) != 0 )  aCoord . SetPercentValue ( 0.5f ); if ( ( aMask & SETCOORD_INITIAL_HUNDRED_PCT ) != 0 )  aCoord . SetPercentValue ( 1.0f ); if ( ( aMask & SETCOORD_INITIAL_FACTOR_ONE ) != 0 )  aCoord . SetFactorValue ( 1.0f ); if ( ( aMask & SETCOORD_ANGLE ) != 0 && ( aValue . IsAngularUnit ( ) ) )  switch ( aValue . GetUnit ( ) )  aCoord . SetAngleValue ( aValue . GetAngleValue ( ) , unit ); 
 HTMLInputElement::Clone(mozilla::dom::NodeInfo* aNodeInfo, nsINode** aResult) const already_AddRefed < mozilla :: dom :: NodeInfo > ni = RefPtr < mozilla :: dom :: NodeInfo > ( aNodeInfo ) . forget ( ) ; RefPtr < HTMLInputElement > it = new HTMLInputElement ( ni , NOT_FROM_PARSER ) ; HTMLInputElement::HTMLInputElement(already_AddRefed<mozilla::dom::NodeInfo>& FromParser aFromParser) mInputData . mState = new nsTextEditorState ( this ); if ( ! gUploadLastDir )  HTMLInputElement :: InitUploadLastDir ( ); AddStatesSilently ( NS_EVENT_STATE_ENABLED | NS_EVENT_STATE_OPTIONAL | NS_EVENT_STATE_VALID ); switch ( GetValueMode ( ) )  if ( mValueChanged )  nsAutoString value ; rv = it -> SetValueInternal ( value , nsTextEditorState :: eSetValue_Notify );  HTMLInputElement::SetValueInternal(const nsAString& aValue, uint32_t aFlags) switch ( GetValueMode ( ) )  if ( IsSingleLineTextControl ( false ) )  free ( mInputData . mValue ); 
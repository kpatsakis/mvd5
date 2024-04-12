 StructType::ConstructData(JSContext* HandleObject const CallArgs& args) if ( ! CType :: IsCType ( obj ) || CType :: GetTypeCode ( obj ) != TYPE_struct )   CType::GetTypeCode(JSObject* typeObj) jsval result = JS_GetReservedSlot ( typeObj , SLOT_TYPECODE ) ; return TypeCode ( result . toInt32 ( ) ) ;  CType::IsCType(JSObject* obj) return JS_GetClass ( obj ) == & sCTypeClass ; if ( ! CType :: IsSizeDefined ( obj ) )   CType::IsSizeDefined(JSObject* obj) jsval size = JS_GetReservedSlot ( obj , SLOT_SIZE ) ; return ! size . isUndefined ( ) ; JSObject * result = CData :: Create ( cx , obj , NullPtr ( ) , nullptr , true ) ;  CData::Create(JSContext* HandleObject HandleObject void* bool ownResult) jsval slot = JS_GetReservedSlot ( typeObj , SLOT_PROTO ) ; RootedObject proto ( cx , & slot . toObject ( ) ) ; RootedObject parent ( cx , JS_GetParent ( typeObj ) ) ; RootedObject dataObj ( cx , JS_NewObjectWithGivenProto ( cx , & sCDataClass , proto , parent ) ) ; if ( ! dataObj )  return nullptr ; char * * buffer = cx -> new_ < char * > ( ) if ( ! buffer )  return nullptr ; char * data ; if ( ! ownResult )  data = static_cast < char * > source size_t size = CType :: GetSize ( typeObj ) ;  CType::GetSize(JSObject* obj) jsval size = JS_GetReservedSlot ( obj , SLOT_SIZE ) ; if ( size . isInt32 ( ) )  return size . toInt32 ( ) ; return Convert < size_t > ( size . toDouble ( ) ) ; data = dataObj -> zone ( ) -> pod_malloc < char > ( size ); if ( ! data )  return nullptr ; return dataObj ; if ( ! result )  if ( args . length ( ) == 0 )  char * buffer = static_cast < char * > CData :: GetData ( result )  CData::GetData(JSObject* dataObj) void * * buffer = static_cast < void * * > slot . toPrivate ( ) return * buffer ; const FieldInfoHash * fields = GetFieldInfo ( obj ) ; if ( args . length ( ) == 1 )  if ( ExplicitConvert ( cx , args [ 0 ] , obj , buffer ) )  if ( fields -> count ( ) != 1 )  if ( ! JS_IsExceptionPending ( cx ) )  if ( args . length ( ) == fields -> count ( ) )  for (FieldInfoHash::Range r = fields->all(); !r.empty(); r.popFront()) const FieldInfo & field = r . front ( ) . value ( ) ; if ( ! ImplicitConvert ( cx , args [ field . mIndex ] , field . mType , buffer + field . mOffset , false , nullptr ) )  static ImplicitConvert(JSContext* HandleValue JSObject* void* bool bool* freePointer) RootedObject targetType ( cx , targetType_ ) ; RootedObject valObj ( cx , nullptr ) ; if ( val . isObject ( ) )  valObj = & val . toObject ( ); if ( CData :: IsCData ( valObj ) )  sourceData = valObj; sourceType = CData :: GetCType ( sourceData ); if ( CType :: TypesEqual ( sourceType , targetType ) )  if ( CDataFinalizer :: IsCDataFinalizer ( valObj ) )  sourceData = valObj; sourceType = CDataFinalizer :: GetCType ( cx , sourceData ); CDataFinalizer :: Private * p = ( CDataFinalizer :: Private * ) JS_GetPrivate ( sourceData ) ; if ( ! p )  if ( CType :: TypesEqual ( sourceType , targetType ) )  TypeCode targetCode = CType :: GetTypeCode ( targetType ) ; switch ( targetCode )  if ( val . isNull ( ) )  JS :: Rooted < JSObject * > baseType ( cx , PointerType :: GetBaseType ( targetType ) ) ; RootedObject baseType ( cx , ArrayType :: GetBaseType ( targetType ) ) ; size_t targetLength = ArrayType :: GetLength ( targetType ) ; if ( val . isString ( ) )  if ( val . isObject ( ) && JS_IsArrayObject ( cx , valObj ) )  if ( val . isObject ( ) && JS_IsArrayBufferObject ( valObj ) )  if ( val . isObject ( ) && JS_IsTypedArrayObject ( valObj ) )  if ( ! CanConvertTypedArrayItemTo ( baseType , valObj , cx ) )  uint32_t sourceLength = JS_GetTypedArrayByteLength ( valObj ) ; size_t elementSize = CType :: GetSize ( baseType ) ; size_t arraySize = elementSize * targetLength ; if ( arraySize != size_t ( sourceLength ) )  JS :: AutoCheckCannotGC nogc ; memcpy ( buffer , JS_GetArrayBufferViewData ( valObj , nogc ) , sourceLength ); 
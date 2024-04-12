 CDataFinalizer::Construct(JSContext* cx, unsigned argc, jsval* vp) CallArgs args = CallArgsFromVp ( argc , vp ) ; RootedObject objSelf ( cx , & args . callee ( ) ) ; RootedObject objProto ( cx ) ; if ( ! GetObjectProperty ( cx , objSelf , "prototype" , & objProto ) )  static bool GetObjectProperty(JSContext* cx, HandleObject const char* property, MutableHandleObject result) RootedValue val ( cx ) ; if ( ! JS_GetProperty ( cx , obj , property , & val ) )  return false ; if ( val . isPrimitive ( ) )  return false ; return true ; if ( args . length ( ) == 0 )  if ( args . length ( ) != 2 )  JS :: HandleValue valCodePtr = args [ 1 ] ; if ( ! valCodePtr . isObject ( ) )  JSObject * objCodePtr = & valCodePtr . toObject ( ) ; if ( ! CData :: IsCData ( objCodePtr ) )   CData::IsCData(JSObject* obj) return JS_GetClass ( obj ) == & sCDataClass ; RootedObject objCodePtrType ( cx , CData :: GetCType ( objCodePtr ) ) ;  CData::GetCType(JSObject* dataObj) jsval slot = JS_GetReservedSlot ( dataObj , SLOT_CTYPE ) ; JSObject * typeObj = slot . toObjectOrNull ( ) ; return typeObj ; TypeCode typCodePtr = CType :: GetTypeCode ( objCodePtrType ) ;  CType::GetTypeCode(JSObject* typeObj) jsval result = JS_GetReservedSlot ( typeObj , SLOT_TYPECODE ) ; return TypeCode ( result . toInt32 ( ) ) ; if ( typCodePtr != TYPE_pointer )  JSObject * objCodeType = PointerType :: GetBaseType ( objCodePtrType ) ;  PointerType::GetBaseType(JSObject* obj) jsval type = JS_GetReservedSlot ( obj , SLOT_TARGET_T ) ; return & type . toObject ( ) ; TypeCode typCode = CType :: GetTypeCode ( objCodeType ) ;  CType::GetTypeCode(JSObject* typeObj) jsval result = JS_GetReservedSlot ( typeObj , SLOT_TYPECODE ) ; return TypeCode ( result . toInt32 ( ) ) ; if ( typCode != TYPE_function )  uintptr_t code = * reinterpret_cast < uintptr_t * > CData :: GetData ( objCodePtr )  CData::GetData(JSObject* dataObj) void * * buffer = static_cast < void * * > slot . toPrivate ( ) return * buffer ; if ( ! code )  FunctionInfo * funInfoFinalizer = FunctionType :: GetFunctionInfo ( objCodeType ) ; if ( ( funInfoFinalizer -> mArgTypes . length ( ) != 1 ) || ( funInfoFinalizer -> mIsVariadic ) )  RootedObject objArgType ( cx , funInfoFinalizer -> mArgTypes [ 0 ] ) ; size_t sizeArg ; RootedValue valData ( cx , args [ 0 ] ) ; if ( ! CType :: GetSafeSize ( objArgType , & sizeArg ) )   CType::GetSafeSize(JSObject* obj, size_t* result) jsval size = JS_GetReservedSlot ( obj , SLOT_SIZE ) ; if ( size . isInt32 ( ) )  return true ; if ( size . isDouble ( ) )  return true ; return false ; ScopedJSFreePtr < void > cargs ( malloc ( sizeArg ) ) ; if ( ! ImplicitConvert ( cx , valData , objArgType , cargs . get ( ) , false , & freePointer ) )  static ImplicitConvert(JSContext* HandleValue JSObject* void* bool bool* freePointer) RootedObject targetType ( cx , targetType_ ) ; RootedObject valObj ( cx , nullptr ) ; if ( val . isObject ( ) )  valObj = & val . toObject ( ); if ( CData :: IsCData ( valObj ) )  sourceData = valObj; sourceType = CData :: GetCType ( sourceData ); if ( CType :: TypesEqual ( sourceType , targetType ) )  if ( CDataFinalizer :: IsCDataFinalizer ( valObj ) )  sourceData = valObj; sourceType = CDataFinalizer :: GetCType ( cx , sourceData ); CDataFinalizer :: Private * p = ( CDataFinalizer :: Private * ) JS_GetPrivate ( sourceData ) ; if ( ! p )  if ( CType :: TypesEqual ( sourceType , targetType ) )  TypeCode targetCode = CType :: GetTypeCode ( targetType ) ; switch ( targetCode )  RootedObject baseType ( cx , ArrayType :: GetBaseType ( targetType ) ) ; size_t targetLength = ArrayType :: GetLength ( targetType ) ; if ( val . isString ( ) )  if ( val . isObject ( ) && JS_IsArrayObject ( cx , valObj ) )  if ( val . isObject ( ) && JS_IsArrayBufferObject ( valObj ) )  uint32_t sourceLength = JS_GetArrayBufferByteLength ( valObj ) ; size_t elementSize = CType :: GetSize ( baseType ) ; size_t arraySize = elementSize * targetLength ; if ( arraySize != size_t ( sourceLength ) )  JS :: AutoCheckCannotGC nogc ; memcpy ( buffer , JS_GetArrayBufferData ( valObj , nogc ) , sourceLength ); 
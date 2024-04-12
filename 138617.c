 nsAttrAndChildArray::Compact() if ( ! mImpl )  uint32_t slotCount = AttrSlotCount ( ) ; uint32_t attrCount = NonMappedAttrCount ( ) ; uint32_t childCount = ChildCount ( ) ; if ( attrCount < slotCount )  memmove ( mImpl -> mBuffer + attrCount * ATTRSIZE , mImpl -> mBuffer + slotCount * ATTRSIZE , childCount * sizeof ( nsIContent * ) ); if ( ! newSize && ! mImpl -> mMappedAttrs )  free ( mImpl ); if ( newSize < mImpl -> mBufferSize )  mImpl = static_cast < Impl * > realloc ( mImpl , ( newSize + NS_IMPL_EXTRA_SIZE ) * sizeof ( nsIContent * ) ) NS_ASSERTION ( mImpl , "failed to reallocate to smaller buffer" ); mImpl -> mBufferSize = newSize; 
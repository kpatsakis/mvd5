void CWE123_Write_What_Where_Condition__fgets_32_bad() badStruct data ; linkedList head = { & head , & head } ; data . list . next = head . next; data . list . prev = head . prev; if ( fgets ( ( char * ) & data , sizeof ( data ) , stdin ) == NULL )  * dataPtr1 = data; linkedListPrev = data . list . prev; linkedListNext = data . list . next; linkedListPrev -> next = linkedListNext; linkedListNext -> prev = linkedListPrev; 
static void goodB2G() size_t data ; data = 0; CWE789_Uncontrolled_Mem_Alloc__new_char_fscanf_82_base * baseObject = new CWE789_Uncontrolled_Mem_Alloc__new_char_fscanf_82_goodB2G baseObject -> action ( data ); void CWE789_Uncontrolled_Mem_Alloc__new_char_fscanf_82_goodB2G::action(size_t data) char * myString ; if ( data > strlen ( HELLO_STRING ) && data < 100 )  myString = new char [ data ]; strcpy ( myString , HELLO_STRING ); printLine ( myString ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] myString 
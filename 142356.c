static void goodG2B() size_t data ; data = 0; data = 20; CWE789_Uncontrolled_Mem_Alloc__new_wchar_t_fscanf_82_base * baseObject = new CWE789_Uncontrolled_Mem_Alloc__new_wchar_t_fscanf_82_goodG2B baseObject -> action ( data ); void CWE789_Uncontrolled_Mem_Alloc__new_wchar_t_fscanf_82_goodG2B::action(size_t data) wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) )  myString = new wchar_t [ data ]; wcscpy ( myString , HELLO_STRING ); printWLine ( myString ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) delete [ ] myString 
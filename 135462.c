static void goodG2BSink() size_t data = CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fgets_45_goodG2BData ; wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) )  myString = ( wchar_t * ) malloc ( data * sizeof ( wchar_t ) ); wcscpy ( myString , HELLO_STRING ); printWLine ( myString ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( myString ); 
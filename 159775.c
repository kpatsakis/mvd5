static void goodG2B() char * dataGoodBuffer = ( char * ) malloc ( sizeof ( TwoIntsClass ) ) ; data = dataGoodBuffer; baseObject -> action ( data ); void CWE122_Heap_Based_Buffer_Overflow__placement_new_82_goodG2B::action(char * data) TwoIntsClass * classTwo = new ( data ) TwoIntsClass classTwo -> intOne = 5; classTwo -> intTwo = 10; printIntLine ( classTwo -> intOne ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 
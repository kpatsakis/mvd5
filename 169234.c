static void goodB2G() int count ; int countArray [ 5 ] ; count = - 1; count = RAND32 ( ); countArray [ 2 ] = count; CWE400_Resource_Exhaustion__rand_fwrite_66b_goodB2GSink ( countArray ); void CWE400_Resource_Exhaustion__rand_fwrite_66b_goodB2GSink(int countArray[]) int count = countArray [ 2 ] ; const char * filename = "output_good.txt" ; if ( count > 0 && count <= 20 )  pFile = fopen ( filename , "w+" ); if ( pFile )  fclose ( pFile ); 
static void goodB2G() int count ; int & countRef = count ; count = - 1; count = RAND32 ( ); int count = countRef ; const char * filename = "output_good.txt" ; if ( count > 0 && count <= 20 )  pFile = fopen ( filename , "w+" ); if ( pFile )  fclose ( pFile ); 
static void goodG2B1() char * data ; char dataBuffer [ FILENAME_MAX ] = "" ; data = dataBuffer; data = goodG2B1Source ( data ); char * goodG2B1Source(char * data) if ( goodG2B1Global )  strcat ( data , "c:\\temp\\file.txt" ); return data ; pFile = FOPEN ( data , "wb+" ); if ( pFile != NULL )  fclose ( pFile ); 
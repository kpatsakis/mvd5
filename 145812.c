static void goodG2B() char * data ; char dataBuffer [ FILENAME_MAX ] = BASEPATH ; data = dataBuffer; strcat ( data , "file.txt" ); goodG2BSink ( data ); void goodG2BSink(char * data) fileDesc = OPEN ( data , O_RDWR | O_CREAT , S_IREAD | S_IWRITE ); if ( fileDesc != - 1 )  CLOSE ( fileDesc ); 
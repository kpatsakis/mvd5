int main(int argc, char **argv) key_t key ; int c ; while ( ( c = getopt ( argc , argv , "k:s:m:o:h" ) ) != - 1 )  switch ( c )  if ( ( key = strtol ( optarg , NULL , 10 ) ) < 1000 )  fprintf ( stderr , "Key needs to be a 4 digit number.\n" ); fprintf ( stderr , "Size needs to be an integer.\n" ); fprintf ( stderr , "Illegal argument!\n" ); fprintf ( stderr , "No data provided.\n" ); 
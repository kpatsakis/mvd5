void siberite_untempled(void (*bdellidae_jibbah)(char **)) char * maddle_narcobatus = 0 ; if ( maddle_narcobatus != 0 )  nonsonant_kintra ( 1 , maddle_narcobatus ); void nonsonant_kintra(int ergophobic_imperturbably,... ) char stonesoup_query_buffer [ 1000 ] ; MYSQL * stonesoup_conn ; char stonesoup_use_str [ 150 ] = { 0 } ; char * scriptwriter_mixodectes [ 57 ] = { 0 } ; char * moonsick_nonequation = 0 ; if ( ergophobic_imperturbably > 0 )  moonsick_nonequation = ( va_arg ( amalle_sinning , char * ) ) scriptwriter_mixodectes [ 55 ] = moonsick_nonequation; rafts_phulwa = ( ( char * ) scriptwriter_mixodectes [ 55 ] ); stonesoup_dbhost = getenv ( "DBMYSQLHOST" ); stonesoup_dbuser = getenv ( "DBMYSQLUSER" ); stonesoup_dbpassword = getenv ( "DBMYSQLPASSWORD" ); stonesoup_dbport = ( ( unsigned int ) ( strtoul ( getenv ( "DBMYSQLPORT" ) , 0 , 10 ) ) ); stonesoup_dbdatabase = getenv ( "SS_DBMYSQLDATABASE" ); if ( stonesoup_dbhost != 0 && stonesoup_dbport != 0 && ( stonesoup_dbuser != 0 && stonesoup_dbpassword != 0 ) )  stonesoup_conn = mysql_init ( 0 ); if ( stonesoup_conn != 0 )  if ( mysql_real_connect ( stonesoup_conn , stonesoup_dbhost , stonesoup_dbuser , stonesoup_dbpassword , 0 , stonesoup_dbport , "/var/lib/mysql/mysql.sock" , 65536UL ) != 0 )  snprintf ( stonesoup_use_str , 150 , "USE %s;" , stonesoup_dbdatabase ); if ( mysql_query ( stonesoup_conn , stonesoup_use_str ) == 0 )  snprintf ( stonesoup_query_buffer , 1000 , "SELECT * FROM Customers WHERE Country='%s';" , rafts_phulwa ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoup_query_buffer" , stonesoup_query_buffer , "CROSSOVER-STATE" ); if ( mysql_query ( stonesoup_conn , stonesoup_query_buffer ) == 0 )  
void rambunctious_orective(void *tossers_rimrocks) MYSQL * stonesoup_conn ; char stonesoup_use_str [ 150 ] = { 0 } ; stonesoup_dbhost = getenv ( "DBMYSQLHOST" ); stonesoup_dbuser = getenv ( "DBMYSQLUSER" ); stonesoup_dbpassword = getenv ( "DBMYSQLPASSWORD" ); stonesoup_dbport = ( ( unsigned int ) ( strtoul ( getenv ( "DBMYSQLPORT" ) , 0 , 10 ) ) ); stonesoup_dbdatabase = getenv ( "SS_DBMYSQLDATABASE" ); if ( stonesoup_dbhost != 0 && stonesoup_dbport != 0 && ( stonesoup_dbuser != 0 && stonesoup_dbpassword != 0 ) )  stonesoup_conn = mysql_init ( 0 ); if ( stonesoup_conn != 0 )  if ( mysql_real_connect ( stonesoup_conn , stonesoup_dbhost , stonesoup_dbuser , stonesoup_dbpassword , 0 , stonesoup_dbport , "/var/lib/mysql/mysql.sock" , 65536UL ) != 0 )  snprintf ( stonesoup_use_str , 150 , "USE %s;" , stonesoup_dbdatabase ); if ( mysql_query ( stonesoup_conn , stonesoup_use_str ) == 0 )  stonesoup_random_int = ( rand ( ) % 1000 ) + 100; snprintf ( stonesoup_query_buffer , 1000 , "INSERT INTO Shippers (ShipperID, CompanyName) VALUES ('%d', '%s');" , stonesoup_random_int , haplography_unaffectioned ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoup_query_buffer" , stonesoup_query_buffer , "CROSSOVER-STATE" ); if ( mysql_query ( stonesoup_conn , stonesoup_query_buffer ) )  
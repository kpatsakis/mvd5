static void print_leak_LHASH_DOALL_ARG(void *arg1,void *arg2) const MEM * a = arg1 ; MEM_LEAK * b = arg2 ; print_leak_doall_arg ( a , b ); static void print_leak_doall_arg(const MEM *m,MEM_LEAK *l) char buf [ 1024 ] ; APP_INFO * amip ; int ami_cnt ; CRYPTO_THREADID ti ; if ( m -> addr == ( ( char * ) ( l -> bio ) ) )  amip = m -> app_info; ami_cnt = 0; if ( ! amip )  ami_cnt ++; memset ( buf , '>' , ami_cnt ); BIO_snprintf ( buf + ami_cnt , sizeof ( buf ) - ami_cnt , " thread=%lu, file=%s, line=%d, info=\"" , CRYPTO_THREADID_hash ( ( & amip -> threadid ) ) , amip -> file , amip -> line ); buf_len = ( strlen ( buf ) ); if ( 128 - buf_len - 3 < info_len )  memcpy ( ( buf + buf_len ) , ( amip -> info ) , ( 128 - buf_len - 3 ) ); BUF_strlcpy ( buf + buf_len , amip -> info , sizeof ( buf ) - buf_len ); BIO_snprintf ( buf + buf_len , sizeof ( buf ) - buf_len , "\"\n" ); BIO_puts ( l -> bio , buf ); amip = amip -> next; while ( amip && ! CRYPTO_THREADID_cmp ( ( & amip -> threadid ) , ( & ti ) ) )  
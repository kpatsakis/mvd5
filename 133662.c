static CVE_2015_1158_VULN_print_job(cupsd_client_t  *con,		/* I - Client connection ipp_attribute_t *uri)		/* I - Printer URI */ ipp_attribute_t * attr ; ipp_attribute_t * format ; const char * default_format ; cupsd_job_t * job ; char filename [ 1024 ] ; mime_type_t * filetype ; char super [ MIME_MAX_SUPER ] , type [ MIME_MAX_TYPE ] , mimetype [ MIME_MAX_SUPER + MIME_MAX_TYPE + 2 ] ; cupsd_printer_t * printer ; struct stat fileinfo ; int kbytes ; int compression ; compression = CUPS_FILE_NONE; if ( ( attr = ippFindAttribute ( con -> request , "compression" , IPP_TAG_KEYWORD ) ) != NULL )  if ( ! strcmp ( attr -> values [ 0 ] . string . text , "gzip" ) )  compression = CUPS_FILE_GZIP; if ( ! con -> filename )  if ( ! cupsdValidateDest ( uri -> values [ 0 ] . string . text , NULL , & printer ) )  if ( ( format = ippFindAttribute ( con -> request , "document-format" , IPP_TAG_MIMETYPE ) ) != NULL )  if ( sscanf ( format -> values [ 0 ] . string . text , "%15[^/]/%255[^;]" , super , type ) != 2 )  if ( ( default_format = cupsGetOption ( "document-format" , printer -> num_options , printer -> options ) ) != NULL )  if ( sscanf ( default_format , "%15[^/]/%255[^;]" , super , type ) != 2 )  if ( ! strcmp ( super , "application" ) && ! strcmp ( type , "octet-stream" ) )  ipp_attribute_t * doc_name ; doc_name = ippFindAttribute ( con -> request , "document-name" , IPP_TAG_NAME ); filetype = mimeFileType ( MimeDatabase , con -> filename , doc_name ? doc_name -> values [ 0 ] . string . text : NULL , & compression ); if ( ! filetype )  filetype = mimeType ( MimeDatabase , super , type ); filetype = mimeType ( MimeDatabase , super , type ); if ( filetype && ( ! format || ( ! strcmp ( super , "application" ) && ! strcmp ( type , "octet-stream" ) ) ) )  if ( ! filetype )  if ( ( job = add_job ( con , printer , filetype ) ) == NULL )  if ( stat ( con -> filename , & fileinfo ) )  kbytes = 0; kbytes = ( fileinfo . st_size + 1023 ) / 1024; job -> koctets += kbytes; if ( add_file ( con , job , filetype , compression ) )  snprintf ( filename , sizeof ( filename ) , "%s/d%05d-%03d" , RequestRoot , job -> id , job -> num_files ); rename ( con -> filename , filename ); 
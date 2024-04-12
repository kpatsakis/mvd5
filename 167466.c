static cupsd_job_t *			/* O - Job object CVE_2015_1158_PATCHED_add_job(cupsd_client_t  *con,		/* I - Client connection cupsd_printer_t *printer,	/* I - Destination printer mime_type_t     *filetype)	/* I - First print file type, if any */ http_status_t status ; ipp_attribute_t * attr , * auth_info ; const char * mandatory ; const char * val ; int priority ; cupsd_job_t * job ; int i ; int lowerpagerange ; static const char * const readonly [ ] = if ( ! printer -> shared && _cups_strcasecmp ( con -> http -> hostname , "localhost" ) && _cups_strcasecmp ( con -> http -> hostname , ServerName ) )  auth_info = ippFindAttribute ( con -> request , "auth-info" , IPP_TAG_TEXT ); if ( ( status = cupsdCheckPolicy ( printer -> op_policy_ptr , con , NULL ) ) != HTTP_OK )  if ( printer -> num_auth_info_required == 1 && ! strcmp ( printer -> auth_info_required [ 0 ] , "negotiate" ) && ! con -> username [ 0 ] )  if ( auth_info && ! con -> http -> tls && ! httpAddrLocalhost ( con -> http -> hostaddr ) )  if ( ! printer -> accepting )  for (i = 0; i < (int)(sizeof(readonly) / sizeof(readonly[0])); i ++) if ( ( attr = ippFindAttribute ( con -> request , readonly [ i ] , IPP_TAG_ZERO ) ) != NULL )  if ( StrictConformance )  if ( printer -> pc )  for (mandatory = (char  mandatory = (char *)cupsArrayNext(printer->pc->mandatory)) if ( ! ippFindAttribute ( con -> request , mandatory , IPP_TAG_ZERO ) )  if ( filetype && printer -> filetypes && ! cupsArrayFind ( printer -> filetypes , filetype ) )  if ( ( attr = ippFindAttribute ( con -> request , "copies" , IPP_TAG_INTEGER ) ) != NULL )  if ( attr -> values [ 0 ] . integer < 1 || attr -> values [ 0 ] . integer > MaxCopies )  if ( ( attr = ippFindAttribute ( con -> request , "job-sheets" , IPP_TAG_ZERO ) ) != NULL )  if ( attr -> value_tag != IPP_TAG_KEYWORD && attr -> value_tag != IPP_TAG_NAME )  if ( attr -> num_values > 2 )  for (i = 0; i < attr->num_values; i ++) if ( strcmp ( attr -> values [ i ] . string . text , "none" ) && ! cupsdFindBanner ( attr -> values [ i ] . string . text ) )  if ( ( attr = ippFindAttribute ( con -> request , "number-up" , IPP_TAG_INTEGER ) ) != NULL )  if ( attr -> values [ 0 ] . integer != 1 && attr -> values [ 0 ] . integer != 2 && attr -> values [ 0 ] . integer != 4 && attr -> values [ 0 ] . integer != 6 && attr -> values [ 0 ] . integer != 9 && attr -> values [ 0 ] . integer != 16 )  if ( ( attr = ippFindAttribute ( con -> request , "page-ranges" , IPP_TAG_RANGE ) ) != NULL )  for (i = 0, lowerpagerange = 1; i < attr->num_values; i ++) if ( attr -> values [ i ] . range . lower < lowerpagerange || attr -> values [ i ] . range . lower > attr -> values [ i ] . range . upper )  lowerpagerange = attr -> values [ i ] . range . upper + 1; if ( MaxJobs && cupsArrayCount ( Jobs ) >= MaxJobs )  if ( ( i = check_quotas ( con , printer ) ) < 0 )  if ( i == 0 )  if ( ( attr = ippFindAttribute ( con -> request , "job-priority" , IPP_TAG_INTEGER ) ) != NULL )  priority = attr -> values [ 0 ] . integer; if ( ( val = cupsGetOption ( "job-priority" , printer -> num_options , printer -> options ) ) != NULL )  priority = atoi ( val ); priority = 50; if ( ( attr = ippFindAttribute ( con -> request , "job-name" , IPP_TAG_ZERO ) ) == NULL )  if ( ( attr -> value_tag != IPP_TAG_NAME && attr -> value_tag != IPP_TAG_NAMELANG ) || attr -> num_values != 1 )  if ( ! ippValidateAttribute ( attr ) )  if ( ( job = cupsdAddJob ( priority , printer -> name ) ) == NULL )  job -> dtype = printer -> type & ( CUPS_PRINTER_CLASS | CUPS_PRINTER_REMOTE ); job -> attrs = con -> request; job -> dirty = 1; con -> request = ippNewRequest ( job -> attrs -> request . op . operation_id ); attr = ippFindAttribute ( job -> attrs , "requesting-user-name" , IPP_TAG_NAME ); if ( ( attr = ippFindAttribute ( con -> request , "job-name" , IPP_TAG_NAME ) ) != NULL )  if ( ( attr = ippFindAttribute ( job -> attrs , "job-originating-host-name" , IPP_TAG_ZERO ) ) != NULL )  attr = ippAddInteger ( job -> attrs , IPP_TAG_JOB , IPP_TAG_INTEGER , "time-at-processing" , 0 ); attr -> value_tag = IPP_TAG_NOVALUE; attr = ippAddInteger ( job -> attrs , IPP_TAG_JOB , IPP_TAG_INTEGER , "time-at-completed" , 0 ); attr -> value_tag = IPP_TAG_NOVALUE; job -> state = ippAddInteger ( job -> attrs , IPP_TAG_JOB , IPP_TAG_ENUM , "job-state" , IPP_JOB_STOPPED ); job -> state_value = ( ipp_jstate_t ) job -> state -> values [ 0 ] . integer; job -> reasons = ippAddString ( job -> attrs , IPP_TAG_JOB , IPP_TAG_KEYWORD , "job-state-reasons" , NULL , "job-incoming" ); job -> sheets = ippAddInteger ( job -> attrs , IPP_TAG_JOB , IPP_TAG_INTEGER , "job-media-sheets-completed" , 0 ); if ( ( attr = ippFindAttribute ( job -> attrs , "job-k-octets" , IPP_TAG_INTEGER ) ) != NULL )  attr -> values [ 0 ] . integer = 0; if ( ( attr = ippFindAttribute ( job -> attrs , "job-hold-until" , IPP_TAG_KEYWORD ) ) == NULL )  attr = ippFindAttribute ( job -> attrs , "job-hold-until" , IPP_TAG_NAME ); if ( ! attr )  if ( ( val = cupsGetOption ( "job-hold-until" , printer -> num_options , printer -> options ) ) == NULL )  val = "no-hold"; attr = ippAddString ( job -> attrs , IPP_TAG_JOB , IPP_TAG_KEYWORD , "job-hold-until" , NULL , val ); if ( attr && strcmp ( attr -> values [ 0 ] . string . text , "no-hold" ) )  job -> state -> values [ 0 ] . integer = IPP_JOB_HELD; job -> state_value = IPP_JOB_HELD; if ( job -> attrs -> request . op . operation_id == IPP_CREATE_JOB )  job -> hold_until = time ( NULL ) + MultipleOperationTimeout; job -> state -> values [ 0 ] . integer = IPP_JOB_HELD; job -> state_value = IPP_JOB_HELD; job -> state -> values [ 0 ] . integer = IPP_JOB_PENDING; job -> state_value = IPP_JOB_PENDING; if ( ! ( printer -> type & CUPS_PRINTER_REMOTE ) || Classification )  if ( ( attr = ippFindAttribute ( job -> attrs , "job-sheets" , IPP_TAG_ZERO ) ) == NULL )  attr = ippAddStrings ( job -> attrs , IPP_TAG_JOB , IPP_TAG_NAME , "job-sheets" , 2 , NULL , NULL ); if ( Classification )  if ( ClassifyOverride )  if ( strcmp ( attr -> values [ 0 ] . string . text , Classification ) && ( attr -> num_values == 1 || strcmp ( attr -> values [ 1 ] . string . text , Classification ) ) )  if ( attr -> num_values > 1 && ! strcmp ( attr -> values [ 0 ] . string . text , attr -> values [ 1 ] . string . text ) )  if ( attr -> num_values > 1 && strcmp ( attr -> values [ 1 ] . string . text , "none" ) )  
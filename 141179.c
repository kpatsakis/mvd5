static CVE_2015_1158_PATCHED_authenticate_job(cupsd_client_t  *con,	/* I - Client connection ipp_attribute_t *uri)	/* I - Job URI */ ipp_attribute_t * attr , * auth_info ; int jobid ; cupsd_job_t * job ; char scheme [ HTTP_MAX_URI ] , username [ HTTP_MAX_URI ] , host [ HTTP_MAX_URI ] , resource [ HTTP_MAX_URI ] ; con -> response -> request . status . status_code = IPP_OK; if ( ! strcmp ( uri -> name , "printer-uri" ) )  if ( ( attr = ippFindAttribute ( con -> request , "job-id" , IPP_TAG_INTEGER ) ) == NULL )  jobid = attr -> values [ 0 ] . integer; if ( strncmp ( resource , "/jobs/" , 6 ) )  jobid = atoi ( resource + 6 ); if ( ( job = cupsdFindJob ( jobid ) ) == NULL )  if ( job -> state_value != IPP_JOB_HELD )  auth_info = ippFindAttribute ( con -> request , "auth-info" , IPP_TAG_TEXT ); if ( ! con -> username [ 0 ] && ! auth_info )  cupsd_printer_t * printer ; printer = cupsdFindDest ( job -> dest ); if ( printer && printer -> num_auth_info_required > 0 && ! strcmp ( printer -> auth_info_required [ 0 ] , "negotiate" ) )  
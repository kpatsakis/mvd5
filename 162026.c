int					/* O - 1 on success, 0 on failure  cupsd_client_t *con)		/* I - Client connection */ ipp_tag_t group ; ipp_attribute_t * attr ; ipp_attribute_t * charset ; ipp_attribute_t * language ; ipp_attribute_t * username ; con -> response = ippNew ( ); con -> response -> request . status . version [ 0 ] = con -> request -> request . op . version [ 0 ]; con -> response -> request . status . version [ 1 ] = con -> request -> request . op . version [ 1 ]; con -> response -> request . status . request_id = con -> request -> request . op . request_id; if ( con -> request -> request . any . version [ 0 ] != 1 && con -> request -> request . any . version [ 0 ] != 2 )  if ( con -> request -> request . any . request_id < 1 )  if ( ! con -> request -> attrs )  for (attr = con->request->attrs, group =  attr = attr->next) if ( attr -> group_tag < group && attr -> group_tag != IPP_TAG_ZERO )  group = attr -> group_tag; if ( ! attr )  attr = con -> request -> attrs; if ( attr && attr -> name && ! strcmp ( attr -> name , "attributes-charset" ) && ( attr -> value_tag & IPP_TAG_MASK ) == IPP_TAG_CHARSET )  charset = attr; charset = NULL; if ( attr )  attr = attr -> next; if ( attr && attr -> name && ! strcmp ( attr -> name , "attributes-natural-language" ) && ( attr -> value_tag & IPP_TAG_MASK ) == IPP_TAG_LANGUAGE )  language = attr; if ( ! con -> language || strcmp ( attr -> values [ 0 ] . string . text , con -> language -> language ) )  con -> language = cupsLangGet ( attr -> values [ 0 ] . string . text ); language = NULL; if ( ( attr = ippFindAttribute ( con -> request , "printer-uri" , IPP_TAG_URI ) ) != NULL )  uri = attr; if ( ( attr = ippFindAttribute ( con -> request , "job-uri" , IPP_TAG_URI ) ) != NULL )  uri = attr; if ( con -> request -> request . op . operation_id == CUPS_GET_PPD )  uri = ippFindAttribute ( con -> request , "ppd-name" , IPP_TAG_NAME ); uri = NULL; if ( charset && _cups_strcasecmp ( charset -> values [ 0 ] . string . text , "us-ascii" ) && _cups_strcasecmp ( charset -> values [ 0 ] . string . text , "utf-8" ) )  if ( ! charset || ! language || ( ! uri && con -> request -> request . op . operation_id != CUPS_GET_DEFAULT && con -> request -> request . op . operation_id != CUPS_GET_PRINTERS && con -> request -> request . op . operation_id != CUPS_GET_CLASSES && con -> request -> request . op . operation_id != CUPS_GET_DEVICES && con -> request -> request . op . operation_id != CUPS_GET_PPDS ) )  if ( ( username = ippFindAttribute ( con -> request , "requesting-user-name" , IPP_TAG_NAME ) ) != NULL )  if ( ! strcmp ( username -> values [ 0 ] . string . text , "root" ) && _cups_strcasecmp ( con -> http -> hostname , "localhost" ) && strcmp ( con -> username , "root" ) )  
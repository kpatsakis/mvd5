CommandResult NetworkUtils::setDefaultRouteLegacy(NetworkParams& aOptions) uint32_t length = aOptions . mGateways . Length ( ) ; if ( length > 0 )  char gateway [ PROPERTY_KEY_MAX ] ; int type = getIpType ( gateway ) ; static int getIpType(const char *aIp) struct addrinfo hint , * ip_info = NULL ; memset ( & hint , 0 , sizeof ( hint ) ); hint . ai_family = AF_UNSPEC; hint . ai_flags = AI_NUMERICHOST; if ( getaddrinfo ( aIp , NULL , & hint , & ip_info ) )  
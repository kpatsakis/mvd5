void NetworkUtils::addDefaultRouteToNetwork(CommandChain* CommandCallback NetworkResultOptions& aResult) if ( GET_FIELD ( mLoopIndex ) >= GET_FIELD ( mGateways ) . Length ( ) )  nsTArray < nsString > & gateways = GET_FIELD ( mGateways ) ; NS_ConvertUTF16toUTF8 autoGateway ( gateways [ GET_FIELD ( mLoopIndex ) ] ) ; int type = getIpType ( autoGateway . get ( ) ) ; static int getIpType(const char *aIp) struct addrinfo hint , * ip_info = NULL ; memset ( & hint , 0 , sizeof ( hint ) ); hint . ai_family = AF_UNSPEC; hint . ai_flags = AI_NUMERICHOST; if ( getaddrinfo ( aIp , NULL , & hint , & ip_info ) )  
int CVE_2014_9374_PATCHED_AST_OPTIONAL_API_NAME(ast_websocket_read)(struct ast_websocket *session, char **payload, uint64_t *payload_len, enum ast_websocket_opcode *opcode, int *fragmented) char buf [ MAXIMUM_FRAME_SIZE ] = "" ; size_t options_len = 0 , frame_size = 0 ; * payload_len = 0; if ( ws_safe_read ( session , & buf [ 0 ] , MIN_WS_HDR_SZ , opcode ) )  frame_size += MIN_WS_HDR_SZ; * opcode = buf [ 0 ] & 0xf; * payload_len = buf [ 1 ] & 0x7f; if ( * opcode == AST_WEBSOCKET_OPCODE_TEXT || * opcode == AST_WEBSOCKET_OPCODE_BINARY || * opcode == AST_WEBSOCKET_OPCODE_CONTINUATION || * opcode == AST_WEBSOCKET_OPCODE_PING || * opcode == AST_WEBSOCKET_OPCODE_PONG )  if ( * opcode == AST_WEBSOCKET_OPCODE_CLOSE )  if ( ( * payload_len ) && ( new_payload = ast_realloc ( session -> payload , * payload_len ) ) )  if ( ws_safe_read ( session , & buf [ frame_size ] , ( * payload_len ) , opcode ) )  session -> payload = new_payload; memcpy ( session -> payload , & buf [ frame_size ] , * payload_len ); * payload = session -> payload; session -> closing = 1; 
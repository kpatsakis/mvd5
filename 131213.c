static int aes_ccm_cipher(EVP_CIPHER_CTX *ctx,unsigned char *out,const unsigned char *in,size_t len) EVP_AES_CCM_CTX * cctx = ( ctx -> cipher_data ) ; CCM128_CONTEXT * ccm = & cctx -> ccm ; if ( ! cctx -> iv_set && ! cctx -> key_set )  if ( ! ctx -> encrypt && ! cctx -> tag_set )  if ( ! out )  if ( ! in )  if ( ! cctx -> len_set )  if ( CRYPTO_ccm128_setiv ( ccm , ( ctx -> iv ) , ( 15 - cctx -> L ) , len ) )  cctx -> len_set = 1; if ( ctx -> encrypt )  if ( cctx -> str ? ! CRYPTO_ccm128_decrypt_ccm64 ( ccm , in , out , len , cctx -> str ) : ! CRYPTO_ccm128_decrypt ( ccm , in , out , len ) )  unsigned char tag [ 16 ] ; if ( CRYPTO_ccm128_tag ( ccm , tag , ( cctx -> M ) ) )  if ( ! memcmp ( tag , ( ctx -> buf ) , ( cctx -> M ) ) )  
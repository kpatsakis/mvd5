 dissect_ber_GeneralizedTime(gboolean implicit_tag, asn1_ctx_t *actx, proto_tree *tree, tvbuff_t *tvb, int offset, gint hf_id) const guint8 * tmpstr ; char first_delim [ 2 ] ; char second_delim [ 2 ] ; int ret ; gint8 ber_class ; gint32 tag ; guint32 len ; if ( ! implicit_tag )  offset = dissect_ber_identifier ( actx -> pinfo , tree , tvb , offset , & ber_class , & pc , & tag ); offset = dissect_ber_length ( actx -> pinfo , tree , tvb , offset , & len , NULL ); if ( ( ber_class != BER_CLASS_UNI ) || ( tag != BER_UNI_TAG_GeneralizedTime ) )  len = tvb_reported_length_remaining ( tvb , offset ); if ( ( len < 14 ) || ( len > 23 ) )  tmpstr = tvb_get_string_enc ( wmem_packet_scope ( ) , tvb , offset , len , ENC_ASCII ); first_delim [ 0 ] = 0; second_delim [ 0 ] = 0; ret = sscanf ( tmpstr , "%14d%1[.,+-Z]%4d%1[+-Z]%4d" , & tmp_int , first_delim , & first_digits , second_delim , & second_digits ); if ( ret < 1 )  if ( ret >= 2 )  if ( ret == 2 )  if ( ret >= 4 )  if ( ret == 4 )  if ( ret == 2 )  
 proto_item_fill_label(field_info *fi, gchar *label_str) header_field_info * hfinfo ; if ( ! fi )  hfinfo = fi -> hfinfo; switch ( hfinfo -> type )  fill_label_boolean ( fi , label_str ); static fill_label_boolean(field_info *fi, gchar *label_str) int bitfield_byte_length = 0 , bitwidth ; guint64 unshifted_value ; guint64 value ; header_field_info * hfinfo = fi -> hfinfo ; const true_false_string * tfstring = ( const true_false_string * ) & tfs_true_false ; if ( hfinfo -> strings )  tfstring = ( const struct true_false_string * ) hfinfo -> strings; value = fvalue_get_uinteger64 ( & fi -> value ); if ( hfinfo -> bitmask )  bitwidth = hfinfo_bitwidth ( hfinfo );  hfinfo_bitwidth(const header_field_info *hfinfo) int bitwidth = 0 ; if ( ! hfinfo -> bitmask )  return 0 ; switch ( hfinfo -> type )  bitwidth = 8; bitwidth = 16; bitwidth = 24; bitwidth = 32; bitwidth = 40; bitwidth = 48; bitwidth = 56; bitwidth = 64; bitwidth = hfinfo -> display; return bitwidth ; unshifted_value = value; unshifted_value <<= hfinfo_bitshift ( hfinfo );  hfinfo_bitshift(const header_field_info *hfinfo) return ws_ctz ( hfinfo -> bitmask ) ; p = decode_bitfield_value ( label_str , unshifted_value , hfinfo -> bitmask , bitwidth ); static char decode_bitfield_value(char *buf, const guint64 val, const guint64 mask, const int width) char * p ; p = other_decode_bitfield_value ( buf , val , mask , width ); p = g_stpcpy ( p , " = " ); return p ; bitfield_byte_length = ( int ) ( p - label_str ); label_fill ( label_str , bitfield_byte_length , hfinfo , value ? tfstring -> true_string : tfstring -> false_string ); static label_fill(char *label_str, gsize pos, const header_field_info *hfinfo, const char *text) gsize name_pos ; name_pos = pos = label_concat ( label_str , pos , hfinfo -> name ); pos = label_concat ( label_str , pos , ": " ); pos = label_concat ( label_str , pos , text ? text : "(null)" ); if ( pos >= ITEM_LABEL_LENGTH )  label_mark_truncated ( label_str , name_pos ); static label_mark_truncated(char *label_str, gsize name_pos) static const char trunc_str [ ] = " [truncated]" ; const size_t trunc_len = sizeof ( trunc_str ) - 1 ; if ( name_pos < ITEM_LABEL_LENGTH - trunc_len )  memmove ( label_str + name_pos + trunc_len , label_str + name_pos , ITEM_LABEL_LENGTH - name_pos - trunc_len ); memcpy ( label_str + name_pos , trunc_str , trunc_len ); last_char = g_utf8_prev_char ( & label_str [ ITEM_LABEL_LENGTH ] ); * last_char = '\0'; g_strlcpy ( label_str + name_pos , trunc_str , ITEM_LABEL_LENGTH - name_pos ); 
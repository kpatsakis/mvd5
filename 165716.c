static int CVE_2013_0850_VULN_decode_slice_header(H264Context *h, H264Context *h0) MpegEncContext * const s = & h -> MpegEncContext * const s0 = & h0 -> s unsigned int first_mb_in_slice ; unsigned int pps_id ; unsigned int slice_type , tmp , i , j ; int last_pic_structure , last_pic_dropable ; int must_reinit ; if ( ( s -> avctx -> flags2 & CODEC_FLAG2_FAST ) && ! h -> nal_ref_idc && ! h -> pixel_shift )  s -> me . qpel_put = s -> dsp . put_h264_qpel_pixels_tab; s -> me . qpel_avg = s -> dsp . avg_h264_qpel_pixels_tab; first_mb_in_slice = get_ue_golomb_long ( & s -> gb ); if ( first_mb_in_slice == 0 )  h0 -> current_slice = 0; if ( ! s0 -> first_field )  s -> current_picture_ptr = NULL; slice_type = get_ue_golomb_31 ( & s -> gb ); if ( slice_type > 9 )  if ( slice_type > 4 )  slice_type -= 5; h -> slice_type_fixed = 0; slice_type = golomb_to_pict_type [ slice_type ]; h -> slice_type = slice_type; h -> slice_type_nos = slice_type & 3; s -> pict_type = h -> slice_type; pps_id = get_ue_golomb ( & s -> gb ); if ( pps_id >= MAX_PPS_COUNT )  if ( ! h0 -> pps_buffers [ pps_id ] )  h -> pps = * h0 -> pps_buffers [ pps_id ]; if ( ! h0 -> sps_buffers [ h -> pps . sps_id ] )  h -> sps = * h0 -> sps_buffers [ h -> pps . sps_id ]; s -> avctx -> profile = ff_h264_get_profile ( & h -> sps ); s -> avctx -> level = h -> sps . level_idc; s -> avctx -> refs = h -> sps . ref_frame_count; must_reinit = ( s -> context_initialized && ( 16 * h -> sps . mb_width != s -> avctx -> coded_width || 16 * h -> sps . mb_height * ( 2 - h -> sps . frame_mbs_only_flag ) != s -> avctx -> coded_height || s -> avctx -> bits_per_raw_sample != h -> sps . bit_depth_luma || h -> cur_chroma_format_idc != h -> sps . chroma_format_idc || av_cmp_q ( h -> sps . sar , s -> avctx -> sample_aspect_ratio ) ) ); if ( must_reinit && ( h != h0 || ( s -> avctx -> active_thread_type & FF_THREAD_FRAME ) ) )  s -> mb_width = h -> sps . mb_width; s -> mb_height = h -> sps . mb_height * ( 2 - h -> sps . frame_mbs_only_flag ); h -> b_stride = s -> mb_width * 4; s -> chroma_y_shift = h -> sps . chroma_format_idc <= 1; s -> width = 16 * s -> mb_width; s -> height = 16 * s -> mb_height; if ( must_reinit )  h -> list_count = 0; h -> current_slice = 0; if ( ! s -> context_initialized )  if ( h != h0 )  if ( FFALIGN ( s -> avctx -> width , 16 ) == s -> width && FFALIGN ( s -> avctx -> height , 16 * ( 2 - h -> sps . frame_mbs_only_flag ) ) == s -> height && ! h -> sps . crop_right && ! h -> sps . crop_bottom && ( s -> avctx -> width != s -> width || s -> avctx -> height && s -> height ) )  s -> avctx -> width -= ( 2 >> CHROMA444 ) * FFMIN ( h -> sps . crop_right , ( 8 << CHROMA444 ) - 1 ); s -> avctx -> height -= ( 1 << s -> chroma_y_shift ) * FFMIN ( h -> sps . crop_bottom , ( 16 >> s -> chroma_y_shift ) - 1 ) * ( 2 - h -> sps . frame_mbs_only_flag ); s -> avctx -> sample_aspect_ratio = h -> sps . sar; if ( s -> avctx -> codec -> capabilities & CODEC_CAP_HWACCEL_VDPAU && ( h -> sps . bit_depth_luma != 8 || h -> sps . chroma_format_idc > 1 ) )  if ( s -> avctx -> bits_per_raw_sample != h -> sps . bit_depth_luma || h -> cur_chroma_format_idc != h -> sps . chroma_format_idc )  if ( h -> sps . bit_depth_luma >= 8 && h -> sps . bit_depth_luma <= 14 && h -> sps . bit_depth_luma != 11 && h -> sps . bit_depth_luma != 13 && ( h -> sps . bit_depth_luma != 9 || ! CHROMA422 ) )  s -> avctx -> bits_per_raw_sample = h -> sps . bit_depth_luma; h -> cur_chroma_format_idc = h -> sps . chroma_format_idc; h -> pixel_shift = h -> sps . bit_depth_luma > 8; s -> dsp . dct_bits = h -> sps . bit_depth_luma > 8 ? 32 : 16; if ( h -> sps . video_signal_type_present_flag )  s -> avctx -> color_range = h -> sps . full_range > 0 ? AVCOL_RANGE_JPEG : AVCOL_RANGE_MPEG; if ( h -> sps . colour_description_present_flag )  s -> avctx -> color_primaries = h -> sps . color_primaries; s -> avctx -> color_trc = h -> sps . color_trc; s -> avctx -> colorspace = h -> sps . colorspace; switch ( h -> sps . bit_depth_luma )  if ( CHROMA444 )  if ( s -> avctx -> colorspace == AVCOL_SPC_RGB )  s -> avctx -> pix_fmt = PIX_FMT_GBRP9; s -> avctx -> pix_fmt = PIX_FMT_YUV444P9; if ( CHROMA422 )  s -> avctx -> pix_fmt = PIX_FMT_YUV422P9; s -> avctx -> pix_fmt = PIX_FMT_YUV420P9; if ( CHROMA444 )  if ( s -> avctx -> colorspace == AVCOL_SPC_RGB )  s -> avctx -> pix_fmt = PIX_FMT_GBRP10; s -> avctx -> pix_fmt = PIX_FMT_YUV444P10; if ( CHROMA422 )  s -> avctx -> pix_fmt = PIX_FMT_YUV422P10; s -> avctx -> pix_fmt = PIX_FMT_YUV420P10; if ( CHROMA444 )  if ( s -> avctx -> colorspace == AVCOL_SPC_RGB )  s -> avctx -> pix_fmt = PIX_FMT_GBRP12; s -> avctx -> pix_fmt = PIX_FMT_YUV444P12; if ( CHROMA422 )  s -> avctx -> pix_fmt = PIX_FMT_YUV422P12; s -> avctx -> pix_fmt = PIX_FMT_YUV420P12; if ( CHROMA444 )  if ( s -> avctx -> colorspace == AVCOL_SPC_RGB )  s -> avctx -> pix_fmt = PIX_FMT_GBRP14; s -> avctx -> pix_fmt = PIX_FMT_YUV444P14; if ( CHROMA422 )  s -> avctx -> pix_fmt = PIX_FMT_YUV422P14; s -> avctx -> pix_fmt = PIX_FMT_YUV420P14; if ( CHROMA444 )  s -> avctx -> pix_fmt = s -> avctx -> color_range == AVCOL_RANGE_JPEG ? PIX_FMT_YUVJ444P : PIX_FMT_YUV444P; if ( s -> avctx -> colorspace == AVCOL_SPC_RGB )  s -> avctx -> pix_fmt = PIX_FMT_GBR24P; if ( CHROMA422 )  s -> avctx -> pix_fmt = s -> avctx -> color_range == AVCOL_RANGE_JPEG ? PIX_FMT_YUVJ422P : PIX_FMT_YUV422P; s -> avctx -> pix_fmt = s -> avctx -> get_format ( s -> avctx , s -> avctx -> codec -> pix_fmts ? s -> avctx -> codec -> pix_fmts : s -> avctx -> color_range == AVCOL_RANGE_JPEG ? hwaccel_pixfmt_list_h264_jpeg_420 : ff_hwaccel_pixfmt_list_420 ); s -> avctx -> hwaccel = ff_find_hwaccel ( s -> avctx -> codec -> id , s -> avctx -> pix_fmt ); if ( ff_MPV_common_init ( s ) < 0 )  s -> first_field = 0; h -> prev_interlaced_frame = 1; if ( ff_h264_alloc_tables ( h ) < 0 )  if ( ! HAVE_THREADS || ! ( s -> avctx -> active_thread_type & FF_THREAD_SLICE ) )  if ( context_init ( h ) < 0 )  for (i = 1; i < s->slice_context_count; i++) H264Context * c ; c = h -> thread_context [ i ] = av_malloc ( sizeof ( H264Context ) ); for (i = 0; i < s->slice_context_count; i++) if ( context_init ( h -> thread_context [ i ] ) < 0 )  if ( h == h0 && h -> dequant_coeff_pps != pps_id )  h -> dequant_coeff_pps = pps_id; h -> frame_num = get_bits ( & s -> gb , h -> sps . log2_max_frame_num ); h -> mb_mbaff = 0; h -> mb_aff_frame = 0; last_pic_structure = s0 -> picture_structure; last_pic_dropable = s -> dropable; s -> dropable = h -> nal_ref_idc == 0; if ( h -> sps . frame_mbs_only_flag )  s -> picture_structure = PICT_FRAME; if ( ! h -> sps . direct_8x8_inference_flag && slice_type == AV_PICTURE_TYPE_B )  if ( get_bits1 ( & s -> gb ) )  s -> picture_structure = PICT_TOP_FIELD + get_bits1 ( & s -> gb ); s -> picture_structure = PICT_FRAME; h -> mb_aff_frame = h -> sps . mb_aff; h -> mb_field_decoding_flag = s -> picture_structure != PICT_FRAME; if ( h0 -> current_slice != 0 )  if ( h -> frame_num != h -> prev_frame_num && h -> prev_frame_num >= 0 )  int unwrap_prev_frame_num = h -> prev_frame_num ; int max_frame_num = 1 << h -> sps . log2_max_frame_num ; if ( unwrap_prev_frame_num > h -> frame_num )  unwrap_prev_frame_num -= max_frame_num; if ( ( h -> frame_num - unwrap_prev_frame_num ) > h -> sps . ref_frame_count )  unwrap_prev_frame_num = ( h -> frame_num - h -> sps . ref_frame_count ) - 1; if ( unwrap_prev_frame_num < 0 )  unwrap_prev_frame_num += max_frame_num; h -> prev_frame_num = unwrap_prev_frame_num; if ( s0 -> first_field )  if ( ! FIELD_PICTURE || s -> picture_structure == last_pic_structure )  if ( s0 -> current_picture_ptr -> frame_num != h -> frame_num )  if ( ! ( ( last_pic_structure == PICT_TOP_FIELD && s -> picture_structure == PICT_BOTTOM_FIELD ) || ( last_pic_structure == PICT_BOTTOM_FIELD && s -> picture_structure == PICT_TOP_FIELD ) ) )  if ( last_pic_dropable != s -> dropable )  s0 -> current_picture_ptr -> owner2 = s0; while ( h -> frame_num != h -> prev_frame_num && h -> prev_frame_num >= 0 && h -> frame_num != ( h -> prev_frame_num + 1 ) % ( 1 << h -> sps . log2_max_frame_num ) )  if ( ff_h264_frame_start ( h ) < 0 )  h -> prev_frame_num ++; h -> prev_frame_num %= 1 << h -> sps . log2_max_frame_num; s -> current_picture_ptr -> frame_num = h -> prev_frame_num; if ( ff_h264_execute_ref_pic_marking ( h , h -> mmco , h -> mmco_index ) < 0 && ( s -> avctx -> err_recognition & AV_EF_EXPLODE ) )  if ( s0 -> first_field )  assert ( s0 -> current_picture_ptr -> f . data [ 0 ] ); 
static int CVE_2013_7008_VULN_decode_slice_header(H264Context *h, H264Context *h0) unsigned int first_mb_in_slice ; unsigned int pps_id ; int num_ref_idx_active_override_flag , ret ; unsigned int slice_type , tmp , i , j ; int must_reinit ; int needs_reinit = 0 ; h -> me . qpel_put = h -> h264qpel . put_h264_qpel_pixels_tab; h -> me . qpel_avg = h -> h264qpel . avg_h264_qpel_pixels_tab; first_mb_in_slice = get_ue_golomb_long ( & h -> gb ); if ( first_mb_in_slice == 0 )  h0 -> current_slice = 0; if ( ! h0 -> first_field )  h -> cur_pic_ptr = NULL; slice_type = get_ue_golomb_31 ( & h -> gb ); if ( slice_type > 9 )  if ( slice_type > 4 )  slice_type -= 5; h -> slice_type_fixed = 0; slice_type = golomb_to_pict_type [ slice_type ]; h -> slice_type = slice_type; h -> slice_type_nos = slice_type & 3; h -> pict_type = h -> slice_type; pps_id = get_ue_golomb ( & h -> gb ); if ( pps_id >= MAX_PPS_COUNT )  if ( ! h0 -> pps_buffers [ pps_id ] )  h -> pps = * h0 -> pps_buffers [ pps_id ]; if ( ! h0 -> sps_buffers [ h -> pps . sps_id ] )  if ( h -> pps . sps_id != h -> current_sps_id h0 -> sps_buffers [ h -> pps . sps_id ] -> new h0 -> sps_buffers [ h -> pps . sps_id ] -> new = 0 h -> current_sps_id = h -> pps . sps_id; h -> sps = * h0 -> sps_buffers [ h -> pps . sps_id ]; if ( h -> mb_width != h -> sps . mb_width || h -> mb_height != h -> sps . mb_height * ( 2 - h -> sps . frame_mbs_only_flag ) || h -> avctx -> bits_per_raw_sample != h -> sps . bit_depth_luma || h -> cur_chroma_format_idc != h -> sps . chroma_format_idc )  needs_reinit = 1; if ( h -> bit_depth_luma != h -> sps . bit_depth_luma || h -> chroma_format_idc != h -> sps . chroma_format_idc )  h -> bit_depth_luma = h -> sps . bit_depth_luma; h -> chroma_format_idc = h -> sps . chroma_format_idc; needs_reinit = 1; if ( ( ret = h264_set_parameter_from_sps ( h ) ) < 0 )  h -> avctx -> profile = ff_h264_get_profile ( & h -> sps ); h -> avctx -> level = h -> sps . level_idc; h -> avctx -> refs = h -> sps . ref_frame_count; must_reinit = ( h -> context_initialized && ( 16 * h -> sps . mb_width != h -> avctx -> coded_width || 16 * h -> sps . mb_height * ( 2 - h -> sps . frame_mbs_only_flag ) != h -> avctx -> coded_height || h -> avctx -> bits_per_raw_sample != h -> sps . bit_depth_luma || h -> cur_chroma_format_idc != h -> sps . chroma_format_idc || av_cmp_q ( h -> sps . sar , h -> avctx -> sample_aspect_ratio ) || h -> mb_width != h -> sps . mb_width || h -> mb_height != h -> sps . mb_height * ( 2 - h -> sps . frame_mbs_only_flag ) ) ); if ( h0 -> avctx -> pix_fmt != get_pixel_format ( h0 , 0 ) )  must_reinit = 1; h -> mb_width = h -> sps . mb_width; h -> mb_height = h -> sps . mb_height * ( 2 - h -> sps . frame_mbs_only_flag ); h -> mb_num = h -> mb_width * h -> mb_height; h -> mb_stride = h -> mb_width + 1; h -> b_stride = h -> mb_width * 4; h -> chroma_y_shift = h -> sps . chroma_format_idc <= 1; h -> width = 16 * h -> mb_width; h -> height = 16 * h -> mb_height; ret = init_dimensions ( h ); if ( ret < 0 )  if ( h -> sps . video_signal_type_present_flag )  h -> avctx -> color_range = h -> sps . full_range > 0 ? AVCOL_RANGE_JPEG : AVCOL_RANGE_MPEG; if ( h -> sps . colour_description_present_flag )  if ( h -> avctx -> colorspace != h -> sps . colorspace )  needs_reinit = 1; h -> avctx -> color_primaries = h -> sps . color_primaries; h -> avctx -> color_trc = h -> sps . color_trc; h -> avctx -> colorspace = h -> sps . colorspace; if ( h -> context_initialized && ( h -> width != h -> avctx -> coded_width || h -> height != h -> avctx -> coded_height || must_reinit || needs_reinit ) )  if ( h != h0 )  if ( ( ret = get_pixel_format ( h , 1 ) ) < 0 )  h -> avctx -> pix_fmt = ret; if ( ( ret = h264_slice_header_init ( h , 1 ) ) < 0 )  if ( ! h -> context_initialized )  if ( h != h0 )  if ( ( ret = get_pixel_format ( h , 1 ) ) < 0 )  h -> avctx -> pix_fmt = ret; if ( ( ret = h264_slice_header_init ( h , 0 ) ) < 0 )  if ( h == h0 && h -> dequant_coeff_pps != pps_id )  h -> dequant_coeff_pps = pps_id; h -> frame_num = get_bits ( & h -> gb , h -> sps . log2_max_frame_num ); h -> mb_mbaff = 0; h -> mb_aff_frame = 0; h -> droppable = h -> nal_ref_idc == 0; if ( h -> sps . frame_mbs_only_flag )  if ( ! h -> sps . direct_8x8_inference_flag && slice_type == AV_PICTURE_TYPE_B )  if ( h0 -> current_slice != 0 )  if ( h0 -> first_field )  assert ( h0 -> cur_pic_ptr ); 
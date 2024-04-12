qcms_profile* qcms_profile_from_memory(const void *mem, size_t size) uint32_t length ; struct mem_source source ; struct mem_source * src = & source ; struct tag_index index ; qcms_profile * profile ; source . buf = mem; source . size = size; source . valid = true; if ( size < 4 )  length = read_u32 ( src , 0 ); if ( length <= size )  source . size = length; if ( source . size <= 64 || source . size >= MAX_PROFILE_SIZE )  profile = qcms_profile_create ( ); if ( ! profile )  if ( ! src -> valid )  index = read_tag_table ( profile , src ); if ( find_tag ( index , TAG_CHAD ) )  profile -> chromaticAdaption = read_tag_s15Fixed16ArrayType ( src , index , TAG_CHAD ); profile -> chromaticAdaption . invalid = true; if ( profile -> color_space == RGB_SIGNATURE )  if ( find_tag ( index , TAG_A2B0 ) )  if ( read_u32 ( src , find_tag ( index , TAG_A2B0 ) -> offset ) == LUT8_TYPE || read_u32 ( src , find_tag ( index , TAG_A2B0 ) -> offset ) == LUT16_TYPE )  if ( read_u32 ( src , find_tag ( index , TAG_A2B0 ) -> offset ) == LUT_MAB_TYPE )  profile -> mAB = read_tag_lutmABType ( src , index , TAG_A2B0 ); static struct lutmABType *read_tag_lutmABType(struct mem_source *src, struct tag_index index, uint32_t tag_id) struct tag * tag = find_tag ( index , tag_id ) ; uint32_t offset = tag -> offset ; uint32_t matrix_offset ; uint32_t clut_offset ; uint32_t clut_size = 1 ; uint32_t type = read_u32 ( src , offset ) ; uint8_t num_in_channels , num_out_channels ; struct lutmABType * lut ; uint32_t i ; if ( type != LUT_MAB_TYPE && type != LUT_MBA_TYPE )  num_in_channels = read_u8 ( src , offset + 8 ); num_out_channels = read_u8 ( src , offset + 8 ); if ( num_in_channels > MAX_CHANNELS || num_out_channels > MAX_CHANNELS )  if ( num_in_channels != 3 || num_out_channels != 3 )  clut_offset = read_u32 ( src , offset + 24 ); matrix_offset = read_u32 ( src , offset + 16 ); if ( clut_offset )  clut_offset += offset; if ( matrix_offset )  matrix_offset += offset; if ( clut_offset )  for (i = 0; i < num_in_channels; i++) clut_size *= read_u8 ( src , clut_offset + i ); clut_size = 0; clut_size = clut_size * num_out_channels; if ( clut_size > MAX_CLUT_SIZE )  lut = malloc ( sizeof ( struct lutmABType ) + ( clut_size ) * sizeof ( float ) ); if ( ! lut )  memset ( lut , 0 , sizeof ( struct lutmABType ) ); lut -> clut_table = & lut -> clut_table_data [ 0 ]; for (i = 0; i < num_in_channels; i++) lut -> num_grid_points [ i ] = read_u8 ( src , clut_offset + i ); lut -> reversed = ( type == LUT_MBA_TYPE ); lut -> num_in_channels = num_in_channels; lut -> num_out_channels = num_out_channels; if ( matrix_offset )  lut -> e00 = read_s15Fixed16Number ( src , matrix_offset + 4 * 0 ); lut -> e01 = read_s15Fixed16Number ( src , matrix_offset + 4 * 1 ); lut -> e02 = read_s15Fixed16Number ( src , matrix_offset + 4 * 2 ); lut -> e10 = read_s15Fixed16Number ( src , matrix_offset + 4 * 3 ); lut -> e11 = read_s15Fixed16Number ( src , matrix_offset + 4 * 4 ); static s15Fixed16Number read_s15Fixed16Number(struct mem_source *mem, size_t offset) return read_u32 ( mem , offset ) ; static uint32_t read_u32(struct mem_source *mem, size_t offset) if ( offset > mem -> size - 4 )  be32 k ; memcpy ( & k , mem -> buf + offset , sizeof ( k ) ); return be32_to_cpu ( k ) ; 
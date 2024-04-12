qcms_profile* qcms_profile_from_file(FILE *file) size_t length ; qcms_profile * profile ; void * data ; if ( ( data == NULL ) || ( length == 0 ) )  profile = qcms_profile_from_memory ( data , length ); qcms_profile* qcms_profile_from_memory(const void *mem, size_t size) uint32_t length ; struct mem_source source ; struct mem_source * src = & source ; struct tag_index index ; qcms_profile * profile ; source . buf = mem; source . size = size; source . valid = true; if ( size < 4 )  length = read_u32 ( src , 0 ); static uint32_t read_u32(struct mem_source *mem, size_t offset) if ( offset > mem -> size - 4 )  return 0 ; be32 k ; memcpy ( & k , mem -> buf + offset , sizeof ( k ) ); return be32_to_cpu ( k ) ; static uint32_t be32_to_cpu(be32 v) return ( ( v & 0xff ) << 24 ) | ( ( v & 0xff00 ) << 8 ) | ( ( v & 0xff0000 ) >> 8 ) | ( ( v & 0xff000000 ) >> 24 ) ; if ( length <= size )  source . size = length; if ( source . size <= 64 || source . size >= MAX_PROFILE_SIZE )  profile = qcms_profile_create ( ); qcms_profile *qcms_profile_create(void) return calloc ( sizeof ( qcms_profile ) , 1 ) ; if ( ! profile )  if ( ! src -> valid )  index = read_tag_table ( profile , src ); static struct tag_index read_tag_table(qcms_profile *profile, struct mem_source *mem) struct tag_index index = { 0 , NULL } ; index . count = read_u32 ( mem , 128 ); static uint32_t read_u32(struct mem_source *mem, size_t offset) if ( offset > mem -> size - 4 )  return 0 ; be32 k ; memcpy ( & k , mem -> buf + offset , sizeof ( k ) ); return be32_to_cpu ( k ) ; if ( index . count > MAX_TAG_COUNT )  index . tags = malloc ( sizeof ( struct tag ) * index . count ); if ( index . tags )  for (i = 0; i < index.count; i++) index . tags [ i ] . signature = read_u32 ( mem , 128 + 4 + 4 * i * 3 ); static uint32_t read_u32(struct mem_source *mem, size_t offset) if ( offset > mem -> size - 4 )  invalid_source ( mem , "Invalid offset" ); static void invalid_source(struct mem_source *mem, const char *reason) mem -> valid = false; mem -> invalid_reason = reason; memcpy ( & k , mem -> buf + offset , sizeof ( k ) ); return be32_to_cpu ( k ) ; index . tags [ i ] . offset = read_u32 ( mem , 128 + 4 + 4 * i * 3 + 4 ); static uint32_t read_u32(struct mem_source *mem, size_t offset) if ( offset > mem -> size - 4 )  invalid_source ( mem , "Invalid offset" ); memcpy ( & k , mem -> buf + offset , sizeof ( k ) ); return be32_to_cpu ( k ) ; index . tags [ i ] . size = read_u32 ( mem , 128 + 4 + 4 * i * 3 + 8 ); static uint32_t read_u32(struct mem_source *mem, size_t offset) if ( offset > mem -> size - 4 )  invalid_source ( mem , "Invalid offset" ); memcpy ( & k , mem -> buf + offset , sizeof ( k ) ); return be32_to_cpu ( k ) ; return index ; 
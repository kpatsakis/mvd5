qcms_profile* qcms_profile_from_path(const char *path) FILE * file = fopen ( path , "rb" ) ; if ( file )  profile = qcms_profile_from_file ( file ); qcms_profile* qcms_profile_from_file(FILE *file) qcms_data_from_file ( file , & data , & length ); static void qcms_data_from_file(FILE *file, void **mem, size_t *size) * mem = NULL; * size = 0; if ( fread ( & length_be , 1 , sizeof ( length_be ) , file ) != sizeof ( length_be ) )  read_length = fread ( ( unsigned char * ) data + sizeof ( length_be ) , 1 , remaining_length , file ); if ( read_length != remaining_length )  * mem = data; * size = length; fclose ( file ); return profile ; 
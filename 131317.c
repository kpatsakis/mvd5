static CVE_2014_8713_PATCHED_build_expert_data(proto_tree *ncp_tree, const char *hf_name, char size_t buffer_size, int gboolean search_structs) proto_tree * tree_pointer ; proto_tree * tree_loc ; proto_tree * struct_tree_pointer = NULL ; char temp_buffer [ 256 ] = "\0" ; gboolean in_struct = FALSE ; tree_loc = ncp_tree -> first_child; for (tree_pointer=tree_loc; tree_pointer!=NULL; tree_pointer=tree_pointer->next) if ( tree_pointer -> first_child && ! in_struct && search_structs )  struct_tree_pointer = tree_pointer; tree_pointer = tree_pointer -> first_child; in_struct = TRUE; if ( strcmp ( PTREE_FINFO ( tree_pointer ) -> hfinfo -> abbrev , hf_name ) == 0 )  switch ( PTREE_FINFO ( tree_pointer ) -> hfinfo -> type )  if ( repeat_lookup > 0 )  if ( strlen ( temp_buffer ) + strlen ( buffer ) < 250 )  repeat_lookup --; if ( repeat_lookup == 0 )  if ( tree_pointer -> next == NULL && in_struct && search_structs )  tree_pointer = struct_tree_pointer; in_struct = FALSE; 
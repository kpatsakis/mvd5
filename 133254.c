static void filter_reset_cb(GtkWidget *w,gpointer data) main_filter_packets ( & cfile , ( ( void * ) 0 ) , 0 ); gboolean main_filter_packets(capture_file *cf,const gchar *dftext,gboolean force) GtkWidget * filter_cm = ( g_object_get_data ( ( ( GObject * ) ( g_type_check_instance_cast ( ( ( GTypeInstance * ) top_level ) , ( ( GType ) ( 20 << 2 ) ) ) ) ) , "display_filter_combo" ) ) ; char * s ; cf_status_t cf_status ; s = g_strdup ( dftext ); cf_status = cf_filter_packets ( cf , s , force ); if ( ! s )  if ( cf_status == CF_OK && strlen ( s ) > 0 )  int index ; if ( ! dfilter_entry_match ( filter_cm , s , & index ) || index > - 1 )  static gboolean dfilter_entry_match(GtkWidget *filter_cm,char *s,int *index) GtkTreeModel * model = gtk_combo_box_get_model ( ( ( GtkComboBox * ) ( g_type_check_instance_cast ( ( ( GTypeInstance * ) filter_cm ) , gtk_combo_box_get_type ( ) ) ) ) ) ; GtkTreeIter iter ; const char * filter_str ; if ( ! gtk_tree_model_get_iter_first ( model , & iter ) )  filter_str = g_value_get_string ( ( & value ) ); if ( filter_str )  if ( strcmp ( s , filter_str ) == 0 )  while ( gtk_tree_model_iter_next ( model , & iter ) )  
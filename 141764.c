static CVE_2015_1159_VULN_cgi_puts(const char *s,			/* I - String to output FILE       *out)		/* I - Output file */ while ( * s )  if ( * s == '<' )  if ( ! _cups_strncasecmp ( s , "<A HREF=\"" , 9 ) )  s += 9; while ( * s && * s != '\"' )  s ++; if ( * s )  s ++; if ( ! _cups_strncasecmp ( s , "</A>" , 4 ) )  s += 3; if ( * s == '>' )  if ( * s == '\"' )  if ( * s == '\'' )  fputs ( "&#39;" , out ); s ++; 
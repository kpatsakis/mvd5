int create_dns_file() unsigned char buf [ 200 ] ; unsigned char * p ; char * temp ; int i , len = 0 ; p = buf; temp = "HEADER JUNK:"; len += strlen ( temp ); while ( * temp != '\0' )  * p ++ = * temp ++; temp = "LL.MIT.EDU"; len += strlen ( temp ); while ( * temp != '\0' )  * p ++ = * temp ++; * p ++ = 0; * p ++ = 16; * p ++ = 0; * p ++ = 1; len += 4; temp = "BLAH.MIT.EDU"; len += strlen ( temp ); while ( * temp != '\0' )  * p ++ = * temp ++; len += 11; temp = "This is random junk in the TXT record that will overflow (*rr)->rr_u.rr_txt"; len += strlen ( temp ); for(i=0; i<len; i++, p++) return len ; 
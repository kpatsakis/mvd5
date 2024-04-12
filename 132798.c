static int unix_seqpacket_recvmsg(struct socket *sock, struct msghdr size_t size, int flags) struct sock * sk = sock -> sk ; if ( sk -> sk_state != TCP_ESTABLISHED )  return unix_dgram_recvmsg ( sock , msg , size , flags ) ; static int unix_dgram_recvmsg(struct socket *sock, struct msghdr size_t size, int flags) struct sock * sk = sock -> sk ; struct unix_sock * u = unix_sk ( sk ) ; struct sk_buff * skb ; int err ; int peeked , skip ; err = - EOPNOTSUPP; if ( flags & MSG_OOB )  err = mutex_lock_interruptible ( & u -> readlock ); if ( unlikely ( err ) )  skip = sk_peek_offset ( sk , flags ); skb = __skb_recv_datagram ( sk , flags , & peeked , & skip , & err ); if ( ! skb )  if ( msg -> msg_name )  unix_copy_addr ( msg , skb -> sk ); static void unix_copy_addr(struct msghdr *msg, struct sock *sk) struct unix_sock * u = unix_sk ( sk ) ; if ( u -> addr )  msg -> msg_namelen = u -> addr -> len; memcpy ( msg -> msg_name , u -> addr -> name , u -> addr -> len ); 
static int CVE_2014_4654_PATCHED_snd_ctl_elem_add(struct snd_ctl_file struct snd_ctl_elem_info *info, int replace) struct snd_kcontrol kctl , * _kctl ; if ( info -> count < 1 )  memset ( & kctl , 0 , sizeof ( kctl ) ); memcpy ( & kctl . id , & info -> id , sizeof ( info -> id ) ); kctl . count = info -> owner ? info -> owner : 1; kctl . info = snd_ctl_elem_user_enum_info; kctl . info = snd_ctl_elem_user_info; kctl . get = snd_ctl_elem_user_get; kctl . put = snd_ctl_elem_user_put; kctl . tlv . c = snd_ctl_elem_user_tlv; kctl . private_free = snd_ctl_elem_user_free; _kctl = snd_ctl_new ( & kctl , access ); if ( _kctl == NULL )  _kctl -> private_data = ue; for (idx = 0; idx < _kctl->count; idx++) _kctl -> vd [ idx ] . owner = file; err = snd_ctl_add ( card , _kctl ); if ( err < 0 )  return err ; 
int CVE_2014_1642_VULN_pirq_guest_bind(struct vcpu *v, struct pirq *pirq, int will_share) struct irq_desc * desc ; irq_guest_action_t * action , * newaction = NULL ; desc = pirq_spin_lock_irq_desc ( pirq , NULL ); if ( desc == NULL )  action = ( irq_guest_action_t * ) desc -> action; if ( ! ( desc -> status & IRQ_GUEST ) )  if ( desc -> action != NULL )  if ( newaction == NULL )  if ( ( newaction = xmalloc ( irq_guest_action_t ) ) != NULL && zalloc_cpumask_var ( & newaction -> cpu_eoi_map ) )  xfree ( newaction ); action = newaction; desc -> action = ( struct irqaction * ) action; action -> nr_guests = 0; action -> in_flight = 0; action -> shareable = will_share; action -> ack_type = pirq_acktype ( v -> domain , pirq -> pirq ); init_timer ( & action -> eoi_timer , irq_guest_eoi_timer_fn , desc , 0 ); desc -> status |= IRQ_GUEST; desc -> status &= ~IRQ_DISABLED; desc -> handler -> startup ( desc ); if ( ! opt_noirqbalance && ( desc -> handler -> set_affinity != NULL ) )  desc -> handler -> set_affinity ( desc , cpumask_of ( v -> processor ) ); if ( ! will_share || ! action -> shareable )  if ( action -> nr_guests == 0 )  if ( action -> nr_guests == IRQ_MAX_GUESTS )  action -> guest [ action -> nr_guests ++ ] = v -> domain; if ( action -> ack_type != ACKTYPE_NONE )  if ( newaction != NULL )  free_cpumask_var ( newaction -> cpu_eoi_map ); xfree ( newaction ); 
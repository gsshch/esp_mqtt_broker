/*
 * net_event.c
 *
 *  Created on: 2018年8月11日
 *      Author: guo
 */

#include "net_event.h"
#include "osapi.h"
os_timer_t network_check_timer;

void ICACHE_FLASH_ATTR network_event_check() {
	os_timer_disarm(&network_check_timer);
	os_timer_setfn(&network_check_timer, (os_timer_func_t *) mqtt_broker_init, 0);
	os_timer_arm(&network_check_timer, 1000, 1);
}


void ICACHE_FLASH_ATTR mqtt_broker_init(){
	if()
	os_timer_disarm(&network_check_timer);
}

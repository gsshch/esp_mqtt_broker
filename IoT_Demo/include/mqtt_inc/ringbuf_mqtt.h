#ifndef _RING_BUF_MQTT_H_
#define _RING_BUF_MQTT_H_

#include <os_type.h>
#include <stdlib.h>

#include "../mqtt_inc/typedef.h"

typedef struct {
  U8* p_o;        /**< Original pointer */
  U8* volatile p_r;   /**< Read pointer */
  U8* volatile p_w;   /**< Write pointer */
  volatile I32 fill_cnt;  /**< Number of filled slots */
  I32 size;       /**< Buffer size */
} RINGBUF;

I16 ICACHE_FLASH_ATTR ring_buffer_init(RINGBUF *r, U8* buf, I32 size);
I16 ICACHE_FLASH_ATTR ring_buffer_put(RINGBUF *r, U8 c);
I16 ICACHE_FLASH_ATTR ring_buffer_get(RINGBUF *r, U8* c);
#endif

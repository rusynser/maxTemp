#ifndef _APPLICATION_H
#define _APPLICATION_H

#include <twr.h>
#include <bcl.h>

typedef struct
{
    uint8_t channel;
    float celsius;
    twr_tick_t next_pub;
    
} event_param_t;

#endif

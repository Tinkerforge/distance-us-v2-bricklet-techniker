#ifndef ERU_H
#define ERU_H

#include <stdint.h>

#include "xmc_gpio.h"
#include "xmc_eru.h"


void eru_enable(XMC_ERU_t *const eru);
void event_request_unit_config();

#endif

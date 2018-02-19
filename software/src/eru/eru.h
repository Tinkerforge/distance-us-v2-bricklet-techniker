#ifndef ERU_H
#define ERU_H

#include <stdint.h>

#include "xmc_gpio.h"
#include "xmc_eru.h"

void eru_init(XMC_GPIO_PORT_t *const port, const uint8_t pin);

#endif

#ifndef CONFIG_PIN_LED_H
#define CONFIG_PIN_LED_H

#include <stdint.h>

#include "xmc_gpio.h"


void pin_in_init(XMC_GPIO_PORT_t *const port, const uint8_t pin);
void pin_out_init(XMC_GPIO_PORT_t *const port, const uint8_t pin);

#endif

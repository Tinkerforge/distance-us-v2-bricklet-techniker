/* distance-us-v2-bricklet
 * Copyright (C) 2018 Olaf Lüke <olaf@tinkerforge.com>
 *
 * a16pt.c: Driver for HDC1080 humidity sensor
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#include "a16pt.h"

#include <stdint.h>
#include <stdbool.h>

#include "configs/config_a16pt.h"
#include "xmc_gpio.h"
#include "bricklib2/logging/logging.h"
#include "bricklib2/hal/system_timer/system_timer.h"
#include "bricklib2/hal/ccu4_pwm/ccu4_pwm.h"
#include "xmc_ccu4.h"
uint16_t distance = 0;
const uint8_t ccu4_slice_number=0;
const uint16_t compare_value=9330;
const uint16_t period_value=18661;




XMC_CCU4_SLICE_t *const slice[4] = {
	CCU40_CC40,
	CCU40_CC41,
	CCU40_CC42,
	CCU40_CC43,
};

// Compare value is a value from 0 to period_value (^= 0 to 100% duty cycle)
void ccu4_pwm_set_duty_cycle(const uint8_t ccu4_slice_number, const uint16_t compare_value) //Funktion
{
	XMC_CCU4_SLICE_SetTimerCompareMatch(slice[ccu4_slice_number], compare_value);
    XMC_CCU4_EnableShadowTransfer(CCU40, (XMC_CCU4_SHADOW_TRANSFER_SLICE_0 << (ccu4_slice_number*4)) |
    		                             (XMC_CCU4_SHADOW_TRANSFER_PRESCALER_SLICE_0 << (ccu4_slice_number*4)));
}

// Period value is the amount of clock cycles per period
void ccu4_pwm_init(XMC_GPIO_PORT_t *const port, const uint8_t pin, const uint8_t ccu4_slice_number, const uint16_t period_value) //Funktion
{
	const XMC_CCU4_SLICE_COMPARE_CONFIG_t compare_config = {
		.timer_mode          = XMC_CCU4_SLICE_TIMER_COUNT_MODE_EA,
		.monoshot            = false,
		.shadow_xfer_clear   = 0,
		.dither_timer_period = 0,
		.dither_duty_cycle   = 0,
		.prescaler_mode      = XMC_CCU4_SLICE_PRESCALER_MODE_NORMAL,
		.mcm_enable          = 0,
		.prescaler_initval   = XMC_CCU4_SLICE_PRESCALER_1024,
		.float_limit         = 0,
		.dither_limit        = 0,
		.passive_level       = XMC_CCU4_SLICE_OUTPUT_PASSIVE_LEVEL_LOW,
		.timer_concatenation = 0,
	};

	const XMC_GPIO_CONFIG_t gpio_out_config	= {
		.mode                = XMC_GPIO_MODE_OUTPUT_PUSH_PULL_ALT2,
		.input_hysteresis    = XMC_GPIO_INPUT_HYSTERESIS_STANDARD,
		.output_level        = XMC_GPIO_OUTPUT_LEVEL_LOW,
	};


    XMC_CCU4_Init(CCU40, XMC_CCU4_SLICE_MCMS_ACTION_TRANSFER_PR_CR);
    XMC_CCU4_StartPrescaler(CCU40);
    XMC_CCU4_SLICE_CompareInit(slice[ccu4_slice_number], &compare_config);

    // Set the period and compare register values
    XMC_CCU4_SLICE_SetTimerPeriodMatch(slice[ccu4_slice_number], period_value);
    XMC_CCU4_SLICE_SetTimerCompareMatch(slice[ccu4_slice_number], 0);

    XMC_CCU4_EnableShadowTransfer(CCU40, (XMC_CCU4_SHADOW_TRANSFER_SLICE_0 << (ccu4_slice_number*4)) |
    		                             (XMC_CCU4_SHADOW_TRANSFER_PRESCALER_SLICE_0 << (ccu4_slice_number*4)));

    XMC_GPIO_Init(port, pin, &gpio_out_config);

    XMC_CCU4_EnableClock(CCU40, ccu4_slice_number);
    XMC_CCU4_SLICE_StartTimer(slice[ccu4_slice_number]);
}




void a16pt_init(void) {


	ccu4_pwm_init(P1_0, ccu4_slice_number, period_value);
	ccu4_pwm_set_duty_cycle(ccu4_slice_number, compare_value);

 /*ccu4_pwm_init(LED_GREEN_PIN, LED_GREEN_CCU4_SLICE,   LED_PERIOD_VALUE);


 ccu4_pwm_set_duty_cycle(LED_GREEN_CCU4_SLICE, LED_COMPARE_VALUE);

	XMC_GPIO_CONFIG_t LED_GREEN_PIN_CONFIG= {
		.mode             = XMC_GPIO_MODE_INPUT_PULL_UP,
		.output_level     = XMC_GPIO_OUTPUT_LEVEL_HIGH,
		.input_hysteresis = XMC_GPIO_INPUT_HYSTERESIS_STANDARD
	};

	XMC_GPIO_Init(LED_GREEN_PIN, &LED_GREEN_PIN_CONFIG); */
}


void a16pt_tick(void) {




}



uint16_t a16pt_get_distance(void) {
return 0;
}

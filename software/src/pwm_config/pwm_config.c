/* bricklib2
 * Copyright (C) 2017 Olaf Lüke <olaf@tinkerforge.com>
 *
 * ccu4_pwm.c: Very simple XMC1X00 CCU4 PWM configuration
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
**/

#include "pwm_config.h"

XMC_CCU4_SLICE_t *const slice_0[4] = {
	CCU40_CC40,
	CCU40_CC41,
	CCU40_CC42,
	CCU40_CC43,
};

XMC_CCU4_SLICE_t *const slice_1[4] = {
	CCU41_CC40,
	CCU41_CC41,
	CCU41_CC42,
	CCU41_CC43,
};


// Update duty cycle
void ccu4_pwm_set_duty_cycle(const uint8_t ccu4_slice_number, const uint16_t compare_value) {
	XMC_CCU4_SLICE_SetTimerCompareMatch(slice_1[ccu4_slice_number], compare_value);
    XMC_CCU4_EnableShadowTransfer(CCU41, (XMC_CCU4_SHADOW_TRANSFER_SLICE_0 << (ccu4_slice_number*4)) | (XMC_CCU4_SHADOW_TRANSFER_PRESCALER_SLICE_0 << (ccu4_slice_number*4)));

}

// Initial PWM configuration
void ccu4_pwm_init(XMC_GPIO_PORT_t *const port, const uint8_t pin, const uint8_t ccu4_slice_number,  const uint16_t period_value) {
	XMC_CCU4_EnableShadowTransfer(CCU41, (XMC_CCU4_SHADOW_TRANSFER_SLICE_0 << (ccu4_slice_number*4))
	                                   | (XMC_CCU4_SHADOW_TRANSFER_PRESCALER_SLICE_0 << (ccu4_slice_number*4)));

	// Use compare config to generate PWM with period/match
	const XMC_CCU4_SLICE_COMPARE_CONFIG_t compare_config = {
		.timer_mode          = XMC_CCU4_SLICE_TIMER_COUNT_MODE_EA,
		.monoshot            = false,
		.shadow_xfer_clear   = 0,
		.dither_timer_period = 0,
		.dither_duty_cycle   = 0,
		.prescaler_mode      = XMC_CCU4_SLICE_PRESCALER_MODE_NORMAL,
		.mcm_enable          = 0,
		.prescaler_initval   = XMC_CCU4_SLICE_PRESCALER_1,
		.float_limit         = 0,
		.dither_limit        = 0,
		.passive_level       = XMC_CCU4_SLICE_OUTPUT_PASSIVE_LEVEL_LOW,
		.timer_concatenation = 0
	};
	XMC_CCU4_SLICE_CompareInit(slice_1[ccu4_slice_number], &compare_config);

	XMC_CCU4_SLICE_SetTimerPeriodMatch(slice_1[ccu4_slice_number], period_value);
	XMC_CCU4_SLICE_SetTimerCompareMatch(slice_1[ccu4_slice_number], 0);

	// Configure pin for ALT9 (CCU)
	const XMC_GPIO_CONFIG_t gpio_out_config	= {
		.mode                = XMC_GPIO_MODE_OUTPUT_PUSH_PULL_ALT9,
		.input_hysteresis    = XMC_GPIO_INPUT_HYSTERESIS_STANDARD,
		.output_level        = XMC_GPIO_OUTPUT_LEVEL_LOW,
	};

	XMC_GPIO_Init(port, pin, &gpio_out_config);

	// Use start config for event 0 with input AI to start PWM at the same time
	XMC_CCU4_SLICE_EVENT_CONFIG_t event_config_active_high = {
		.mapped_input = XMC_CCU4_SLICE_INPUT_AI,
		.edge         = XMC_CCU4_SLICE_EVENT_EDGE_SENSITIVITY_RISING_EDGE,
		.level        = XMC_CCU4_SLICE_EVENT_LEVEL_SENSITIVITY_ACTIVE_HIGH,
		.duration     = XMC_CCU4_SLICE_EVENT_FILTER_DISABLED
	};

	XMC_CCU4_SLICE_ConfigureEvent(slice_1[ccu4_slice_number], XMC_CCU4_SLICE_EVENT_0, &event_config_active_high);
	XMC_CCU4_SLICE_StartConfig(slice_1[ccu4_slice_number], XMC_CCU4_SLICE_EVENT_0, XMC_CCU4_SLICE_START_MODE_TIMER_START);
	XMC_CCU4_SLICE_EnableEvent(slice_1[ccu4_slice_number], XMC_CCU4_SLICE_EVENT_0);

	// Enable clock for slice
	XMC_CCU4_EnableClock(CCU41, ccu4_slice_number);
}

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
/*NVIC 21 Serive Requste 0 für die PWM*/

#include "ccu4_pwm_timer.h"


XMC_CCU4_SLICE_t *const slice[4] = {
	CCU40_CC40,
	CCU40_CC41,
	CCU40_CC42,
	CCU40_CC43,
};

void count_init( const uint8_t ccu4_slice_number)
{

	XMC_CCU4_SLICE_COMPARE_CONFIG_t timer_config1 = {
	.timer_mode            = XMC_CCU4_SLICE_TIMER_COUNT_MODE_EA,
	.monoshot              = XMC_CCU4_SLICE_TIMER_REPEAT_MODE_REPEAT,
	.shadow_xfer_clear     = false,
	.dither_timer_period   = false,
	.dither_duty_cycle     = false,
	.prescaler_mode        = XMC_CCU4_SLICE_PRESCALER_MODE_NORMAL,
	.mcm_enable            = false,
	.prescaler_initval     = XMC_CCU4_SLICE_PRESCALER_1,
	.float_limit           = XMC_CCU4_SLICE_PRESCALER_32768,
	.dither_limit          = 0,
	.passive_level         = XMC_CCU4_SLICE_OUTPUT_PASSIVE_LEVEL_LOW,
	.timer_concatenation   = false
};
XMC_CCU4_SLICE_CompareInit(slice[ccu4_slice_number], &timer_config1);


// Set the period/compare values
XMC_CCU4_SLICE_SetTimerPeriodMatch(slice[ccu4_slice_number], 10);
XMC_CCU4_SLICE_SetTimerCompareMatch(slice[ccu4_slice_number], 5);


// Transfer configuration through shadow register
XMC_CCU4_SetMultiChannelShadowTransferMode(CCU40, (uint32_t)XMC_CCU4_MULTI_CHANNEL_SHADOW_TRANSFER_SW_SLICE1);
XMC_CCU4_SLICE_DisableCascadedShadowTransfer(slice[ccu4_slice_number]);

XMC_CCU4_EnableShadowTransfer(CCU40, XMC_CCU4_SHADOW_TRANSFER_SLICE_1 | XMC_CCU4_SHADOW_TRANSFER_DITHER_SLICE_1 | XMC_CCU4_SHADOW_TRANSFER_PRESCALER_SLICE_1);


	XMC_CCU4_SLICE_EVENT_CONFIG_t event0_config0 = {
			.mapped_input = XMC_CCU4_SLICE_INPUT_BB,
			.edge         = XMC_CCU4_SLICE_EVENT_EDGE_SENSITIVITY_RISING_EDGE,
			.level        = XMC_CCU4_SLICE_EVENT_LEVEL_SENSITIVITY_ACTIVE_HIGH,
			.duration     = XMC_CCU4_SLICE_EVENT_FILTER_DISABLED
		};
		XMC_CCU4_SLICE_ConfigureEvent(slice[ccu4_slice_number], XMC_CCU4_SLICE_EVENT_0, &event0_config0);
		XMC_CCU4_SLICE_CountConfig(slice[ccu4_slice_number], XMC_CCU4_SLICE_EVENT_0);
/*
		XMC_CCU4_SLICE_EnableEvent(slice[ccu4_slice_number], XMC_CCU4_SLICE_IRQ_ID_COMPARE_MATCH_UP);//Eingang für SLice 1
		XMC_CCU4_SLICE_SetInterruptNode(slice[ccu4_slice_number], XMC_CCU4_SLICE_IRQ_ID_COMPARE_MATCH_UP, XMC_CCU4_SLICE_SR_ID_0); //auf

		NVIC_EnableIRQ(8);
		NVIC_SetPriority(8, 0);
		XMC_SCU_SetInterruptControl(8, XMC_SCU_IRQCTRL_CCU40_SR0_IRQ8); 	//ändern
*/
		// Request shadow transfer for the slice 1
		XMC_CCU4_EnableShadowTransfer(CCU40, XMC_CCU4_SHADOW_TRANSFER_SLICE_1 | XMC_CCU4_SHADOW_TRANSFER_PRESCALER_SLICE_1);

		// Enable clock for slice 1
		XMC_CCU4_EnableClock(CCU40,slice[ccu4_slice_number]);
		XMC_CCU4_SLICE_StartTimer(slice[ccu4_slice_number]);


}


void capture_init(const uint8_t ccu4_slice_number)
{
	XMC_CCU4_SLICE_CAPTURE_CONFIG_t capture_config = {
		.fifo_enable         = 0,
		.timer_clear_mode    = XMC_CCU4_SLICE_TIMER_CLEAR_MODE_ALWAYS,
		.same_event          = 0,
		.ignore_full_flag    = 0,
		.prescaler_mode      = XMC_CCU4_SLICE_PRESCALER_MODE_NORMAL,
		.prescaler_initval   = 1,
		.float_limit         = 1,
		.timer_concatenation = 0U
	};
	XMC_CCU4_SLICE_CaptureInit(slice[ccu4_slice_number], &capture_config);
	XMC_CCU4_SLICE_Capture0Config(slice[ccu4_slice_number], XMC_CCU4_SLICE_EVENT_0);

}


void ccu4_timer_2_init(const uint8_t ccu4_slice_number)
{
XMC_CCU4_SLICE_COMPARE_CONFIG_t timer_config = {
		.timer_mode            = XMC_CCU4_SLICE_TIMER_COUNT_MODE_EA,
		.monoshot              = XMC_CCU4_SLICE_TIMER_REPEAT_MODE_REPEAT,
		.shadow_xfer_clear     = false,
		.dither_timer_period   = false,
		.dither_duty_cycle     = false,
		.prescaler_mode        = XMC_CCU4_SLICE_PRESCALER_MODE_NORMAL,
		.mcm_enable            = false,
		.prescaler_initval     = XMC_CCU4_SLICE_PRESCALER_8192,
		.float_limit           = XMC_CCU4_SLICE_PRESCALER_32768,
		.dither_limit          = 0,
		.passive_level         = XMC_CCU4_SLICE_OUTPUT_PASSIVE_LEVEL_LOW,
		.timer_concatenation   = false
	};
	XMC_CCU4_SLICE_CompareInit(slice[ccu4_slice_number], &timer_config);

	XMC_CCU4_SLICE_SetTimerPeriodMatch(slice[ccu4_slice_number], 0xFFFF);

	XMC_CCU4_EnableShadowTransfer(CCU40, (XMC_CCU4_SHADOW_TRANSFER_SLICE_0 << (ccu4_slice_number*4)) |
	    		                             (XMC_CCU4_SHADOW_TRANSFER_PRESCALER_SLICE_0 << (ccu4_slice_number*4)));
	XMC_CCU4_EnableClock(CCU40, 2);



	XMC_CCU4_SLICE_EnableEvent(slice[ccu4_slice_number], XMC_CCU4_SLICE_IRQ_ID_PERIOD_MATCH);
	XMC_CCU4_SLICE_SetInterruptNode(slice[ccu4_slice_number], XMC_CCU4_SLICE_IRQ_ID_PERIOD_MATCH, XMC_CCU4_SLICE_SR_ID_2);
	NVIC_EnableIRQ(16);
	NVIC_SetPriority(16, 0);
	XMC_SCU_SetInterruptControl(16, XMC_SCU_IRQCTRL_CCU40_SR2_IRQ16);

}


// Compare value is a value from 0 to period_value (^= 0 to 100% duty cycle)
void ccu4_pwm_set_duty_cycle(const uint8_t ccu4_slice_number, const uint16_t compare_value) {
	XMC_CCU4_SLICE_SetTimerCompareMatch(slice[ccu4_slice_number], compare_value);
    XMC_CCU4_EnableShadowTransfer(CCU40, (XMC_CCU4_SHADOW_TRANSFER_SLICE_0 << (ccu4_slice_number*4)) |
    		                             (XMC_CCU4_SHADOW_TRANSFER_PRESCALER_SLICE_0 << (ccu4_slice_number*4)));
}

// Period value is the amount of clock cycles per period
void ccu4_pwm_init(XMC_GPIO_PORT_t *const port, const uint8_t pin, const uint8_t ccu4_slice_number, const uint16_t period_value)
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
		.timer_concatenation = 0
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
		XMC_GPIO_SetOutputHigh(port,pin);
		XMC_CCU4_SLICE_EnableEvent(slice[ccu4_slice_number], XMC_CCU4_SLICE_IRQ_ID_COMPARE_MATCH_UP);//Eingang für SLice 1
		XMC_CCU4_SLICE_SetInterruptNode(slice[ccu4_slice_number], XMC_CCU4_SLICE_IRQ_ID_COMPARE_MATCH_UP, XMC_CCU4_SLICE_SR_ID_1); //auf die PWM SLice 1

		XMC_CCU4_EnableClock(CCU40, ccu4_slice_number);
    XMC_CCU4_SLICE_StartTimer(slice[ccu4_slice_number]);

}

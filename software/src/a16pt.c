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

/**************Infineon***************/
#include "xmc_gpio.h"
#include "xmc_scu.h"
#include "xmc1_ccu4_map.h"
/************************************/
#include "bricklib2/logging/logging.h"
#include "system_timer/system_timer.h"
#include "ccu4_pwm/ccu4_pwm.h"
#include "configs/config_a16pt.h"
int x=0;




void a16pt_init(void) {
/************Counter_Compare_Interrupt*********************/
// Set capture config for calculation of duty cycle
XMC_CCU4_SLICE_EVENT_CONFIG_t event0_config0 = {
		.mapped_input = XMC_CCU4_SLICE_INPUT_IN1BB,
		.edge         = XMC_CCU4_SLICE_EVENT_EDGE_SENSITIVITY_RISING_EDGE,
		.level        = XMC_CCU4_SLICE_EVENT_LEVEL_SENSITIVITY_ACTIVE_HIGH,
		.duration     = XMC_CCU4_SLICE_EVENT_FILTER_DISABLED
	};
	XMC_CCU4_SLICE_ConfigureEvent(CCU40_CC40, XMC_CCU4_SLICE_EVENT_0, &event0_config0);




	//XMC_CCU4_SLICE_ConfigureEvent(CCU40_CC41, XMC_CCU4_SLICE_EVENT_0, &event0_config0); //countconfig
	XMC_CCU4_SLICE_CountConfig(CCU40_CC40, XMC_CCU4_SLICE_EVENT_0); //countconfig
	/*XMC_CCU4_SLICE_Capture1Config(CCU40_CC41, XMC_CCU4_SLICE_EVENT_1);*/
	XMC_CCU4_SLICE_EnableEvent(CCU40_CC40, XMC_CCU4_SLICE_IRQ_ID_COMPARE_MATCH_UP);//Auf die PWM SLice 0
	XMC_CCU4_SLICE_SetInterruptNode(CCU40_CC40, XMC_CCU4_SLICE_IRQ_ID_COMPARE_MATCH_UP, XMC_CCU4_SLICE_SR_ID_0); //auf die PWM SLice 0
	NVIC_EnableIRQ(21);
	NVIC_SetPriority(21, 0);
	XMC_SCU_SetInterruptControl(21, XMC_SCU_IRQCTRL_CCU40_SR0_IRQ21);
/************PWM INIT*************************************/


	ccu4_pwm_init(P1_0, slice_number, period_);
	ccu4_pwm_set_duty_cycle(slice_number, compare_);

/***********************LED_INIT****************************/

	const XMC_GPIO_CONFIG_t led_config = {
		.mode             = XMC_GPIO_MODE_OUTPUT_PUSH_PULL,
		.output_level     = XMC_GPIO_OUTPUT_LEVEL_LOW,

	};

	XMC_GPIO_Init(P2_0, &led_config);


/*******************Taster_INIT*******************************/

const	XMC_GPIO_CONFIG_t button_pin_config = {
			.mode             = XMC_GPIO_MODE_INPUT_TRISTATE,
			.output_level     = XMC_GPIO_OUTPUT_LEVEL_HIGH,

		};

		XMC_GPIO_Init(P2_5, &button_pin_config);
		XMC_GPIO_SetOutputHigh(P2_0);
/*************************************************************/
}

void IRQ_Hdlr_21(void) {

	x++;
	if(x==10);
{
	XMC_GPIO_SetOutputLow(P2_0);
}
}

void a16pt_tick(void)
{
/*
	if(XMC_GPIO_GetInput(P2_2)==1)
	{
		uint8_t ccu4_slice_number=0;
		uint16_t compare_value=23437;
		uint16_t period_value=46875;
		ccu4_pwm_init(P1_0, ccu4_slice_number, period_value);
		ccu4_pwm_set_duty_cycle(ccu4_slice_number, compare_value);
		XMC_GPIO_SetOutputHigh(P0_0);

	}
		else
		{
			uint8_t ccu4_slice_number=0;
			uint16_t compare_value=0;
			uint16_t period_value=0;
			ccu4_pwm_init(P1_0, ccu4_slice_number, period_value);
			ccu4_pwm_set_duty_cycle(ccu4_slice_number, compare_value);
			XMC_GPIO_SetOutputLow(P0_0);
		}
*/
}





uint16_t a16pt_get_distance(void) {
return 0;
}

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


#include "xmc_gpio.h"
#include "bricklib2/logging/logging.h"
#include "system_timer/system_timer.h"
#include "ccu4_pwm/ccu4_pwm.h"
#include "configs/config_a16pt.h"
#include "eru/eru.h"



void a16pt_init(void) {


event_request_unit_config();

/************PWM INIT*************************************/

uint8_t ccu4_slice_number=0;
uint16_t compare_value=23437;
uint16_t period_value=46875;

	ccu4_pwm_init(P1_0, ccu4_slice_number, period_value);
	ccu4_pwm_set_duty_cycle(ccu4_slice_number, compare_value);

/***********************LED_INIT****************************/

	const XMC_GPIO_CONFIG_t led_config = {
		.mode             = XMC_GPIO_MODE_OUTPUT_PUSH_PULL,
		.output_level     = XMC_GPIO_OUTPUT_LEVEL_LOW,

	};

	XMC_GPIO_Init(P0_0, &led_config);
	//XMC_GPIO_SetOutputLow(P0_0);

/*******************Taster_INIT_PUll_Up********************/

const	XMC_GPIO_CONFIG_t button_pin_config = {
			.mode             = XMC_GPIO_MODE_INPUT_PULL_UP,
			.output_level     = XMC_GPIO_OUTPUT_LEVEL_HIGH,
			.input_hysteresis = XMC_GPIO_INPUT_HYSTERESIS_STANDARD
		};

		XMC_GPIO_Init(P2_2, &button_pin_config);

/********************************************************/

}
void ERU0_0_IRQHandler(void)
{
		XMC_ERU_ETL_ClearStatusFlag(ERU0_ETL1);
		XMC_GPIO_ToggleOutput(P0_0);
}

void a16pt_tick(void)
{
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

}





uint16_t a16pt_get_distance(void) {
return 0;
}

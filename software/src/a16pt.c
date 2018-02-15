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
#include <string.h>

/**************Infineon***************/
#include "xmc_gpio.h"
#include "xmc_scu.h"
#include "xmc1_ccu4_map.h"
#include "xmc_ccu4.h"
#include "xmc_eru.h"
/************************************/
#include "bricklib2/logging/logging.h"
#include "system_timer/system_timer.h"
#include "ccu4_pwm_timer/ccu4_pwm_timer.h"
#include "configs/config_a16pt.h"
int x=-1;int z=0;
uint32_t v=0; uint32_t v1=0;
int zeit=0; int zeit1=0;



void a16pt_init(void) {
<<<<<<< HEAD
//int messwerte[10]={};
/**************************Externe_Interrupt*******************/
const XMC_GPIO_CONFIG_t sync_pin_config = {
	.mode             = XMC_GPIO_MODE_INPUT_PULL_UP,
	.input_hysteresis = XMC_GPIO_INPUT_HYSTERESIS_LARGE
};
XMC_GPIO_Init(P2_9, &sync_pin_config);

 XMC_ERU_ETL_CONFIG_t sync_etl_config = {
	.input_a                = (uint32_t)XMC_ERU_ETL_INPUT_A0,
	.input_b                = (uint32_t)XMC_ERU_ETL_INPUT_B0,
	.enable_output_trigger  = (uint32_t)1,
	.edge_detection         = XMC_ERU_ETL_EDGE_DETECTION_FALLING,
	.output_trigger_channel = XMC_ERU_ETL_OUTPUT_TRIGGER_CHANNEL0, // Select the source for event
	.source                 = XMC_ERU_ETL_SOURCE_B
};
	//XMC_GPIO_Init(P0_0, &sync_pin_config);
	// ERU Event Trigger Logic Hardware initialization based on UI
	XMC_ERU_ETL_Init(XMC_ERU0, 3, &sync_etl_config);
	// OGU is configured to generate event on configured trigger edge
	XMC_ERU_OGU_SetServiceRequestMode(XMC_ERU0, 0, XMC_ERU_OGU_SERVICE_REQUEST_ON_TRIGGER);
	// Configure NVIC node and priority
	NVIC_SetPriority(3, 1);

	// Clear pending interrupt before enabling it
	NVIC_ClearPendingIRQ(3);
	// Enable NVIC node
	NVIC_EnableIRQ(3);

/************Event_Config**************************************/

	count_init(slice_number_ccu41);
	capture_init(slice_number_ccu43);

/************PWM_Init*******************************************/

	ccu4_pwm_init(P1_0, slice_number_ccu40, period_);
	ccu4_pwm_set_duty_cycle(slice_number_ccu40, compare_);

/***********************Timer_2_Init*****************************/

	ccu4_timer_2_init(slice_number_ccu42 );

	XMC_CCU4_SLICE_StartTimer(CCU40_CC42);
/*
	XMC_CCU4_SLICE_StopTimer(CCU40_CC42);
	XMC_CCU4_SLICE_ClearTimer(CCU40_CC42);
	*/
=======
/************Counter_Compare_Interrupt*********************/
// Set capture config for calculation of duty cycle
XMC_CCU4_SLICE_EVENT_CONFIG_t event0_config0 = {									//
		.mapped_input = XMC_CCU4_SLICE_INPUT_BB,
		.edge         = XMC_CCU4_SLICE_EVENT_EDGE_SENSITIVITY_RISING_EDGE,					//
		.level        = XMC_CCU4_SLICE_EVENT_LEVEL_SENSITIVITY_ACTIVE_HIGH,
		.duration     = XMC_CCU4_SLICE_EVENT_FILTER_DISABLED
	};
	XMC_CCU4_SLICE_ConfigureEvent(CCU40_CC41, XMC_CCU4_SLICE_EVENT_0, &event0_config0);				// Einstellung auf Flankentrigger (steigende Flanke)
	XMC_CCU4_SLICE_CountConfig(CCU40_CC41, XMC_CCU4_SLICE_EVENT_0);							//


/************PWM INIT*************************************/


	ccu4_pwm_init(P1_0, slice_number, period_);									// PWM für Port 1.0 einstellen und Periodendauer festlegen
	ccu4_pwm_set_duty_cycle(slice_number, compare_);								// Comparewert der PWM festlegen


	XMC_CCU4_SLICE_EnableEvent(CCU40_CC40, XMC_CCU4_SLICE_IRQ_ID_COMPARE_MATCH_UP);					// Interrupt für die PWM (CCU4 SLice 0) freigeben
	XMC_CCU4_SLICE_SetInterruptNode(CCU40_CC40, XMC_CCU4_SLICE_IRQ_ID_COMPARE_MATCH_UP, XMC_CCU4_SLICE_SR_ID_0);	//Interrupt für die PWM einrichten
	NVIC_EnableIRQ(21);												// Interrupt Nr.21 freigeben
	NVIC_SetPriority(21, 0);											// Priorität für Interrupt Nr.21 einstellen
	XMC_SCU_SetInterruptControl(21, XMC_SCU_IRQCTRL_CCU40_SR0_IRQ21);						// Interrupt Nr.21 auf die PWM einrichten
>>>>>>> 9752c1ecf0d91aaa40f9785d8ca13336c67a90b4

/***********************LED_INIT****************************/

	const XMC_GPIO_CONFIG_t led_config = {										// Einstellungen für die Ein-/Ausgabe
		.mode             = XMC_GPIO_MODE_OUTPUT_PUSH_PULL,							// 
		.output_level     = XMC_GPIO_OUTPUT_LEVEL_LOW,								// 

	};

<<<<<<< HEAD
	XMC_GPIO_Init(P2_0, &led_config);
	//XMC_GPIO_Init(P0_0, &led_config);
	XMC_GPIO_SetOutputHigh(P2_0);
	//XMC_GPIO_SetOutputHigh(P0_0);

/*******************Taster_INIT*******************************/

const	XMC_GPIO_CONFIG_t button_pin_config = {
			.mode             = XMC_GPIO_MODE_INPUT_PULL_UP,
			.output_level     = XMC_GPIO_OUTPUT_LEVEL_HIGH,
			.input_hysteresis	= XMC_GPIO_INPUT_HYSTERESIS_STANDARD
		};

	//XMC_GPIO_Init(P2_5, &button_pin_config);

/*************************************************************/
}
void IRQ_Hdlr_3(void)
{
	XMC_GPIO_ToggleOutput(P2_0);
=======
	XMC_GPIO_Init(P2_0, &led_config);										// Ein-/Ausgabe für Pin 2.0 einrichten
	XMC_GPIO_SetOutputHigh(P2_0);											// P2.0 Signal 1 ausgeben

/*******************Taster_INIT*******************************/

const	XMC_GPIO_CONFIG_t button_pin_config = {										// Einstellungen für einen Taster
			.mode             = XMC_GPIO_MODE_INPUT_TRISTATE,						//
			.output_level     = XMC_GPIO_OUTPUT_LEVEL_HIGH,							//

		};

		XMC_GPIO_Init(P2_5, &button_pin_config);								// P2.5 für einen Taster konfigurieren

/*************************************************************/
}

void IRQ_Hdlr_21(void) {												// Interrupt Nr.21

	x++;														// 
logd("x:%d\n\r",x);													// Ausgabe auf der Debug Platine
	if(x==10)													// 
{
	XMC_GPIO_ToggleOutput(P2_0);											// Schalte P2.0 um (1/0)
	x=0;
>>>>>>> 9752c1ecf0d91aaa40f9785d8ca13336c67a90b4
}
void IRQ_Hdlr_21(void)
{
	x++;
	//logd("x:%d\n\r",x);
	if(x==10)
	{
		//XMC_GPIO_ToggleOutput(P0_0);
		x=0;
	}
}



void IRQ_Hdlr_16(void)
{

	XMC_CCU4_SLICE_ClearTimer(CCU40_CC42);

}

<<<<<<< HEAD

void a16pt_tick(void)
{/*
	v1=XMC_CCU4_SLICE_GetTimerValue(CCU40_CC42);
	logd("v1:%d\n\r",v1);
if(XMC_GPIO_GetInput(P2_5)==0)
=======
void a16pt_tick(void)													// 
>>>>>>> 9752c1ecf0d91aaa40f9785d8ca13336c67a90b4
{
	for(z=0;z<messwerte[z];z++)
	{
		messwerte[z]=v1;
	}

}
if(v>1)
{
	zeit=(v/46.875)*4;
	logd("zeit:%d\n\r",zeit);
	zeit1=(v1/46.875)*4;
	logd("zeit1:%d\n\r",zeit1);
	XMC_CCU4_SLICE_ClearTimer(CCU40_CC42);
	v=0;

}

*/}





uint16_t a16pt_get_distance(void) {
return 0;
}

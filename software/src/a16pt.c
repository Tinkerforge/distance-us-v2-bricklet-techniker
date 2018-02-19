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

/***********Infineon_eigene_Include_Datein**************/
#include "xmc_gpio.h"
#include "xmc_scu.h"
#include "xmc1_ccu4_map.h"
#include "xmc_ccu4.h"

/*************Eigene_Include_Dateien************/
#include "bricklib2/logging/logging.h"
#include "system_timer/system_timer.h"
#include "eru/eru.h"
#include "ccu4_pwm_timer/ccu4_pwm_timer.h"
#include "configs/config_a16pt.h"
int x=-1;int z=0;
uint32_t v=0; uint32_t v1=0;
int zeit=0; int zeit1=0;



void a16pt_init(void) {

//int messwerte[10]={};
/**************************Externe_Interrupt*******************/
	eru_init(eru_port);

/************Event_Config**************************************/

	count_init(slice_number_ccu40_cc41);
	capture_init(slice_number_ccu40_cc43);

/************PWM_Init*******************************************/

	ccu4_pwm_init(pwm_port, slice_number_ccu40_cc40, period_);
	ccu4_pwm_set_duty_cycle(slice_number_ccu40_cc40, compare_);
	XMC_CCU4_SLICE_StopTimer(CCU40_CC40);


/***********************Timer_2_Init*****************************/

	ccu4_timer_2_init(slice_number_ccu40_cc42);
	XMC_CCU4_SLICE_StartTimer(CCU40_CC42);
	/*
	XMC_CCU4_SLICE_StopTimer(CCU40_CC42);
	XMC_CCU4_SLICE_ClearTimer(CCU40_CC42);
	*/

/***********************LED_INIT****************************/

pin_out_init(P2_0);
pin_out_init(P0_0);

XMC_GPIO_SetOutputHigh(P2_0);
XMC_GPIO_SetOutputHigh(P0_0);

/*******************Taster_INIT*******************************/

pin_in_pullup_init(pullup_port);

}

void IRQ_Hdlr_3(void)
{
	XMC_CCU4_SLICE_StartTimer(CCU40_CC40);

}


void IRQ_Hdlr_21(void) 												// Interrupt Nr.21
{

	x++;
logd("x:%d\n\r",x);													// Ausgabe auf der Debug Platine
	if(x==10)
{
	XMC_CCU4_SLICE_StopTimer(CCU40_CC40);

	x=0;
}
}




void IRQ_Hdlr_16(void)
{
	//XMC_GPIO_ToggleOutput(P0_0);
}


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





uint16_t a16pt_get_distance(void)
{
return 0;
}

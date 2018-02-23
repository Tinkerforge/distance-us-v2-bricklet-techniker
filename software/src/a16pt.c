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
#include <math.h>
/*********Infineon_eigene_Include_Datein*************/
#include "xmc_gpio.h"
#include "xmc_scu.h"
#include "xmc1_ccu4_map.h"
#include "xmc_ccu4.h"

/*************Eigene_Include_Dateien****************/
#include "bricklib2/logging/logging.h"
#include "system_timer/system_timer.h"
#include "eru/eru.h"
#include "ccu4_pwm_timer/ccu4_pwm_timer.h"
#include "configs/config_a16pt.h"
int x=0;int z=0;
uint32_t v=0;
int zeit1=0;
uint64_t zeit_tick=0;
uint64_t zwischen1=0;
uint64_t real_ticks=0;
uint64_t strecke=0;
/*************Interrupt_FUnktionen****************/
void IRQ_Hdlr_21(void) // Compare Interrupt
{
	XMC_CCU4_SLICE_StopTimer(CCU41_CC40);
	XMC_CCU4_SLICE_StartTimer(CCU41_CC42);


}

void IRQ_Hdlr_23(void)     //TIMER_2 Überlauf Interrupt
{
	x++;
}


void IRQ_Hdlr_3(void) //ERU
{	
	XMC_CCU4_SLICE_StopTimer(CCU41_CC42);
for (z=0;z<100;z++);
	zeit_tick=XMC_CCU4_SLICE_GetTimerValue(CCU41_CC42);
for (z=0;z<100;z++);
	XMC_CCU4_SLICE_ClearTimer(CCU41_CC42);

	if(zeit_tick>0)
	{
		//XMC_CCU4_SLICE_StopTimer(CCU40_CC42);
		real_ticks=((zeit_tick+(x*65535))/2);
		zwischen1=real_ticks*108;
		strecke=zwischen1/1000000;
		logd("Strecke in M: %d \n\r", strecke);
		zeit_tick=0; real_ticks=0; x=0;zwischen1=0;
	}

}




void a16pt_init(void) {

//int messwerte[10]={};
/*****************Externe_Interrupt*******************/

	eru_init(eru_port);

/************PWM_Init********************************/

	ccu4_pwm_init(pwm_port,cc40, period_);
	ccu4_pwm_set_duty_cycle( cc40, compare_);
	

/************Event_Config****************************/

	count_init(cc41);
	capture_init(cc43);

/*******************Timer_2_Init*******************/

	ccu4_timer_2_init(cc42);
	/*
	XMC_CCU4_SLICE_StopTimer(CCU40_CC42);
	XMC_CCU4_SLICE_ClearTimer(CCU40_CC42);
	*/

/********************LED_INIT*********************/


pin_out_init(P2_11);
pin_out_init(P2_12);
pin_out_init(P2_0);


XMC_GPIO_SetOutputHigh(P2_0);
XMC_GPIO_SetOutputLow(P2_11);
XMC_GPIO_SetOutputLow(P2_12);

/**************Taster_INIT**********************/

pin_in_pullup_init(pullup_port);

}



void a16pt_tick(void)
{
	//logd("Strecke in M: %d \n\r", x);

	static uint32_t debug_time = 0;
	static uint32_t signal_time = 0;

	
// Print every 250ms
	if(system_timer_is_time_elapsed_ms(debug_time, 250)) {
		debug_time = system_timer_get_ms();
		uint32_t slice0 = XMC_CCU4_SLICE_GetTimerValue(CCU41_CC40);
		uint32_t slice1 = XMC_CCU4_SLICE_GetTimerValue(CCU41_CC41);
		uint32_t slice2 = XMC_CCU4_SLICE_GetTimerValue(CCU41_CC42);
		uint32_t slice3 = XMC_CCU4_SLICE_GetTimerValue(CCU41_CC43);
		logd("CCU41  s0: %d,  s1: %d,s2: %d, s3: %d\n\r",slice0, slice1, slice2, slice3);
	}

	if(system_timer_is_time_elapsed_ms(signal_time, 33)) {
		signal_time = system_timer_get_ms();
		XMC_CCU4_SLICE_ClearTimer(CCU41_CC41);
		XMC_CCU4_SLICE_StartTimer(CCU41_CC40);
		//Hier den P2_9 Toggeln oder nur High/low setzen
	}


	/*
	logd("v1:%d\n\r",v1);
if(XMC_GPIO_GetInput(P2_5)==0)

void a16pt_tick(void)
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
*/
}





uint16_t a16pt_get_distance(void)
{
return 0;
}

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
#include "configs/config_a16pt.h"
#include "eru/eru.h"
#include "pwm_config/pwm_config.h"
#include "timer_config/timer_config.h"
#include "config_pin/config_pin.h"

uint32_t x=0;
int Stand_Timer[100];
int zeit1=0;
uint64_t zeit_tick=0;
uint64_t zwischen1=0;
uint64_t real_ticks=0;
uint64_t strecke=0;
/*************Interrupt_Funktionen****************/

void IRQ_Hdlr_21(void) // Compare Interrupt counter 10
{
	
	// Disable IRQs so we can't be interrupted
	__disable_irq();

	// Set CCU trigger to low, otherwise ccu counter is restarted
	XMC_SCU_SetCcuTriggerLow(XMC_SCU_CCU_TRIGGER_CCU41);

	// Stop slice 2
	XMC_CCU4_SLICE_StopClearTimer(CCU41_CC42);

	// For slice 1 we wait until PWM is run through (to get exactly 10 pwm peaks on P4_4 and P4_6)
	while(XMC_CCU4_SLICE_GetTimerValue(CCU41_CC40) > compare_1) {
		__NOP();
	}

	// Stop slice 0
	XMC_CCU4_SLICE_StopClearTimer(CCU41_CC40);

	// Enable IRQs again
	__enable_irq();
	XMC_CCU4_SLICE_StartTimer(CCU40_CC40);

}

void IRQ_Hdlr_8(void)     //TIMER_2 Überlauf Interrupt
{
		x++;
		/*logd("x: %d \n\r", x);*/

}


void IRQ_Hdlr_3(void) //ERU P2_9
{
//x++;
/*uint32_t slice2 = XMC_CCU4_SLICE_GetTimerValue(CCU41_CC42);
		logd("X: %d , Timer: %d\n\r", x,slice2);

	XMC_GPIO_ToggleOutput(P2_11);

	XMC_CCU4_SLICE_StopTimer(CCU41_CC42);

	XMC_CCU4_SLICE_ClearTimer(CCU41_CC42);

	if(zeit_tick>0)
	{
		//XMC_CCU4_SLICE_StopTimer(CCU40_CC42);
		real_ticks=((zeit_tick+(x*65535))/2);
		zwischen1=real_ticks*108;
		strecke=zwischen1/1000000;

		zeit_tick=0; real_ticks=0; x=0;zwischen1=0;
	logd("Strecke in M: %d \n\r", strecke);
*/
}




void a16pt_init(void)
{

/*****************Externe_Interrupt*******************/

	eru_init(eru_port);

/************PWM_Init********************************/

	XMC_CCU4_Init(CCU41, XMC_CCU4_SLICE_MCMS_ACTION_TRANSFER_PR_CR_PCMP);
	XMC_CCU4_StartPrescaler(CCU41);

	ccu4_pwm_init(pwm_port_0,cc40, period_0);	//P4_4
	ccu4_pwm_set_duty_cycle( cc40, compare_0);

	ccu4_pwm_init(pwm_port_1,cc42, period_1);	//P4_6
	ccu4_pwm_set_duty_cycle( cc42, compare_1);

	XMC_CCU4_SLICE_EnableEvent(CCU41_CC40, XMC_CCU4_SLICE_IRQ_ID_COMPARE_MATCH_UP);
	XMC_CCU4_SLICE_SetInterruptNode(CCU41_CC40, XMC_CCU4_SLICE_IRQ_ID_COMPARE_MATCH_UP, XMC_CCU4_SLICE_SR_ID_1);

/************Event_Config****************************/

	count_init(cc41); 			//CCU41
	capture_init(cc41);			//CCU40

/*******************Timer_2_Init*******************/

	ccu4_timer_2_init(cc40);

/********************OUT_INIT*********************/

	pin_out_init(led_port1 ); 		//P2_11
	pin_out_init(led_port2); 		//P2_12
	pin_out_init(hs_shdn);			//P2_0

	XMC_GPIO_SetOutputLow(hs_shdn);
	XMC_GPIO_SetOutputLow(led_port1);
	XMC_GPIO_SetOutputLow(led_port2);

/**************IN_INIT**********************/

}



void a16pt_tick(void)
{
	static uint32_t debug_time = 0;
	static uint32_t signal_time = 0;


// Print every 250ms
	/*if(system_timer_is_time_elapsed_ms(debug_time, 250)) {
		debug_time = system_timer_get_ms();
		uint32_t slice0 = XMC_CCU4_SLICE_GetTimerValue(CCU40_CC40);
		uint32_t slice1 = XMC_CCU4_SLICE_GetTimerValue(CCU40_CC41);
		//uint32_t slice2 = XMC_CCU4_SLICE_GetTimerValue(CCU41_CC42);
		//uint32_t slice3 = XMC_CCU4_SLICE_GetTimerValue(CCU41_CC43);
		logd("CCU40  s0: %d,  s1: %d,\n \r",slice0, slice1);
	}
*/
	if(system_timer_is_time_elapsed_ms(signal_time,30)) {
		signal_time = system_timer_get_ms();
		logd("x: %d \n\r", x);
		x=0;
		XMC_CCU4_SLICE_ClearTimer(CCU41_CC41);//counter auf 0 setzen
		XMC_CCU4_SLICE_StopTimer(CCU40_CC40);
		XMC_CCU4_SLICE_ClearTimer(CCU40_CC40);
		// Set starting values of pwm counters.
		// Start slice 2 with compare value to get offset between the two PWMs
		XMC_CCU4_SLICE_ClearTimer(CCU41_CC40);
		XMC_CCU4_SLICE_SetTimerValue(CCU41_CC42, compare_0-gap_between_pwm);

		// Start timer of slice 0 and 2
		XMC_SCU_SetCcuTriggerHigh(XMC_SCU_CCU_TRIGGER_CCU41);
	}
}





uint16_t a16pt_get_distance(void)
{
return 0;
}

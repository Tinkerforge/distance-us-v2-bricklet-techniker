/* distance-us-v2-bricklet
 * Copyright (C) 2018 Olaf Lüke <olaf@tinkerforge.com>
 *
 * config_a16pt.h: Configurations for a16pt
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
#include "xmc_gpio.h"
#ifndef CONFIG_A16PT_H
#define CONFIG_A16PT_H

/*****************CCU_Timer_Slice_Config*************/
enum ccu40 {cc40=0,cc41,cc42,cc43} ;
//enum ccu41 {cc40=0,cc41,cc42,cc43} ;

/*****************PWM_define**************************/

#define  gap_between_pwm 75
#define  compare_0   (1200 + gap_between_pwm)    //uint16_t
#define  period_0    2400  	//uint16_t
#define  compare_1   (1200 + gap_between_pwm)    //uint16_t
#define  period_1    2400  	  //uint16_t


#define  pwm_port_0   P4_4  	//CCU41
#define  pwm_port_1   P4_6 	//CCU41


#define eru_port       P2_9	//Ausgang Komperator Digital/Analog nur STD-IN


#define hs_shdn        P2_0

#define led_port1      P2_11
#define led_port2      P2_12


#endif

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

/*****************CCU40_Timer_Slice_Config*************/

enum ccu41 {cc40=0,cc41=1,cc42,cc43} ;

/*****************PWM_define**************************/

//#define  compare_   9375//uint16_t
//#define  period_    18750  //uint16_t
#define  compare_   1200//uint16_t
#define  period_    2400  //uint16_t
#define  pwm_port   P4_4


#define eru_port       P2_9
#define pullup_port    P2_5

#define hs_shdn   P2_0
#define led_port1      P2_11
#define led_port2      P2_12

/*
#define hb_phase  P4_4
#define hb_reset  P4_5
#define hb_mode   P2_1
#define hb_enable P0_15



#define opv_aus_dig P0_2 //P2_9 wegen Externer Interrupt
#define opv_aus_ang P2_2

#define debug P0_5
#define reset P0_7
*/

#endif

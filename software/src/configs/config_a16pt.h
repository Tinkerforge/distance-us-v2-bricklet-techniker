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
#define led_taster P1_4
/*****************PWM_define**************************/
#define  slice_number_ccu40 0   //uint8_t ccu40_cc40
#define  compare_ 23437  //uint16_t
#define  period_  46875  //uint16_t

/*****************Counter_Compare_Interrupt_define**********/
#define slice_number_ccu41 1  //CCU40_CC41
/*****************Period_Match_define***********************/
#define slice_number_ccu43 3
/*****************Timer_2***********************************/
#define slice_number_ccu42 2
/*****************************PORT_US_Sensor****************/
/*
#define hb_phase  P4_4
#define hb_reset  P4_5
#define hb_mode   P2_1
#define hb_enable P0_15

#define hs_shdn   P2_0

#define led       P2_10
#define led1      P2_11
#define led2      P_12

#define opv_aus_dig P0_2
#define opv_aus_ang P2_2

#define debug P0_5
#define reset P0_7
*/

#endif

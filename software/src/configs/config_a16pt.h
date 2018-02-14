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
#define  slice_number 0   //uint8_t
#define  compare_ 23437  //uint16_t
#define  period_ 46875  //uint16_t
/*****************Counter_Compare_Interrupt_define**********/




#endif

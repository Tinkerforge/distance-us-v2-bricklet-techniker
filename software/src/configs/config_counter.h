/* industrial-counter-bricklet
 * Copyright (C) 2017 Olaf Lüke <olaf@tinkerforge.com>
 *
 * config_counter.h: Configuration for counter
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

#ifndef CONFIG_COUNTER_H
#define CONFIG_COUNTER_H

#define COUNTER_STATUS0_LED_PIN          P4_7
#define COUNTER_STATUS1_LED_PIN          P4_6
#define COUNTER_STATUS2_LED_PIN          P4_5
#define COUNTER_STATUS3_LED_PIN          P4_4


#define COUNTER_IN0_PIN                  P0_4
#define COUNTER_IN1_PIN                  P0_12
#define COUNTER_IN2_PIN                  P3_0
#define COUNTER_IN3_PIN                  P0_0

#define COUNTER_IN0_NONEXTDIR_PIN        P0_4
#define COUNTER_IN1_NONEXTDIR_PIN        P0_12
#define COUNTER_IN2_NONEXTDIR_PIN        P3_0
#define COUNTER_IN3_NONEXTDIR_PIN        P0_0

#define COUNTER_IN0_POSIF_PIN            P1_2
#define COUNTER_IN1_POSIF_PIN            P1_1
#define COUNTER_IN2_POSIF_PIN            P1_0

#define COUNTER_IN0_MODULE               CCU41
#define COUNTER_IN0_MODULE_NUMBER        1

#define COUNTER_IN0_SLICE0               CCU41_CC40
#define COUNTER_IN0_SLICE0_NUMBER        0

#define COUNTER_IN0_SLICE1               CCU41_CC41
#define COUNTER_IN0_SLICE1_NUMBER        1

#define COUNTER_IN0_SLICE2               CCU41_CC42
#define COUNTER_IN0_SLICE2_NUMBER        2

#define COUNTER_IN0_SLICE3               CCU41_CC43
#define COUNTER_IN0_SLICE3_NUMBER        3


#define COUNTER_IN1_MODULE               CCU80
#define COUNTER_IN1_MODULE_NUMBER        0

#define COUNTER_IN1_SLICE0               CCU80_CC80
#define COUNTER_IN1_SLICE0_NUMBER        0

#define COUNTER_IN1_SLICE1               CCU80_CC81
#define COUNTER_IN1_SLICE1_NUMBER        1

#define COUNTER_IN1_SLICE2               CCU80_CC82
#define COUNTER_IN1_SLICE2_NUMBER        2

#define COUNTER_IN1_SLICE3               CCU80_CC83
#define COUNTER_IN1_SLICE3_NUMBER        3


#define COUNTER_IN2_MODULE               CCU81
#define COUNTER_IN2_MODULE_NUMBER        1

#define COUNTER_IN2_SLICE0               CCU81_CC80
#define COUNTER_IN2_SLICE0_NUMBER        0

#define COUNTER_IN2_SLICE1               CCU81_CC81
#define COUNTER_IN2_SLICE1_NUMBER        1

#define COUNTER_IN2_SLICE2               CCU81_CC82
#define COUNTER_IN2_SLICE2_NUMBER        2

#define COUNTER_IN2_SLICE3               CCU81_CC83
#define COUNTER_IN2_SLICE3_NUMBER        3


#define COUNTER_IN3_MODULE               CCU40
#define COUNTER_IN3_MODULE_NUMBER        0

#define COUNTER_IN3_SLICE0               CCU40_CC40
#define COUNTER_IN3_SLICE0_NUMBER        0

#define COUNTER_IN3_SLICE1               CCU40_CC41
#define COUNTER_IN3_SLICE1_NUMBER        1

#define COUNTER_IN3_SLICE2               CCU40_CC42
#define COUNTER_IN3_SLICE2_NUMBER        2

#define COUNTER_IN3_SLICE3               CCU40_CC43
#define COUNTER_IN3_SLICE3_NUMBER        3

#endif

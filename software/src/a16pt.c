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




void a16pt_init(void) {


	ccu4_pwm_init(P1_0, ccu4_slice_number, period_value);
	ccu4_pwm_set_duty_cycle(ccu4_slice_number, compare_value);


}


void a16pt_tick(void) {

}



uint16_t a16pt_get_distance(void) {
return 0;
}

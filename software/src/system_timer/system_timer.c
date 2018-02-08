/* bricklib2
 * Copyright (C) 2016 Olaf Lüke <olaf@tinkerforge.com>
 *
 * system_timer.c: Simple system tick counter
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
**/

#include "system_timer.h"

#include "configs/config.h"

static volatile uint32_t system_timer_tick;

#ifdef SYSTEM_TIMER_CALLBACK_ENABLED
void system_timer_callback();
#endif

void SysTick_Handler(void) {
	system_timer_tick++;
#ifdef SYSTEM_TIMER_CALLBACK_ENABLED
	system_timer_callback();
#endif
}

void system_timer_init(const uint32_t main_clock_frequency, const uint32_t system_timer_frequency) {
	// Initialize software counter
	system_timer_tick = 0;

	// Disable the SYSTICK Counter
	SysTick->CTRL &= (~SysTick_CTRL_ENABLE_Msk);

	// Set up SysTick for 1 interrupt per ms
	SysTick_Config(main_clock_frequency/system_timer_frequency);

	// Enable SysTick interrupt
	NVIC_EnableIRQ(SysTick_IRQn);
}

uint32_t system_timer_get_ms(void) {
	return system_timer_tick;
}

// This will work even with wrap-around up to UIN32_MAX/2 difference.
// E.g.: end - start = 0x00000010 - 0xfffffff = 0x00000011 etc
inline bool system_timer_is_time_elapsed_ms(const uint32_t start_measurement, const uint32_t time_to_be_elapsed) {
	return (uint32_t)(system_timer_get_ms() - start_measurement) >= time_to_be_elapsed;
}

void system_timer_sleep_ms(const uint32_t sleep) {
	const uint32_t time = system_timer_get_ms();
	while(!system_timer_is_time_elapsed_ms(time, sleep));
}


/**
 * @file activity1.C
 * @author RAJKUMAR (you@domain.com)
 * @brief Initialization of seat, heater and led
 * @version 0.1
 * @date 2021-09-16
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <avr/io.h>
#include <util/delay.h>
#include "activity1.h"

void SEAT_CHECKING()
{
    DDRB |=(1<<PB0);
    DDRD &=~(1<<PD0);
    PORTD |=(1<<PD0);
    PORTB |=(1<<PB0);
    PORTB &=~(1<<PB0);
}

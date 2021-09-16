/**
 * @file activity1.h
 * @author RAJKUMAR (you@domain.com)
 * @brief Initialization of seat, heater and led
 * @version 0.1
 * @date 2021-09-16
 *
 * @copyright Copyright (c) 2021
 *
 */

#ifndef ACTIVITY1_H_INCLUDED
#define ACTIVITY1_H_INCLUDED

#include <avr/io.h>
#include<util/delay.h>

#define SEAT_CHECK !(PIND &(1<<PD0))
#define LED_ON PORTB|=(1<<PB0)
#define LED_OFF PORTB &=~(1<<PB0)
void SEAT_CHECKING();


#endif // ACTIVITY1_H_INCLUDED

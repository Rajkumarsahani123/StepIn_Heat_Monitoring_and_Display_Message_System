/**
 * @file activity2.h
 * @author RAJKUMAR (you@domain.com)
 * @brief Initialization of seat, heater and led
 * @version 0.1
 * @date 2021-09-16
 *
 * @copyright Copyright (c) 2021
 *
 */


#ifndef ACTIVITY2_H_INCLUDED
#define ACTIVITY2_H_INCLUDED
#include <avr/io.h> //Defines pins, ports, etc.
#include <util/delay.h>
#include "activity2.h"

#define LED_ON PORTB= 0b00000001;
#define LED_OFF PORTB= 0b00000000;


#endif // ACTIVITY2_H_INCLUDED

/**
 * @file activity2.C
 * @author RAJKUMAR (you@domain.com)
 * @brief Functions to get the ADC values
 * @version 0.1
 * @date 2021-09-16
 *
 * @copyright Copyright (c) 2021
 *
 **/


#include <avr/io.h> //Defines pins, ports, etc.
#include <util/delay.h>
#include "activity2.h"

static inline void initADC0(void)
{
ADMUX |= (1 << REFS0); //reference voltage on AVCC
ADCSRA |= (1 << ADPS1) | (1 << ADPS0); //ADC clock prescaler /8
ADCSRA |= (1 << ADEN); //enables the ADC
}

uint16_t potentiometerValue;
uint16_t threshold_level;



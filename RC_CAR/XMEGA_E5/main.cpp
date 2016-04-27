/*
 * XMEGA_E5.cpp
 *
 * Created: 26.04.2016 23.51.29
 * Author : Haagon
 */ 

#define F_CPU 2000000UL
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include "pwm.h"
int main(void)
{
    /* Replace with your application code */
	PORTA.DIR = 0xFF;
	PORTC.DIR = 0xFF;
	pwm_init();
	//TCC4.CCA=902;

	sei();
    while (1) 
    {

		TCC4.CCB=1024;
		//PORTA.OUT = (1<<2);
		_delay_ms(1000);
		PORTA.OUT = (1<<3);
		TCC4.CCB=128;
		_delay_ms(5000);


   }
}


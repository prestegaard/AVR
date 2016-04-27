/*
 * pwm.cpp
 *
 * Created: 27.04.2016 00.11.15
 *  Author: Haagon
 */ 
#include <avr/io.h>
//#include <avr/interrupts.h>
#include "pwm.h"

void pwm_init(){
	TCC4.CTRLA = 0;
	TCC4.CTRLB |=  3; //Single slope PWM
	TCC4.CTRLE =TC4_LCCAMODE0_bm|TC4_LCCBMODE0_bm|TC4_LCCCMODE0_bm|TC4_LCCDMODE0_bm;
	TCC4.CNT=0;
	TCC4.PER = 1024;
	TCC4.CCA=0;
	TCC4.CCB=0;
	TCC4.CCC=0;
	TCC4.CCD=0;
	TCC4.CTRLA = 5;
	

	//TCC4.CTRLA = (1 << TC4_CLKSEL0_bp); //No prescaler
}
void pwm_set(uint8_t wheel, uint8_t speed){}

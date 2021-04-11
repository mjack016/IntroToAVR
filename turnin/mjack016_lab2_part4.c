/*	Author: mjack016
 *  Partner(s) Name: Marod
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
	DDRA = 0x00; PORTA = 0xFF;
	DDRB = 0x00; PORTB = 0xFF;
	DDRC = 0x00; PORTC = 0xFF;
	DDRD = 0xFF; PORTC = 0x00;
    /* Insert your solution below */	
    	unsigned char tmpA = 0x00;
	unsigned char tmpB = 0x00;
	unsigned char tmpC = 0x00;
	unsigned char short  tmpD = 0x00;
   	
    while (1) {
        tmpA = PINA;
	tmpB = PINB;
	tmpC = PINC;
        tmpD = (tmpA + tmpB + tmpC) >> 2;
	if(tmpA + tmpB + tmpC > 140){
		tmpD = tmpD | 0x01;
	}
	if(tmpA - tmpC > 80){
		tmpD = tmpD | 0x02;
	}	
	PORTD = tmpD;
	
    }
	return 0;
}

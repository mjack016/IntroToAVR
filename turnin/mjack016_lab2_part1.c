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
	DDRB = 0xF0; PORTB = 0x00;
	
    /* Insert your solution below */
	unsigned char tmpB = 0x00;
	unsigned char tmpA = 0x00;
    while (1) {	
	tmpA = PINA; 
	if (PINA ==  0x01){ //0011 -> 0001
                tmpB = 0x01;
        }
	else if ((tmpA == 0) || (tmpA == 0x02) || (tmpA == 0x03)) {
		tmpB = 0;
	}
	PORTB = tmpB;
    }
    return 0;
}

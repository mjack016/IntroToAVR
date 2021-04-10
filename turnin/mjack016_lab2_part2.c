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
	DDRC = 0xFF; PORTC = 0x00;
    /* Insert your solution below */
	unsigned char tmpA = 0x00;
	unsigned char cnt = 0;
    while (1) {	
	tmpA = PINA; 
	if (PINA ==  0x00){
        	cnt = 2;       
        }
	else if (PINA == 0x01){
		cnt = 1;
	}
	else if (PINA == 0x02){
		cnt = 1;
        }
	else if (PINA == 0x03){
		cnt = 0;
        }
	PORTC = cnt;
    }
    return 0;
}

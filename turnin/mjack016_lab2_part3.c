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
        if (tmpA ==  0x00 || tmpA == 0x80){
                cnt = 4;
        }
        else if (tmpA == 0x01 || tmpA == 0x02 || tmpA == 0x04 || tmpA == 0x08){
                cnt = 3;
        }
        else if (tmpA == 0x03 || tmpA == 5 || tmpA == 6 || tmpA == 0x0A || tmpA == 0x0C ){
                cnt = 2;
        }
        else if (tmpA == 0x03 || tmpA == 0x07 || tmpA == 0x0B || tmpA == 0x0D || tmpA == 0x0E){
                cnt = 1;
        }
        else{
                cnt = 0x80;
        }
        PORTC = cnt;
    }
    return 0;
}

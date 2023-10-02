/*
 * main.c
 *
 *  Created on: Sep 30, 2023
 *      Author: I.C.M
 */
#include <avr/io.h>
#include <util/delay.h>

int main ()
{
	DDRA=0b00001111 ;


	while(1)
	{
		PORTA=0b00000001 ;
		_delay_ms(1000) ;
		PORTA=0 ;
		_delay_ms(1000) ;

		PORTA=0b00000010 ;
		_delay_ms(1000) ;
				PORTA=0 ;
				_delay_ms(1000) ;

				PORTA=0b00000100 ;
				_delay_ms(1000) ;
						PORTA=0 ;
						_delay_ms(1000) ;

						PORTA=0b00001000 ;
						_delay_ms(1000) ;
								PORTA=0 ;
								_delay_ms(1000) ;

	}
}


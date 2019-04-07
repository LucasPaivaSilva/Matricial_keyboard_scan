/*
 * Matricial_keyboard_scan_atmega328p.c
 *
 * Created: 4/6/2019 8:59:22 PM
 * Author : Lucas
 */ 

#define F_CPU 16000000UL	//define a frequencia do microcontrolador - 16MHz

#include <avr/io.h> 	    //definições do componente especificado
#include <util/delay.h>		//biblioteca para o uso das rotinas de _delay_ms e _delay_us()

#define	set_bit(y,bit)	(y|=(1<<bit))	//coloca em 1 o bit x da variável Y
#define	clr_bit(y,bit)	(y&=~(1<<bit))	//coloca em 0 o bit x da variável Y
#define cpl_bit(y,bit) 	(y^=(1<<bit))	//troca o estado lógico do bit x da variável Y
#define tst_bit(y,bit) 	(y&(1<<bit))	//retorna 0 ou 1 conforme leitura do bit

const unsigned char ScanBytes[]= {0b11111110, 0b11111101, 0b11111011, 0b11110111};

int main(void)
{
	int x = 0;
	int y = 0;
	DDRD  = 0xFF;
	DDRC  = 0xFF;
	DDRB  = 0x00;
	PORTB = 0xFF;
	
	while(1)
	{
		for (x=0;x<4;x++)
		{
			PORTD = ScanBytes[x];
			for (y=0;y<4;y++)
			{
				if (tst_bit(PINB, y)==0)
				{
					
				}
			}
		}
		

	}
	
}
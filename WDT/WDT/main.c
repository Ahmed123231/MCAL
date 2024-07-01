/*
 * WDT.c
 *
 * Created: 6/22/2024 10:56:17 AM
 * Author : ahmed
 */ 

#include "BIT_MATH.h"
#include "STD_TYPE.h"
#include "DIO_interface.h"
#include "WDT_interface.h"

#define  F_CPU 16000000UL
#include <util/delay.h>

	



int main(void)
{
	
	DIO_voidSetPinDir(DIO_PORTA,DIO_PIN0,OUTPUT);

	
	
	
    while (1) 
    {
			WDT_voiSetVal(WDT_Time);
			DIO_voidSetPinVal(DIO_PORTA,DIO_PIN0,HIGH);
			_delay_ms(10);
			DIO_voidSetPinVal(DIO_PORTA,DIO_PIN0,LOW);
			_delay_ms(2);
			WDT_voidStop();
    }
}


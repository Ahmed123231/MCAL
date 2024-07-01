/*
 * TIMER1.c
 *
 * Created: 6/21/2024 11:17:46 AM
 * Author : ahmed
 */ 

#include "BIT_MATH.h"
#include "STD_TYPE.h"
#include "DIO_interface.h"
#include "TIMER1_interface.h"


#define F_CPU 16000000UL
#include <util/delay.h>




int main(void)
{
	
	
	u16 val=0 ; 
	
	DIO_voidSetPinDir(DIO_PORTD,DIO_PIN5,OUTPUT) ;
	TIMER1_voidFastPWMICR1();
    while (1) 
    {
		for (val=2000;val<=4000;val++)
		{
			TIMER1_voidSetOCRVal(val) ;
			_delay_ms(5) ;
		}
    }
}


/*
 * Led_Interface.h
 *
 * Created: 5/10/2024 10:03:26 PM
 *  Author: ahmed
 */ 

#ifndef LED_INTERFACE_H_
#define LED_INTERFACE_H_


#include "DIO_interface.h"
/************ Turn LED ON ************/
void LED_voidLedOn (u8 copy_u8port ,u8 copy_u8pin);
/************ Turn LED OFF ************/
void LED_voidLedOff (u8 copy_u8port ,u8 copy_u8pin);
/************ TOGGLE LEd LED  ************/
void LED_voidLedToggle (u8 copy_u8port ,u8 copy_u8pin);



#endif /* LED_INTERFACE_H_ */
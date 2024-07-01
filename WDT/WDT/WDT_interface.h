/*
 * WDT_interface.h
 *
 * Created: 6/22/2024 10:56:52 AM
 *  Author: ahmed
 */ 


#ifndef WDT_INTERFACE_H_
#define WDT_INTERFACE_H_

#define WDT_Time_16_3_ms		0
#define WDT_Time_32_5_ms		1
#define WDT_Time_65_ms			2
#define WDT_Time_0_13_s			3
#define WDT_Time_0_26_s			4
#define WDT_Time_0_52_s			5
#define WDT_Time_1_0_s			6
#define WDT_Time_2_1_s			7


#define WDT_Time                WDT_Time_16_3_ms



/*********** Function to set WDT value ***********/
void WDT_voiSetVal(u8 copy_u16value);

/********* Function to Stop WDT *************/

void WDT_voidStop(void);


#endif /* WDT_INTERFACE_H_ */
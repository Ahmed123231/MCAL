/*
 * SPI_interface.h
 *
 * Created: 6/29/2024 10:28:25 AM
 *  Author: ahmed
 */ 


#ifndef SPI_INTERFACE_H_
#define SPI_INTERFACE_H_

void SPI_voidMasterInit(void);
void SPI_voidSlaveInit(void);
void SPI_voidMasterSendData(u8 copy_u8data);
u8   SPI_u8SlaveRecieveData(void);




#endif /* SPI_INTERFACE_H_ */
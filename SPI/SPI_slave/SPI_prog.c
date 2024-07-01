/*
 * SPI_prog.c
 *
 * Created: 6/29/2024 10:28:59 AM
 *  Author: ahmed
 */ 
#include "BIT_MATH.h"
#include "STD_TYPE.h"
#include "SPI_reg.h"

void SPI_voidMasterInit(void){
	
	
	/******** Clock Selection **********/
	SET_BIT(SPCR_REG,1);
	SET_BIT(SPCR_REG,0);
	
	
	/******* Config SPI as Master **********/
	SET_BIT(SPCR_REG,4);
	
	/******* Enable SPI ****************/
	SET_BIT(SPCR_REG,6);
	
	
	
	
	
	
}
void SPI_voidSlaveInit(void){
	
	
	/**** Config SPI as Slave **********/
	CLR_BIT(SPCR_REG,4);

	/***** Enable SPI ******************/
	
	SET_BIT(SPCR_REG,6);
	
	
}
void SPI_voidMasterSendData(u8 copy_u8data){
	
	
	
	SPDR_REG=copy_u8data;
	while(GET_BIT(SPSR_REG,7)==0);
}
u8   SPI_u8SlaveRecieveData(void){
	
	while(GET_BIT(SPSR_REG,7)==0);
	return SPDR_REG;
	
}
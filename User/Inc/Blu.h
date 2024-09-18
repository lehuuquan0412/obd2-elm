#ifndef __STM32F4_BLU_H__
#define __STM32F4_BLU_H__

#ifdef __cplusplus
 extern "C" {
#endif	 
#include "stm32f4xx.h"
#include <stdio.h>	
#include <stdint.h>

#define buf_Size 			200 
extern uint16_t AT_count;
extern char AT_buf[buf_Size];

extern uint8_t deviceId;
	 
void BL_init();	 
void BL_ClearPairList(uint8_t 	retry );
void BL_ClearPairDevice(uint8_t id);
uint8_t BL_TurnON();
uint8_t BL_TurnOff();
void BL_Status();
void BL_AcceptPairRequest();
void BL_AcceptConnection();
void BL_Send(uint8_t conId,uint8_t size, char* data);
void BL_Recive(char* buffer,char* size);	 
 
	 
#ifdef __cplusplus
}
#endif

#endif /*define __STM32F4_BLU_H__*/
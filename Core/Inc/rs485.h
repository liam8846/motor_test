//
// Created by R001 on 24-7-9.
//

#ifndef RS485_H
#define RS485_H

#ifdef __cplusplus
extern "C" {
#endif

#include "usart.h"

typedef struct
{
    UART_HandleTypeDef huart;
} RS485;

    void RS485_init()
HAL_StatusTypeDef RS485_Send(void* obj, uint8_t* buffer, uint16_t length);
HAL_StatusTypeDef RS485_Receive(void* obj, uint8_t* buffer, uint16_t length);


#ifdef __cplusplus
}
#endif
#endif //RS485_H

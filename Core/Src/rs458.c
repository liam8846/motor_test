//
// Created by R001 on 24-7-9.
//
#include "rs485.h"

#define RS485_RX_EN() HAL_GPIO_WritePin(RS485_RE_DE_GPIO_Port, RS485_RE_DE_Pin, GPIO_PIN_RESET); // Enable receiver
#define RS485_TX_EN() HAL_GPIO_WritePin(RS485_RE_DE_GPIO_Port, RS485_RE_DE_Pin, GPIO_PIN_SET);   // Enable transmitter


HAL_StatusTypeDef RS485_Send(void* obj, uint8_t* buffer, uint16_t length)
{
    RS485* port = (RS485*)obj;
    port->:
    RS485_TX_EN(); // Enable transmitter
    HAL_StatusTypeDef HAL_status = HAL_UART_Transmit_DMA(&port->huart, buffer, length);
    RS485_RX_EN(); // Disable transmitter
    return HAL_status;
}

HAL_StatusTypeDef RS485_Receive(uint8_t* buffer, uint16_t length)
{
   HAL_StatusTypeDef HAL_status =  HAL_UART_Receive_DMA(&huart2, buffer, length);
    return  HAL_status;
}

//
// Created by R001 on 24-7-9.
//
#include "rs485.h"

void RS485_Send(uint8_t* buffer, uint16_t length)
{
    HAL_GPIO_WritePin(RS485_RE_DE_GPIO_Port, RS485_RE_DE_Pin, GPIO_PIN_SET); // Enable transmitter
    HAL_UART_Transmit(&huart2, buffer, length, 100);
    HAL_GPIO_WritePin(RS485_RE_DE_GPIO_Port, RS485_RE_DE_Pin, GPIO_PIN_RESET); // Disable transmitter
}

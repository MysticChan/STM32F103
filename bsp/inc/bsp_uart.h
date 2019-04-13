#ifndef __BSP_UART_H__
#define __BSP_UART_H__
#ifdef __cplusplus
 extern "C" {
#endif
#include "main.h"

extern UART_HandleTypeDef huart1;

void Uart1_Init(void);
#ifdef __cplusplus
}
#endif
#endif

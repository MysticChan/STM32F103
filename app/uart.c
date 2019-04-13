#include "uart.h"
#include "bsp_uart.h"
const uint8_t return_ch = '\r';
int fputc(int ch, FILE *f)
{
	if( ch == '\n' )
	{
		HAL_UART_Transmit(&huart1, (uint8_t*)&return_ch, 1, HAL_MAX_DELAY);
	}
	HAL_UART_Transmit(&huart1, (uint8_t*)&ch, 1, HAL_MAX_DELAY);
	return (ch);
}


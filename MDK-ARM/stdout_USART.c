#include "main.h"
extern UART_HandleTypeDef huart2;
/**
  Put a character to the stdout
 
  \param[in]   ch  Character to output
  \return          The character written, or -1 on write error.
*/
int stdout_putchar (int ch) {
	uint8_t buf[1];
 
  buf[0] = ch;
	
	if(HAL_UART_Transmit(&huart2,buf,1,HAL_MAX_DELAY)!=HAL_OK)
		return (-1);
	
  return (ch);
}

#include "main.h"
extern UART_HandleTypeDef huart2;

/**
  Get a character from stdin
 
  \return     The next character from the input, or -1 on read error.
*/
int stdin_getchar (void) {
  uint8_t buf[1];
 
  if (HAL_UART_Receive(&huart2,buf,1,HAL_MAX_DELAY)!= HAL_OK) {
    return (-1);
  }
  return (buf[0]);
}

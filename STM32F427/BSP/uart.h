/**
  ******************************************************************************
  * @file    uart.h
  * @author  WangBao Dev Team
  * @version V1.0.0
  * @date    07-10-2012
  * @brief   Header for uart.c module
  ******************************************************************************
  * @attention
  *
  * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY
  * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
  * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
  *
  * <h2><center>&copy; COPYRIGHT 2011 STMicroelectronics</center></h2>
  ******************************************************************************
  */

#ifndef _UART_H_
#define _UART_H_


#include "stm32f4xx.h"
#include "stdio.h"





void Uart3_init(void);

void Usart3_SendData(USART_TypeDef *USARTx, unsigned char TempData);

void usart3_send_data(unsigned char Send_number, unsigned char *Send_data);

#endif /* _UART_H_ */

/******************* (C) COPYRIGHT 2012 WangBao *****END OF FILE****/

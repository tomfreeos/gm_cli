/*******************************************************************************
** 文件名称：hal_uart1.h
** 文件作用：UART1
** 编写作者：Tom Free 付瑞彪
** 编写时间：2020-06-21
** 文件备注：
**			 
** 更新记录：
**          2020-06-21 -> 创建文件                             <Tom Free 付瑞彪>
**
**              Copyright (c) 2018-2020 付瑞彪 All Rights Reserved
**
**       1 Tab == 4 Spaces     UTF-8     ANSI C Language(C99)
*******************************************************************************/
#ifndef __HAL_UART1_H__
#define __HAL_UART1_H__

#include "gm_type.h"

/*******************************************************************************
** 函数名称：HAL_UART1_Init
** 函数作用：初始化UART1
** 输入参数：baud - 波特率
**           rx_hook - 接收中断钩子函数
** 输出参数：无
** 使用范例：HAL_UART1_Init(115200ul, hook);
** 函数备注：
*******************************************************************************/
void HAL_UART1_Init(uint32_t baud, void(*rx_hook)(uint8_t));

/*******************************************************************************
** 函数名称：HAL_UART1_PutChar
** 函数作用：输出一个字符
** 输入参数：ch - 输出字符
** 输出参数：无
** 使用范例：HAL_UART1_PutChar('c');
** 函数备注：
*******************************************************************************/
void HAL_UART1_PutChar(char ch);

/*******************************************************************************
** 函数名称：HAL_UART1_GetChar
** 函数作用：输入一个字符
** 输入参数：无
** 输出参数：字符
** 使用范例：HAL_UART1_GetChar();
** 函数备注：此函数不可在开启接收中断时使用
*******************************************************************************/
char HAL_UART1_GetChar(void);

#endif  /* __UART1_H__ */

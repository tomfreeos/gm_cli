/*******************************************************************************
** 文件名称：common.h
** 文件作用：通用文件
** 编写作者：Tom Free 付瑞彪
** 编写时间：2018-10-31
** 文件备注：
**
**
** 更新记录：
**          2018-10-31 -> 创建文件                          <Tom Free 付瑞彪>
**
**
**       Copyright (c) 深圳市三派智能科技有限公司 All Rights Reserved
**
**       1 Tab == 4 Spaces     UTF-8     ANSI C Language(C99)
*******************************************************************************/
#ifndef __PLATFORM_H__
#define __PLATFORM_H__

/* 通用数据类型定义 */
#include "typedef.h"

/* 系统主时钟源定义 */
typedef enum
{
    MCLK_INT_16MHZ  = 0,
    MCLK_INT_1MHZ   = 1,
    MCLK_EXT_8MHZ   = 2,
    MCLK_LOW_128KHZ = 3
} MCLK_SOURCE;

/*******************************************************************************
** 函数名称：STM8L_GetUID
** 函数作用：获取STM8L芯片ID号
** 输入参数：pUID - 接收UID缓冲区地址
** 输出参数：是否成功，GM_OK - 成功
** 使用范例：GetUniqueID();
** 函数备注：
*******************************************************************************/
void STM8L_GetUID(GM_U8 *pUID);

/*******************************************************************************
** 函数名称：STM8L_ChangeMCLK
** 函数作用：设置STM8L系统主时钟
** 输入参数：mclk - 系统时钟类型
**           MCLK_INT_16MHZ  - 内部16MHZ
**           MCLK_EXT_8MHZ   - 外部8MHZ
**           MCLK_LOW_128KHZ - 内部128KHZ
** 输出参数：无
** 使用范例：GM_BOOL res = STM8L_ChangeMCLK(MCLK_INT_16MHZ);
** 函数备注：此函数如果时钟源异常会出现死等的情况
*******************************************************************************/
void STM8L_ChangeMCLK(MCLK_SOURCE mclk);

#endif  /* __PLATFORM_H__ */

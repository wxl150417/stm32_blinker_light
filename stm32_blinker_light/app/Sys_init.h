#ifndef __Sys_init_H__
#define __Sys_init_H__

//定义结构体类型
typedef struct
{
  void (*GPIO_Init)(void);           //通用输入输出端口初始化
  void (*Sys_Init)(void);            //系统初始化
} Hardware_Init_t;

/* extern variables-----------------------------------------------------------*/
extern Hardware_Init_t Hardware_Init;

#endif
/********************************************************
  End Of File
********************************************************/
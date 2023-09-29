/******************************************************************************
  * @file    main.c 
  * @author  刘杰
  * @version V1.0
  * @date    2020-5-9
  * @Conpany 
  * @project 最强点灯
*******************************************************************************/

/* Includes ------------------------------------------------------------------*/
#include <main.h>

/* Private define-------------------------------------------------------------*/

/* Private variables----------------------------------------------------------*/

/* Public variables-----------------------------------------------------------*/

/* Private function prototypes------------------------------------------------*/

/*
	* @name   main
	* @brief  主函数
	* @param  None	
	* @retval None      
*/
int main(void)
{	
	//系统初始化
	Hardware_Init.Sys_Init();
	
	////系统主循环
	while(1)
	{
		//运行状态机
		switch(STA_Machine.ucSTA_Machine_Status)
		{
			case STA1: STA_Machine.Fun_STA1();	break;
			case STA2: STA_Machine.Fun_STA2();	break;
			case STA3: STA_Machine.Fun_STA3();	break;
			case STA4: STA_Machine.Fun_STA4();	break;
			case STA5: STA_Machine.Fun_STA5();	break;
			case STA6: STA_Machine.Fun_STA6();	break;
			case STA7: STA_Machine.Fun_STA7();	break;
			case STA8: STA_Machine.Fun_STA8();	break;
			default: STA_Machine.ucSTA_Machine_Status = STA1;
		}
	}
}
/********************************************************
  End Of File
********************************************************/


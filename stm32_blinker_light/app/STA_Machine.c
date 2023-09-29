/* Includes ------------------------------------------------------------------*/
#include <main.h>

/* Private define-------------------------------------------------------------*/

/* Private variables----------------------------------------------------------*/

/* Private function prototypes------------------------------------------------*/
static void Fun_STA1(void);
static void Fun_STA2(void);
static void Fun_STA3(void);
static void Fun_STA4(void);
static void Fun_STA5(void);
static void Fun_STA6(void);
static void Fun_STA7(void);
static void Fun_STA8(void);

/* Public variables-----------------------------------------------------------*/
//结构体定义    
STA_Machine_t   STA_Machine = 
{
	STA1,
	
	Fun_STA1,
	Fun_STA2,
	Fun_STA3,
	Fun_STA4,
	Fun_STA5,
	Fun_STA6,
	Fun_STA7,
  Fun_STA8,
};

/*
	* @name   Fun_STA1 - 8
	* @brief  状态函数
	* @param  None
	* @retval None      
*/
void Fun_STA1()
{
	LED_Run.LED_Flip();
	Public.Delay_ms(100);
	LED_Run.LED_Flip();
	Public.Delay_ms(100);
	
	STA_Machine.ucSTA_Machine_Status = STA2;
}

void Fun_STA2()
{
	LED_Run.LED_Flip();
	Public.Delay_ms(200);
	LED_Run.LED_Flip();
	Public.Delay_ms(200);
	
	STA_Machine.ucSTA_Machine_Status = STA3;
}

void Fun_STA3()
{
	LED_Run.LED_Flip();
	Public.Delay_ms(300);
	LED_Run.LED_Flip();
	Public.Delay_ms(300);
	
	STA_Machine.ucSTA_Machine_Status = STA4;
}

void Fun_STA4()
{
	LED_Run.LED_Flip();
	Public.Delay_ms(400);
	LED_Run.LED_Flip();
	Public.Delay_ms(400);
	
	STA_Machine.ucSTA_Machine_Status = STA5;
}

void Fun_STA5()
{
	LED_Run.LED_Flip();
	Public.Delay_ms(500);
	LED_Run.LED_Flip();
	Public.Delay_ms(500);
	
	STA_Machine.ucSTA_Machine_Status = STA6;
}

void Fun_STA6()
{
	LED_Run.LED_Flip();
	Public.Delay_ms(600);
	LED_Run.LED_Flip();
	Public.Delay_ms(600);
	
	STA_Machine.ucSTA_Machine_Status = STA7;
}

void Fun_STA7()
{
	LED_Run.LED_Flip();
	Public.Delay_ms(700);
	LED_Run.LED_Flip();
	Public.Delay_ms(700);
	
	STA_Machine.ucSTA_Machine_Status = STA8;
}

void Fun_STA8()
{
	LED_Run.LED_Flip();
	Public.Delay_ms(800);
	LED_Run.LED_Flip();
	Public.Delay_ms(800);
	
	STA_Machine.ucSTA_Machine_Status = STA1;
}
/********************************************************
  End Of File
********************************************************/
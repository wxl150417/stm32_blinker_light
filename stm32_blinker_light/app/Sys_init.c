/* Includes ------------------------------------------------------------------*/
#include <main.h>

/* Private define-------------------------------------------------------------*/

/* Private variables----------------------------------------------------------*/
static void GPIO_Init(void);           //通用输入输出端口初始化
static void Sys_Init(void);            //系统初始化

/* Public variables-----------------------------------------------------------*/
Hardware_Init_t Hardware_Init = 
{
	GPIO_Init,
	Sys_Init
};

/* Private function prototypes------------------------------------------------*/      

/*
	* @name   GPIO_Init
	* @brief  通用输入输出端口初始化
	* @param  None
	* @retval None      
*/
static void GPIO_Init()
{
	//M1  M0
		//0   0	     准双向口
		//0   1	     推挽输出
		//1   0	     高阻输入
		//1   1	     开漏
	
	//P3
	//P34,P35设置为推挽输出  
	P3M1 = 0x00; //0000 0000
	P3M0 = 0x30; //0011 0000

	P34  = 0;  //关闭运行指示灯
	P35  = 0;  //关闭PWM指示灯
}


/*
	* @name   Sys_Init
	* @brief  系统初始化
	* @param  None
	* @retval None      
*/
static void Sys_Init()
{	
	Public.Delay_ms(50);                //上电延时50ms
	Hardware_Init.GPIO_Init();          //GPIO口初始化
}
/********************************************************
  End Of File
********************************************************/
/* Includes ------------------------------------------------------------------*/
#include <main.h>

/* Private define-------------------------------------------------------------*/

/* Private variables----------------------------------------------------------*/
static void GPIO_Init(void);           //ͨ����������˿ڳ�ʼ��
static void Sys_Init(void);            //ϵͳ��ʼ��

/* Public variables-----------------------------------------------------------*/
Hardware_Init_t Hardware_Init = 
{
	GPIO_Init,
	Sys_Init
};

/* Private function prototypes------------------------------------------------*/      

/*
	* @name   GPIO_Init
	* @brief  ͨ����������˿ڳ�ʼ��
	* @param  None
	* @retval None      
*/
static void GPIO_Init()
{
	//M1  M0
		//0   0	     ׼˫���
		//0   1	     �������
		//1   0	     ��������
		//1   1	     ��©
	
	//P3
	//P34,P35����Ϊ�������  
	P3M1 = 0x00; //0000 0000
	P3M0 = 0x30; //0011 0000

	P34  = 0;  //�ر�����ָʾ��
	P35  = 0;  //�ر�PWMָʾ��
}


/*
	* @name   Sys_Init
	* @brief  ϵͳ��ʼ��
	* @param  None
	* @retval None      
*/
static void Sys_Init()
{	
	Public.Delay_ms(50);                //�ϵ���ʱ50ms
	Hardware_Init.GPIO_Init();          //GPIO�ڳ�ʼ��
}
/********************************************************
  End Of File
********************************************************/
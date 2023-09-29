#ifndef __LED_H__
#define __LED_H__

//RUN LED
#define   MCU_Run_LED			       P34
#define   MCU_Run_LED_ON 	       (bit)1
#define   MCU_Run_LED_OFF        (bit)0

//����ṹ������
typedef struct
{
	void (*LED_ON)(void);     //��
	void (*LED_OFF)(void);    //�ر�
	void (*LED_Flip)(void);   //��ת
} LED_t;

/* extern variables-----------------------------------------------------------*/
extern LED_t  LED_Run;
/* extern function prototypes-------------------------------------------------*/

#endif
/********************************************************
  End Of File
********************************************************/
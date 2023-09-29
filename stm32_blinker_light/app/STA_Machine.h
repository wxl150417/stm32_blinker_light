#ifndef __KEY2_H__
#define __KEY2_H__

//����ö������
typedef enum
{
	STA1   = (uint8_t)0x01, 
	STA2   = (uint8_t)0x02, 
	STA3   = (uint8_t)0x03, 
	STA4   = (uint8_t)0x04, 
	STA5   = (uint8_t)0x05,
	STA6   = (uint8_t)0x06,
	STA7   = (uint8_t)0x07,
	STA8   = (uint8_t)0x08,
} STA_Machine_Status_t;


//����ṹ������
typedef struct
{
	STA_Machine_Status_t  ucSTA_Machine_Status;  //״̬��״̬
	
	void (*Fun_STA1)(void); 
	void (*Fun_STA2)(void);
	void (*Fun_STA3)(void);
	void (*Fun_STA4)(void);
	void (*Fun_STA5)(void);
	void (*Fun_STA6)(void);
	void (*Fun_STA7)(void);
	void (*Fun_STA8)(void);
} STA_Machine_t;

/* extern variables-----------------------------------------------------------*/
//�ṹ������
extern STA_Machine_t   STA_Machine;

/* extern function prototypes-------------------------------------------------*/

#endif
/********************************************************
  End Of File
********************************************************/
#ifndef __PUBLIC_H_
#define __PUBLIC_H_

//���������ض���
typedef	signed   char      sint8_t;
typedef signed   short int sint16_t;
typedef signed   long  int sint32_t;

typedef unsigned char      uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned long  int uint32_t;

//����ö������ -> TRUE/FALSEλ
typedef enum
{
	TRUE  = (bit)1,
	FALSE = (bit)0,
}BOOL_t;

//����ṹ������
typedef struct
{
	void (*Delay_ms)(uint16_t);            //ms��ʱ����
} Public_t;

/* extern variables-----------------------------------------------------------*/
extern Public_t  Public;
#endif
/********************************************************
  End Of File
********************************************************/
#ifndef __DHT11_H
#define __DHT11_H
#include "main.h"
#include "stdio.h"


//IO��������
#define DHT11_IO_IN()  {GPIOB->CRH&=0XFFFFFF0F;GPIOB->CRH|=8<<4;}
#define DHT11_IO_OUT() {GPIOB->CRH&=0XFFFFFF0F;GPIOB->CRH|=3<<4;}
////IO��������											   
#define	DHT11_DQ_OUT(n) HAL_GPIO_WritePin(GPIOB,GPIO_PIN_9,n) //���ݶ˿�	PB9
#define	DHT11_DQ_IN     HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_9)    //���ݶ˿�	PB9 
   	
void delay_us(uint32_t us);
uint8_t DHT11_Init(void);//��ʼ��DHT11
uint8_t DHT11_Read_Data(uint8_t *temp,uint8_t *humi);//��ȡ��ʪ��
uint8_t DHT11_Read_Byte(void);//����һ���ֽ�
uint8_t DHT11_Read_Bit(void);//����һ��λ
uint8_t DHT11_Check(void);//����Ƿ����DHT11
void DHT11_Rst(void);//��λDHT11  
#endif

#ifndef __DHT11_H
#define __DHT11_H
#include "main.h"
#include "stdio.h"


//IO方向设置
#define DHT11_IO_IN()  {GPIOB->CRH&=0XFFFFFF0F;GPIOB->CRH|=8<<4;}
#define DHT11_IO_OUT() {GPIOB->CRH&=0XFFFFFF0F;GPIOB->CRH|=3<<4;}
////IO操作函数											   
#define	DHT11_DQ_OUT(n) HAL_GPIO_WritePin(GPIOB,GPIO_PIN_9,n) //数据端口	PB9
#define	DHT11_DQ_IN     HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_9)    //数据端口	PB9 
   	
void delay_us(uint32_t us);
uint8_t DHT11_Init(void);//初始化DHT11
uint8_t DHT11_Read_Data(uint8_t *temp,uint8_t *humi);//读取温湿度
uint8_t DHT11_Read_Byte(void);//读出一个字节
uint8_t DHT11_Read_Bit(void);//读出一个位
uint8_t DHT11_Check(void);//检测是否存在DHT11
void DHT11_Rst(void);//复位DHT11  
#endif

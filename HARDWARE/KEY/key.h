#ifndef __KEY_H
#define __KEY_H	 
#include "sys.h"
//////////////////////////////////////////////////////////////////////////////////	 
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//ALIENTEK精英STM32F103开发板V1
//按键驱动代码	   
//正点原子@ALIENTEK
//技术论坛:www.openedv.com
//创建日期:2015/1/10
//版本：V1.0
//版权所有，盗版必究。
//Copyright(C) 广州市星翼电子科技有限公司 2009-2019
//All rights reserved									  
//////////////////////////////////////////////////////////////////////////////////  
	

#define KEY0	PBin(12) //PE4
#define KEY1	PBin(13)	//PE3  


#define KEY0_PRES 	1	//KEY0按下
#define KEY1_PRES	2	//KEY1按下 


void KEY_Init(void);	//IO初始化
u8 KEY_Scan(u8);  		//按键扫描函数					    
#endif

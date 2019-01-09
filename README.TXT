此为stm32 IAP需要的BootLoader代码
实验器材:
	STM32F103RCT6
	
实验目的:
	利用CAN 或者串口，接收数据，实现STM32的IAP功能

地址配置
从0x8000000-0x8009000，共36K给BootLoader运行，app地址偏移0x9000
	       start              size
app	：0x8009000         0x37000   （0x40000-0x9000=0x37000）
iap 	：0x8000000         0x40000



bin文件生成
D:\Keil_v5\ARM\ARMCC\bin\fromelf.exe --bin -o ..\OBJ\Conveyor_Belt.bin ..\OBJ\Conveyor_Belt.axf


app代码中需更改向量表的偏移量
MY_NVIC_SetVectorTable(0x08000000,0x9000);


2019-01-09 	1，修改部分内容
		2，增加包对比，包错误后重新接受
感谢正点原子提供BootLoader源码

































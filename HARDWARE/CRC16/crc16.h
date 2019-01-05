#ifndef __crc16_H
#define __crc16_H
#include "sys.h"
extern uint16_t Crc_In,Crc_Out;
uint16_t CRC16(const unsigned char* pDataIn, int iLenIn);


#endif



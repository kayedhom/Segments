/******************************************************/
/******************************************************/
/*****************Author: Braa Adel********************/
/**************File: 7segments_prg.c*******************/
/******************Date: 2nd Sep 2022******************/
/*********************Version: V1**********************/
/***********Desc:functions'definitions ****************/
/******************************************************/
/******************************************************/



#include"STD_TYPES.h"
#include "DIO_interface.h"
#include"7segments_private.h"
#include"7segments_cfg.h"


 u8 num [10]={zero,one,
			   two,three,
			   four,five,
			   six,seven,
			   eight,nine};
//u8 num2[]={0b11000000,0b11111001,0b10100100,0b10110000,0b10011001,0b10010010,0b10000010,0b11111000,0b10000000,0b10010000}

void sevSeg_VidDisplayNumber (u8 Copy_U8PortNumber , u8 Copy_U8Number){
	if(Copy_U8PortNumber<4 && Copy_U8PortNumber>=0){
	if(Copy_U8Number<10 && Copy_U8Number>=0)
	{ 
#if SEVSEG_TYPE == COM_CATHODE
DIO_VidSetPortValue(Copy_U8PortNumber , num[Copy_U8Number]);
#elif SEVSEG_TYPE == COM_ANODE
DIO_VidSetPortValue(Copy_U8PortNumber , (~num[Copy_U8Number]));
#else 
	#error "Wrong Input!"
#endif
}}
}

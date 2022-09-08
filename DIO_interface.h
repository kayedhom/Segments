/******************************************************/
/******************************************************/
/*****************Author: Braa Adel********************/
/**************File: DIO_interface.h*******************/
/******************Date: 26th Aug 2022*****************/
/*********************Version: V1**********************/
/***********Desc:functions'declarations ****************/
/******************************************************/
/******************************************************/


#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_
#endif


void DIO_VidSetPinDirection(u8 Copy_U8Port , u8 Copy_U8Pin , u8 Copy_U8Dir);
void DIO_VidSetPinValue(u8 Copy_U8Port , u8 Copy_U8Pin , u8 Copy_U8Val);

void DIO_VidSetPortDirection(u8 Copy_U8Port , u8 Copy_U8Dir);
void DIO_VidSetPortValue(u8 Copy_U8Port , u8 Copy_U8Val);

void DIO_VidTogglePinDirection(u8 Copy_U8Port , u8 Copy_U8Pin);

u8 DIO_VidGetPinValue(u8 Copy_U8Port , u8 Copy_U8Pin);

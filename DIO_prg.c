/******************************************************/
/******************************************************/
/*****************Author: Braa Adel********************/
/*****************File: DIO_prg.c**********************/
/******************Date: 26th Aug 2022*****************/
/*********************Version: V1**********************/
/***********Desc:functions'definitions ****************/
/******************************************************/
/******************************************************/


#include"STD_TYPES.h"
#include "bit_math.h"
#include"DIO_private.h"
#include "DIO_interface.h"

void DIO_VidSetPinDirection (u8 Copy_U8Port , u8 Copy_U8Pin , u8 Copy_U8Dir){
	switch(Copy_U8Dir){
		case LOW:
		{
			switch(Copy_U8Port){
				case PORTA:
				ClEAR(DDRA_REG,Copy_U8Pin);
				break;
				case PORTB:
				ClEAR(DDRB_REG,Copy_U8Pin);
				break;
				case PORTC:
				ClEAR(DDRC_REG,Copy_U8Pin);
				break;
				case PORTD:
				ClEAR(DDRD_REG,Copy_U8Pin);
				break;
				
				default:
				break;
			}
			break;
		}
		case HIGH:
		{
			switch(Copy_U8Port){
				case PORTA:
				SET(DDRA_REG,Copy_U8Pin);
				break;
				case PORTB:
				SET(DDRB_REG,Copy_U8Pin);
				break;
				case PORTC:
				SET(DDRC_REG,Copy_U8Pin);
				break;
				case PORTD:
				SET(DDRD_REG,Copy_U8Pin);
				break;
				
				default:
				break;
			}
			break;
		}
		default:
		break;
	}
	
}
void DIO_VidSetPinValue(u8 Copy_U8Port , u8 Copy_U8Pin , u8 Copy_U8Val){
	switch(Copy_U8Val){
		case LOW:

			switch(Copy_U8Port){
				case PORTA:
				ClEAR(PORTA_REG,Copy_U8Pin);
				break;
				case PORTB:
				ClEAR(PORTB_REG,Copy_U8Pin);
				break;
				case PORTC:
				ClEAR(PORTC_REG,Copy_U8Pin);
				break;
				case PORTD:
				ClEAR(PORTD_REG,Copy_U8Pin);
				break;

				default:
				break;
			}
			break;

		case HIGH:

			switch(Copy_U8Port){
				case PORTA:
				SET(PORTA_REG,Copy_U8Pin);
				break;
				case PORTB:
				SET(PORTB_REG,Copy_U8Pin);
				break;
				case PORTC:
				SET(PORTC_REG,Copy_U8Pin);
				break;
				case PORTD:
				SET(PORTD_REG,Copy_U8Pin);
				break;
				
				default:
				break;
			}
			break;

		default:
		break;
	}
}

void DIO_VidSetPortDirection(u8 Copy_U8Port , u8 Copy_U8Dir){
	switch(Copy_U8Port){
		case PORTA:
		DDRA_REG=Copy_U8Dir;
		break;
		case PORTB:
		DDRB_REG=Copy_U8Dir;
		break;
		case PORTC:
		DDRC_REG=Copy_U8Dir;
		break;
		case PORTD:
		DDRD_REG=Copy_U8Dir;
		break;
		default:
		break;
	}
	
}
void DIO_VidSetPortValue(u8 Copy_U8Port , u8 Copy_U8Val){
	switch(Copy_U8Port){
		case PORTA:
		PORTA_REG=Copy_U8Val;
		break;
		case PORTB:
		PORTB_REG=Copy_U8Val;
		break;
		case PORTC:
		PORTC_REG=Copy_U8Val;
		break;
		case PORTD:
		PORTD_REG=Copy_U8Val;
		break;
		default:
		break;
}}

void DIO_VidTogglePinDirection(u8 Copy_U8Port , u8 Copy_U8Pin){
	switch(Copy_U8Port){
		case PORTA:
		TOGGLE(PORTA_REG,Copy_U8Pin);
		break;
		case PORTB:
		TOGGLE(PORTB_REG,Copy_U8Pin);
		break;
		case PORTC:
		TOGGLE(PORTC_REG,Copy_U8Pin);
		break;
		case PORTD:
		TOGGLE(PORTD_REG,Copy_U8Pin);
		break;
		default:
		break;
}
}

u8 DIO_VidGetPinValue(u8 Copy_U8Port , u8 Copy_U8Pin){
	u8 locGotten;
	switch(Copy_U8Port){
		case PORTA:
		locGotten=GET(PINA_REG,Copy_U8Pin);
		break;
		case PORTB:
		locGotten=GET(PINB_REG,Copy_U8Pin);
		break;
		case PORTC:
		locGotten=GET(PINC_REG,Copy_U8Pin);
		break;
		case PORTD:
		locGotten=GET(PIND_REG,Copy_U8Pin);
		break;
		default:
		break;
}
return locGotten;
}

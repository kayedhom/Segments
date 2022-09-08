/******************************************************/
/******************************************************/
/*****************Author: Braa Adel********************/
/*********************File: main.c*********************/
/******************Date: 2nd Sep 2022******************/
/*********************Version: V1**********************/
/***************Desc:Naming & Addresses****************/
/******************************************************/
/******************************************************/



#include <avr/delay.h>
#include"STD_TYPES.h"
#include "7segments_interface.h"

int main (){
	DIO_VidSetPortDirection(1,0b11111111);
	DIO_VidSetPortDirection(3,0b11111111);
	DIO_VidSetPortDirection(2,0b00000000);

	DIO_VidSetPortValue(2,0b00001111);
    	while(1){
    		if(DIO_VidGetPinValue(2,0)==1){

    			DIO_VidSetPortValue(1,0b00000000);
    		for(u8 i=0;i<10;i++){
    		sevSeg_VidDisplayNumber(3,i);
    			_delay_ms(300);
    		}}
    	else{

    		DIO_VidSetPortValue(3,0b00000000);
    		for(u8 i=0;i<10;i++){
    		  	sevSeg_VidDisplayNumber(1,i);
   	 			_delay_ms(300);
    		}

    	}



	//while(1){}
}}

/*--------------------------------------------------------------------*/
/* [FILE NAME]:<DIO_INTERFACE.c>
   [Author]:<Eng.Muhammad Ahmed Roshdy >
   [Date]: <02-10-2023>
   [Project]: <DIO_INTERFACE "AVR_ATmega32,ATmega32L" >
*/
/*---------------------------------------------------------------------*/
/*-------------------------*INCLUDES HERE*-----------------------------*/
#include "DIO.h"
/*function to set full 8 bits port direction out or in */
void DIO_SetPortDirection(u8 PortName_d,u8 Direction) 
{
        switch(PortName_d)
        {
        case Port_A:
            DDRA=Direction; /*set PORTA <Direction=OUTPUT "255", or INPUT "0">*/
            break;
        case Port_B:
           DDRB=Direction;/*set PORTB <Direction=OUTPUT "255", or INPUT "0">*/
            break;
        case Port_C:
            DDRC=Direction;; /*set PORTC <Direction=OUTPUT "255", or INPUT "0">*/
            break;
        case Port_D:
           DDRD=Direction; /*set PORTD <Direction=OUTPUT "255", or INPUT "0">*/
            break;
        }
}
/*function to set full 8 bits port Value low or high */
void DIO_SetPortValue(u8 PortName_s, u8 SetValue) /*hint input full 8 bits value here*/
{
	/*this for making validation check <remove comments in below to enable it
	 and make the function return it "don't forget editing header file return">
		u8 check=True;
	*/
        if (PortName_s==Port_A)
        {
            PORTA=SetValue;
        }
        else if (PortName_s==Port_B)
        {
            PORTB=SetValue;
        }
        else if (PortName_s==Port_C)
        {
            PORTC=SetValue;
        }
        else if (PortName_s==Port_D)
        {
            PORTD=SetValue;
        }
        else
        {
			/*check=False;*/
            /*WRONG INPUT*/
        }
		/*return check;*/
}

/*function to get full 8 bits port Value and sotre it in &GetValue {Pointer must to pass it by refernce } */
void DIO_GetPortValue(u8 PortName_g, u8 *GetValue)
{
        if (PortName_g==Port_A)
        {
           *GetValue=PINA;
        }
        else if (PortName_g==Port_B)
        {
           *GetValue=PINB;
        }
        else if (PortName_g==Port_C)
        {
            *GetValue=PINC;
        }
        else if (PortName_g==Port_D)
        {
            *GetValue=PIND;
        }
		else
		
		{
		   /*WRONG INPUT*/
		}
       
}
/*function to enable pull up resistors full 8 bits port*/
void DIO_EnPortPullupRes(u8 PortName)
{
	/*if you need to enable pull ups resistor you have to reset the direction of port high =0, then set the port port high=255 */
	switch(PortName)
	{
		case Port_A:
		DDRA=PortLow;		
		PORTA=PortHigh;
		break;
		case Port_B:
		DDRB=PortLow;
		PORTB=PortHigh;
		break;
		case Port_C:
		DDRC=PortLow;
		PORTC=PortHigh;
		break;
		case Port_D:
		DDRD=PortLow;
		PORTD=PortHigh;
		break;
	}
}

/*function to set specific bit direction out or in */
void DIO_SetPinDirection(u8 PortName_d ,u8 PinNum, u8 Direction)
{
    if (Direction == OUTPUT)
    {
        switch(PortName_d)
        {
            case Port_A:
            SET_BIT(DDRA,PinNum);
            break;
            case Port_B:
            SET_BIT(DDRB,PinNum);
            break;
            case Port_C:
            SET_BIT(DDRC,PinNum);
            break;
            case Port_D:
            SET_BIT(DDRD,PinNum);
            break;
        }
    }
    else if (Direction==INPUT)
    {
        switch(PortName_d)
        {
            case Port_A:
            CLR_BIT(DDRA,PinNum);
            break;
            case Port_B:
            CLR_BIT(DDRB,PinNum);
            break;
            case Port_C:
            CLR_BIT(DDRC,PinNum);
            break;
            case Port_D:
            CLR_BIT(DDRD,PinNum);
            break;
        }
    }
    else
    {
        /*Wrong input*/
    }
}

/*function to set specific bit value high or low */
void DIO_SetPinValue(u8 PortName_v ,u8 PinNum, u8 SetValue)
{
    if (SetValue==HIGH)
    {
        switch(PortName_v)
        {
        case Port_A:
            SET_BIT(PORTA,PinNum);
            break;
        case Port_B:
            SET_BIT(PORTB,PinNum);
            break;
        case Port_C:
            SET_BIT(PORTC,PinNum);
            break;
        case Port_D:
            SET_BIT(PORTD,PinNum);
            break;
        }
    }
    else if(SetValue==LOW)
    {
        switch(PortName_v)
        {
        case Port_A:
            CLR_BIT(PORTA,PinNum);
            break;
        case Port_B:
            CLR_BIT(PORTB,PinNum);
            break;
        case Port_C:
            CLR_BIT(PORTC,PinNum);
            break;
        case Port_D:
            CLR_BIT(PORTD,PinNum);
            break;
        }
    }
    else
    {
        /*wrong input*/
    }
}
/*function to get specific bit value */
void DIO_GetPinValue(u8 PortName_v ,u8 PinNum, u8 *GetValue)
{
    switch(PortName_v)
    {
        case Port_A:
        *GetValue= GET_BIT(PINA,PinNum);
        break;
        case Port_B:
        *GetValue= GET_BIT(PINB,PinNum);
        break;
        case Port_C:
        *GetValue= GET_BIT(PINC,PinNum);
        break;
        case Port_D:
        *GetValue= GET_BIT(PIND,PinNum);
        break;
    }
}

/*function to enable pull up resistor to specific bit */
void DIO_EnPinPullupRes(u8 PortName, u8 PinNum)
{
	/*if you need to enable pull ups resistor you have to reset the direction of port high =0, then set the port port high=255 */
	switch(PortName)
	{
		case Port_A:
		
		CLR_BIT(DDRA,PinNum);
		SET_BIT(PORTA,PinNum);
		
		break;
		case Port_B:
		
		CLR_BIT(DDRB,PinNum);
		SET_BIT(PORTB,PinNum);
		break;
		case Port_C:
		
		CLR_BIT(DDRC,PinNum);
		SET_BIT(PORTC,PinNum);
		break;
		case Port_D:
		CLR_BIT(DDRD,PinNum);
		SET_BIT(PORTD,PinNum);
		break;
	}
}
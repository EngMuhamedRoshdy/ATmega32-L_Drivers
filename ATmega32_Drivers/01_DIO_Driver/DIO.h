/*--------------------------------------------------------------------*/
/* [FILE NAME]:<DIO_REG_ACCESS_H_.h>
   [Author]:<Eng.Muhammad Ahmed Roshdy >
   [Date]: <02-10-2023>
   [Project]: <DIO_Reg_access.h  "AVR_ATmega32,ATmega32L" >
*/
/*---------------------------------------------------------------------*/
/*-------------------------* include guard *-----------------------------*/
#ifndef DIO_H_INCLUDED
#define DIO_H_INCLUDED
/*-------------------------*INCLUDES HERE*-----------------------------*/
#include "STDTYPE.h"
#include "UTILS.h"
#include "DIO_Reg_access.h"
/* enumeration for readable variables ports name */
typedef enum{
Port_A=0,Port_B,Port_C,Port_D, /*PORTS from 0 - 4 */
LOW=0,HIGH,  /*low and high value*/
INPUT=0,OUTPUT, /*INPUT and OUTPUT Direction*/
Pin_0=0,Pin_1,Pin_2,Pin_3,Pin_4,Pin_5,Pin_6,Pin_7, /*Pins from 0 - 7 */
PortHigh=255,
PortLow=0,
Port_output=255, 
Port_input=0
}DIO_en_t;

/*function to set full 8 bits port  */
void DIO_SetPortDirection(u8 PortName_d,u8 Direction);
void DIO_SetPortValue(u8 PortName_s, u8 SetValue);
void DIO_GetPortValue(u8 PortName_g, u8 *GetValue);
void DIO_EnPortPullupRes(u8 PortName);
/*function to set full 8 PINS port  */
void DIO_SetPinDirection(u8 PortName_d ,u8 PinNum, u8 Direction);
void DIO_SetPinValue(u8 PortName_v ,u8 PinNum, u8 SetValue);
void DIO_GetPinValue(u8 PortName_v ,u8 PinNum, u8 *GetValue);
void DIO_EnPinPullupRes(u8 PortName, u8 PinNum);

#endif /* DIO_H_INCLUDED*/

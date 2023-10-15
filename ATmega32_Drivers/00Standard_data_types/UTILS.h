/*--------------------------------------------------------------------*/
/* [FILE NAME]:<UTILS_H_.h>
   [Author]:<Eng.Muhammad Ahmed Roshdy >
   [Date]: <02-10-2023>
   [Project]: <Bits manipulation for embedded>
*/
/*---------------------------------------------------------------------*/
/*-------------------------*INCLUDES HERE*-----------------------------*/
#ifndef UTILS_H_
#define UTILS_H_

#define SET_BIT(BYTE,Bit_NO) (BYTE |= (1<<(Bit_NO)))
#define CLR_BIT(BYTE,Bit_NO) (BYTE &= ~(1<<(Bit_NO)))
#define GET_BIT(BYTE,Bit_NO) ((BYTE >> Bit_NO) & 1)
#define TOGGLE_BIT(BYTE,Bit_NO) BYTE ^=(1<<(Bit_NO))

#define NULL 0



#endif /*UTILS_H_*/

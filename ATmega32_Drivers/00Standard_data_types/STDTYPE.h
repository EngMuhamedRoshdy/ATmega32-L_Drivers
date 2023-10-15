
/*--------------------------------------------------------------------*/
/* [FILE NAME]:<STDTYPE_H.h>
   [Author]:<Eng.Muhammad Ahmed Roshdy >
   [Date]: <02-10-2023>
   [Project]: <Standard data types for embedded>
*/
/*---------------------------------------------------------------------*/
/*-------------------------*INCLUDES HERE*-----------------------------*/
#ifndef STDTYPE_H /*inclusion guard*/

#define STDTYPE_H
/*unsigned data types*/
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned int u32;
typedef unsigned long long u64;

/*signed data types*/
typedef signed char s8;
typedef signed short int s16;
typedef signed int s32;
typedef signed long long s64;

/*Fraction representation  datatypes*/
typedef float f32;
typedef double d64;
typedef enum{False=0,True}Bool_t;

#endif /*STDTYPE_H*/

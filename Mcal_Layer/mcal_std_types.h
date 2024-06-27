/* 
 * File:   mcal_std_types.h
 * Author: Yehya.H.Shehata
 *
 * Created on March 18, 2024, 9:31 PM
 */

#ifndef MCAL_STD_TYPES_H
#define	MCAL_STD_TYPES_H

/* Section : Includes */
#include "compiler.h"
#include "std_libraries.h"

/* Section : Data Type Declarations */
typedef unsigned char bool;
typedef unsigned char uint8;
typedef unsigned char Std_ReturnType;
typedef unsigned short uint16;
typedef unsigned long uint32;
typedef signed char sint8;
typedef signed short sint16;
typedef signed long sint32;
typedef float float32;

/* Section : Macro Declarations */
#define STD_HIGH       (uint8)0x01
#define STD_LOW        (uint8)0x00

#define STD_ON         (uint8)0x01
#define STD_OFF        (uint8)0x00

#define STD_ACTIVE     (uint8)0x01
#define STD_IDLE       (uint8)0x00

#define E_OK           (Std_ReturnType)0x01
#define E_NOT_OK       (Std_ReturnType)0x00

#define true           (uint8)0x01
#define false          (uint8)0x00

#define _XTAL_FREQ     (uint32)4000000 // Macro for __delay_ms() Macro Function

/* Section : Macro Functions Declarations */

/* Section : Functions Declarations */

#endif	/* MCAL_STD_TYPES_H */


/*
 * abs_Mcu.h
 *
 *  Created on: Sep 22, 2020
 *      Author: jalej
 */

#ifndef SW_ABSTRACTIONS_MCU_INC_ABS_MCU_H_
#define SW_ABSTRACTIONS_MCU_INC_ABS_MCU_H_

/*Includes*/
#include <general.h>

/*Defines*/

#define MAXMODVAL     ((int)31u)
#define MODMASK       ((int)5u)

/*Public Definitions*/
bool SetDCOValue(int dcoinput);
bool SetMODValue(int modinput);
void ClearDCOCTL(void);

/*Structs and Enums*/
typedef enum{
    DCO_0 = 0,
    DCO_1,
    DCO_2,
    DCO_3,
    DCO_4,
    DCO_5,
    DCO_6,
    DCO_7,
}dcoenum_t;

typedef enum{
    MOD_0 = 0,
    MOD_1,
    MOD_2,
    MOD_3,
    MOD_4,
    MOD_5,
    MOD_6,
    MOD_7,
}modenum_t;

#endif /* SW_ABSTRACTIONS_MCU_INC_ABS_MCU_H_ */

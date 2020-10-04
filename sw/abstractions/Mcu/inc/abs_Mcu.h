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
#define SELMMASK      ((int)6u)
#define MODMASK       ((int)5u)
#define DIVMASK       ((int)4u)
#define SELSMMASK     ((int)3u)
#define DIVSMMASK     ((int)1u)

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
    MAXDCOVAL
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
    MXMODVAL
}modenum_t;

typedef enum{
    DCOCLK_0 = 0,
    DCOCLK_1,
    XT2CLK,
    LFX1VLOCLK,
    MAXMCLKSRC
}mclksrc_t;

typedef enum{
    DIV1 = 0,
    DIV2,
    DIV4,
    DIV8,
    MAXDIVMCLK
}divmclk_t;

typedef enum{
    SMDCOCLK = 0,
    SMXT2CLK,
    MAXSMCLKSRC
}msclksrc_t;

typedef enum{
    SMDIV1 = 0,
    SMDIV2,
    SMDIV4,
    SMDIV8,
    MAXSMDIVMCLK
}smdivmclk_t;

/*Public Definitions*/
bool SetDCOValue(int dcoinput);
bool SetMODValue(int modinput);
void ClearDCOCTL(void);
void ClearBCSCTL2(void);
bool SelectMCLK(mclksrc_t input);
bool DivideMCLK(divmclk_t input);
bool SelectSMCLK(msclksrc_t input);
bool DivideSMCLK(smdivmclk_t input);

#endif /* SW_ABSTRACTIONS_MCU_INC_ABS_MCU_H_ */

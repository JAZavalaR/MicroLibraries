/*
 * Mcu.c
 *
 *  Created on: Sep 22, 2020
 *      Author: jalej
 */
#include <Mcu.h>

void ConfigureInitMCU(void)
{
    ClearDCOCTL();
    (void) SetMODValue(MOD_0);
    (void) SetDCOValue(DCO_0);

    ClearBCSCTL2();
    (void) SelectMCLK(DCOCLK_1);
    (void) DivideMCLK(DIV2);
    (void) SelectSMCLK(SMXT2CLK);
    (void) DivideSMCLK(SMDIV2);
}


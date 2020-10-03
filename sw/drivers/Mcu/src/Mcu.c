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
    (void) SetDCOValue(DCO_5);
}


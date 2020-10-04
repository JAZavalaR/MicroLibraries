/*
 * abs_Mcu.c
 *
 *  Created on: Sep 22, 2020
 *      Author: jalej
 */

#include <abs_Mcu.h>

/*Global Variables*/
int tempval = ZERO;

/*Declaration of functions*/

/**/
bool SetDCOValue(int dcoinput)
{
    bool retval = true;

    tempval = dcoinput << MODMASK;

    if((ZERO <= dcoinput) || (EIGHT > dcoinput))
    {
        DCOCTL |= tempval;
    }
    else
    {
        retval = false;
    }

    return retval;
}

/**/
bool SetMODValue(int modinput)
{
    bool retval = true;

    if((ZERO <= modinput) || (MAXMODVAL > modinput))
    {
        DCOCTL |= modinput;
    }
    else
    {
        retval = false;
    }

    return retval;
}

/**/

void ClearDCOCTL(void)
{
    DCOCTL &= ZERO;
}

/**/
void ClearBCSCTL2(void)
{
    BCSCTL2 &= ZERO;
}

/**/

bool SelectMCLK(mclksrc_t input)
{
    bool retval = true;

    int conval = input << SELMMASK;

    if((int)MAXMCLKSRC > input)
    {
        BCSCTL2 |= conval;
    }
    else
    {
        retval = false;
    }

    return retval;
}

bool DivideMCLK(divmclk_t input)
{
    bool retval = true;

    int conval = input << DIVMASK;

    if(MAXDIVMCLK > input)
    {
        BCSCTL2 |= conval;
    }
    else
    {
        retval = false;
    }

    return retval;
}

bool SelectSMCLK(msclksrc_t input)
{
    bool retval = true;

    int conval = input << SELSMMASK;

    if(MAXSMCLKSRC > input)
    {
        BCSCTL2 |= conval;
    }
    else
    {
        retval = false;
    }

    return retval;
}

bool DivideSMCLK(smdivmclk_t input)
{
    bool retval = true;

    int conval = input << DIVSMMASK;

    if(MAXSMDIVMCLK > input)
    {
        BCSCTL2 |= conval;
    }
    else
    {
        retval = false;
    }

    return retval;
}

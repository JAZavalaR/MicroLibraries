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

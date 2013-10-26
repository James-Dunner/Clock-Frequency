/**************************************************************
 * clock.c
 * Author: James Dunn
 * Created on: 23 October 2013
 * Description: Definitions of declared functions in clock.h
 *************************************************************/
#include <msp430.h>
#include "clock.h"

void setClock_1_MHz()
{
	DCOCTL &= 0;
	DCOCTL = CALDCO_1MHZ;
	BCSCTL1 = CALBC1_1MHZ;
}

void setClock_8_MHz()
{
	DCOCTL &= 0;
	DCOCTL = CALDCO_8MHZ;
	BCSCTL1 = CALBC1_8MHZ;
}

void setClock_12_MHz()
{
	DCOCTL &= 0;
	DCOCTL = CALDCO_12MHZ;
	BCSCTL1 = CALBC1_12MHZ;
}

void setClock_16_MHz()
{
	DCOCTL &= 0;
	DCOCTL = CALDCO_16MHZ;
	BCSCTL1 = CALBC1_16MHZ;
}

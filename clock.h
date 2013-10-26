/**************************************************************
 * clock.c
 * Author: James Dunn
 * Created on: 23 October 2013
 * Author: Definitions of declared functions in clock.h
 *************************************************************/
#include <msp430.h>

#ifndef CLOCK_H_
#define CLOCK_H_

/**************************************************************
 * Functions: setClock_X_MHz
 * Author: James Dunn
 * Created on: 23 October 2013
 * Description: Sets the clock to run at X MHz
 *************************************************************/
void setClock_1_MHz();
void setClock_8_MHz();
void setClock_12_MHz();
void setClock_16_MHz();

#endif /* CLOCK_H_ */

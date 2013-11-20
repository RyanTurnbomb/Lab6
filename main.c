#include <msp430.h> 
#include "moveRobot.h"

/*
 * main.c
 */
int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
	
    initPinOuts();

    timersConfig();

    leftTurn();

    rightTurn();

    moveForward();

    moveBackward();

    while(1){

    }

	return 0;
}

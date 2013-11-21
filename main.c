#include <msp430.h> 
#include "moveRobot.h"

/*
 * main.c
 */

int main(void) {
	WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer

	initPinOuts();
	timersConfig();

	while (1) {

		leftTurn();
		__delay_cycles(500000);
		rightTurn();
		__delay_cycles(500000);
		moveForward();
		__delay_cycles(2500000);
		moveBackward();
		__delay_cycles(2500000);
		leftTurn();
		__delay_cycles(1000000);
		rightTurn();
		__delay_cycles(1000000);

	}

	return 0;
}


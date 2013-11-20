#include <msp430.h> 
#include "moveRobot.h"

/*
 * main.c
 */

char timer = 0;

int main(void) {
	WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer

	initPinOuts();
	timersConfig();

	while (1) {

		moveForward();

	}

	return 0;
}



/*
 * moveRobot.c
 *
 *  Created on: Nov 19, 2013
 *      Author: C15Ryan.Turner
 */

#include "moveRobot.h"

void initPinOuts() {
	P1DIR |= BIT2;
	P1SEL |= BIT2;

	P1DIR |= BIT1;
	P2DIR |= BIT0;
	P2DIR |= BIT1;
}

void timersConfig() {
	TA0CTL &= MC1 | MC0;
	TA1CTL &= MC1 | MC0;

	TA0CTL |= TACLR;
	TA1CTL |= TACLR;

	TA0CTL |= TASSEL1;
	TA1CTL |= TASSEL1;

	TA0CCR0 = 100;   			 // set signal period to 100 clock cycles (~100 microseconds)
	TA0CCR1 = 0;

	TA1CCR0 = 100;				 // set signal period to 100 clock cycles (~100 microseconds)
	TA1CCR1 = 0;
	TA1CCR2 = 0;


	TA0CCTL1 |= OUTMOD_7;
	TA1CCTL1 |= OUTMOD_7;        // set TACCTL1 to Reset / Set mode

	TA0CTL |= MC0;
	TA1CTL |= MC0;               // count up
}

void leftMotorForward() {

}

void leftMotorBackward() {

}

void rightMotorForward() {

}

void rightMotorBackward() {

}

void leftTurn() {
	leftMotorBackward();
	rightMotorForward();
}

void rightTurn() {
	leftMotorForward();
	rightMotorBackward();
}

void moveForward() {
	leftMotorForward();
	rightMotorForward();
}

void moveBackward() {
	leftMotorBackward();
	rightMotorBackward();
}

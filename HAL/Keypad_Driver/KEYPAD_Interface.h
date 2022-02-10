/*
 * KEYPAD_int.h
 *
 *  Created on: Nov 15, 2021
 *      Author: amgdRaghed
 */

#ifndef KEYPAD_DRIVER_KEYPAD_INT_H_
#define KEYPAD_DRIVER_KEYPAD_INT_H_

ES_t KEYPAD_enumInit(void);

u8 KEYPAD_u8GetPressedKey(void);

#define KEYPAD_NO_PRESSED_KEY  	0
#define KEYPAD_CLEAR			'C'

#endif /* KEYPAD_DRIVER_KEYPAD_INT_H_ */

/*

 * Math.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Belal
 */

#include "Math.h"

#include <stdio.h>

#include "types.h"

u8 get_max(u8 t1, u8 t2, u8 t3, u8 t4) {

	u8 max;
	max = t1;
	u8 Index = USER1;
	if (t2 > max) {
		max = t2;
		Index = USER2;
	}
	if (t3 > max) {

		max = t3;
		Index = USER3;

	}
	if (t4 > max) {

		max = t4;
		Index = USER4;

	}

	printf("Loading ... \n");
	printf("Calculating looser\n");

	return Index;
}

u8 get_min(u8 t1, u8 t2, u8 t3, u8 t4) {

	u8 min;
	min = t1;
	u8 Index = USER1;
	if (t2 < min) {
		min = t2;
		Index = USER2;
	}
	if (t3 < min) {

		min = t3;
		Index = USER3;

	}
	if (t4 < min) {

		min = t4;
		Index = USER4;

	}
	printf("Loading ... \n");
	printf("Calculating winner\n");

	return Index;
}

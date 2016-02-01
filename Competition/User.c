/*
 * User.c

 *
 *  Created on: ??þ/??þ/????
 *      Author: Belal
 */

#include "User.h"

#include "types.h"

u8 user1_pts;
u8 user2_pts;
u8 user3_pts;
u8 user4_pts;
void Initialize(void) {
	user1_pts = InitPts;
	user2_pts = InitPts;
	user3_pts = InitPts;
	user4_pts = InitPts;

	return;
}
void Inc(u8 Index) {

	switch (Index) {
	case USER1:
		user1_pts++;
		break;
	case USER2:
		user2_pts++;
		break;
	case USER3:
		user3_pts++;
		break;
	case USER4:
		user4_pts++;
		break;

	}

}

u8 Dec(u8 Index) {

	u8 ReturnValue = 1;
	switch (Index) {
	case USER1:
		user1_pts--;
		if (user1_pts == 0)
			ReturnValue = 0;
		break;
	case USER2:
		user2_pts--;
		if (user2_pts == 0)
			ReturnValue = 0;
		break;
	case USER3:
		user3_pts--;
		if (user3_pts == 0)
			ReturnValue = 0;
		break;
	case USER4:
		user4_pts--;
		if (user4_pts == 0)
			ReturnValue = 0;
		break;
	}

	return ReturnValue;

}
u8 getWinner(void) {
	u8 winnerPts, winner;
	winnerPts = user1_pts;
	winner = USER1;

	if (user2_pts > winnerPts) {
		winnerPts = user2_pts;
		winner = USER2;
	}

	if (user3_pts > winnerPts) {
		winnerPts = user3_pts;
		winner = USER3;
	}
	if (user4_pts > winnerPts) {
		winnerPts = user4_pts;
		winner = USER4;
	}
	return winner;

}

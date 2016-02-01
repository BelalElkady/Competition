/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Belal
 */

#include <stdio.h>
#include <conio.h>
#include "Math.h"
#include "types.h"
#include "User.h"

void main(void) {

	u32 t1, t2, t3, t4, looser;
//ay7aga
	Initialize();

	while (1) {
		printf("Enter users timings  \n");
	fflush(stdout);
		printf("Enter t1 : \n");
		fflush(stdout);
	    scanf("%d",&t1);
		printf("Enter t2 : \n");
 		fflush(stdout);
	    scanf("%d",&t2);
		printf("Enter t3 : \n");
		fflush(stdout);
		 scanf("%d",&t3);
		printf("Enter t4 : \n");
		fflush(stdout);
		 scanf("%d",&t4);

		Inc(get_min(t1,t2,t3,t4));
		looser = get_max(t1,t2,t3,t4);

		if (!Dec(looser)) {

			printf("the looser is : %d\n",looser);
			printf("the winner is : %d",getWinner());

			break;
		}
	}

	return;

}

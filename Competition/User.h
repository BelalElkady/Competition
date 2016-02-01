/*
 * User.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: Belal
 */

#ifndef _USER_H_
#define _USER_H_

#include "types.h"

/*******************************************************/
/*******************Macros******************************/
/*******************************************************/
/*Comment!: initial number of points for each user*/
#define InitPts 5
/*Comment!: the first User Index     */
#define USER1 1
/*Comment!: the second User Index     */
#define USER2 2
/*Comment!: the third User Index     */
#define USER3 3
/*Comment!: the fourth User Index     */
#define USER4 4
/*******************************************************/
/*******************Prototypes******************************/
/*******************************************************/

/*Comment!: give each user the intial number of points    */
void Initialize(void);

/*Comment!: increment the number of points for the user that has the minimum time */
void Inc(u8 Index);

/*Comment!: decrement the number of points for the user that has the maximum time
 * and return (0) if this user reached to zero
 *  */
u8 Dec(u8 Index);

/*Comment!: this function returns the index of winner */

u8 getWinner(void);

#endif /* USER_H_ */

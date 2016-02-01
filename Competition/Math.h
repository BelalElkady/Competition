/*

 * Math.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: Belal
 */

#ifndef _MATH_H_
#define _MATH_H_

#include "types.h"

/*******************************************************/
/*******************Macros******************************/
/*******************************************************/
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

/*Comment!: this function returns the index of user
 *  that has maximum time
 */

u8 get_max(u8 t1, u8 t2, u8 t3, u8 t4);

/*Comment!: this function returns the index of user
 *  that has minimum time
 */
u8 get_min(u8 t1, u8 t2, u8 t3, u8 t4);

#endif /* USER_H_ */


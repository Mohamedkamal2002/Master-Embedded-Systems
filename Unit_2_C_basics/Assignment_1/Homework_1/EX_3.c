/*

 * EX_3.c

 *
 *  Created on: Jul 31, 2022
 *      Author: Mhmd kamal
 */
# include "stdio.h"
# include "stdlib.h"
int main (){
	int x,y;
	printf("Enter two integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d%d",&x,&y);

	printf("sum: %d",(x+y));/*printing the output */

	return 0;
}


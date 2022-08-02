/*

 * EX_4.c
 *
 *  Created on: Jul 31, 2022
 *      Author: Mhmd kamal
 *
 */
# include "stdio.h"
# include "stdlib.h"
int main (){
	float x,y;
	printf("Enter two numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f%f",&x,&y); /*inputs */

	printf("Product: %f",(x*y));/*printing the output */

	return 0;
}



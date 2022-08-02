/*

 * EX_4.c: take a number from user and check whether that number is +ve or -ve or zero
 *
 *  Created on: Aug 1, 2022
 *      Author: Mhmd kamal
 */
#include "stdio.h"
int main()
{
	float x;
	printf("Enter an alphabet: ");
	fflush(stdout);
	scanf("%f",&x);

    if(x>0)
       printf("%f is positive",x);
    else if(x<0)
	   printf("%f is negative",x);
    else
    	printf("the number is zero");
}

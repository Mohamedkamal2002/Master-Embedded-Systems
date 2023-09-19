/*
 * EX_1.c
 *
 *  Created on: Aug 20, 2023
 *      Author: Mhmd
 *
 */

#include "stdio.h"

int main()
{
	int *ab,m ;
	m = 29;
	printf("Address of m: %p",&m);
	printf("\nValue of m: %d",m);
	ab = &m;
	printf("\r\nNow ab is assigned with the address of m.");
	printf("\nAddress of pointer ab : %p",ab);
	printf("\nContent of ab : %d",*ab);

	m = 34;
	printf("\r\nThe value of m assigned to 34 now.");
	printf("\nAddress of pointer ab : %p",ab);
	printf("\nContent of ab : %d",*ab);

	*ab = 7;
	printf("\r\nThe pointer variable ab is assigned with the value 7 now.");
	printf("\nAddress of m: %p",&m);
	printf("\nValue of m: %d",m);
	return (0);
}

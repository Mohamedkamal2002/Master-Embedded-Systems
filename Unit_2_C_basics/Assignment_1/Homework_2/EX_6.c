/*

 * EX_6.c: sum of natural number from 1 to n(number taken from the user)
 *
 *  Created on: Aug 1, 2022
 *      Author: Mhmd kamal
 */

#include "stdio.h"
#include "stdlib.h"
int main()
{
	int n;
 	printf("Enter a natural number: ");
 	fflush(stdout);
 	scanf("%d",&n);

 	printf("Sum: %d",n*(n+1)/2 );

}



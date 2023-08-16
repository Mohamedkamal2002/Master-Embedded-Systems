/*
 * EX_5.c
 *
 *  Created on: Aug 16, 2023
 *      Author: Mhmd
 */
#include "stdio.h"
#define PI  3.14159265
#define AREA(r)  (PI*(r)*(r))

int main()
{
	float r;

	printf("Enter radius value: ");
	fflush(stdout);scanf("%f",&r);
	printf("Area = %f",AREA(r));
	return (0);
}

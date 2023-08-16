/*

 * EX3.c
 *
 *  Created on: Aug 16, 2023
 *      Author: Mhmd
 */

#include "stdio.h"
typedef struct ScompNum
{
	float real;
	float img;
}complex;

int main()
{
	complex num1,num2;
	printf("For the 1st complex number\n");
	printf("Enter the real and imaginary respectively: ");
	fflush(stdout);scanf("%f%f",&num1.real,&num1.img);
	printf("\nFor the 1st complex number\n");
	printf("Enter the real and imaginary respectively: ");
	fflush(stdout);scanf("%f%f",&num2.real,&num2.img);

	printf("Sum = %.1f + %.1f i",(num1.real+num2.real),(num1.img+num2.img));
	return (0);
}

/*

 * EX_7.c
 *
 *  Created on: Jul 31, 2022
 *      Author: Mhmd kamal
 */
# include "stdio.h"
int main(){

	float a,b;
	printf("Enter the value of a :");
	fflush(stdout);
	scanf("%f",&a);
	printf("Enter the value of b :");
	fflush(stdout);
	scanf("%f",&b);
	a = a+b;
	b = a-b;
	a = a-b;

	printf("The value of \"a\" after swapping : %f\r\n",a);
	printf("The value of \"b\" after swapping : %f",b);
}


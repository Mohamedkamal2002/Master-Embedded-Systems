/*

 * EX_6.c
 *
 *  Created on: Jul 31, 2022
 *      Author: Mhmd kamal
 */
# include "stdio.h"
int main(){

	float a,b,temp;
	printf("Enter the value of a :");
	fflush(stdout);
	scanf("%f",&a);
	printf("Enter the value of b :");
	fflush(stdout);
	scanf("%f",&b);
	temp=a;
	a=b;
	b= temp;
	printf("The value of \"a\" after swapping : %f\r\n",a);
	printf("The value of \"b\" after swapping : %f",b);
	return 0;
}


/*

 * EX_4.c
 *
 *  Created on: Sep 7, 2022
 *      Author: Mhmd kamal
 */

# include "stdio.h"
float expon(float base,int power);
int main()
{
float base,res;int power;
	printf("Enter the base number: ");
	fflush(stdout);
	scanf("%f",&base);
	printf("Enter the power number(positive integer): ");
	fflush(stdout);
	scanf("%d",&power);
	res= expon( base, power);
	printf("%0.2f",res);
return 0;
}
float expon(float base,int power)

{
int mult=1;
	if(power>=1)
	{   	power--;
	    mult= base*expon( base, power) ;
	}

   return mult;
}

/*

 * EX_7.c: Find the factorial
 *
 *  Created on: Aug 1, 2022
 *      Author: Mhmd kamal
 */
#include"stdio.h"

int main()
{
	int i,x,fact=1;

    printf("Enter an integer: ");
    fflush(stdout);
    scanf("%d",&x);

    /*check if x is +ve,-ve or zero*/
    if(x>0)
    {
    	for(i=x;i>0;i--)
    	fact= fact*i;
    	printf("Factorial: %d",fact);
    }
    else if(x<0)
    	printf("factorial is not existed");
    else
    	printf("Factorial: 1");
    return 0;
}


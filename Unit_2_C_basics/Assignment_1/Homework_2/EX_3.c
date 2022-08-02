/*
 * EX_3
.c
 *
 *  Created on: Aug 1, 2022
 *      Author: Mhmd kamal
 */
/*
 * Program to print the largest number among three numbers.
 * */
# include "stdio.h"
int main()
{
	float x,y,z;
    printf("Enter three numbers: ");
    fflush(stdout);
    scanf("%f%f%f",&x,&y,&z);

    if (x>y)
    {
    	if (x>z)
    	{
    		printf("%f is the largest number",x);

    	}
    	else
    	{
    		printf("%f is the largest number",z);
    	}

    }
    else if(y>z)
    {
    	printf("%f is the largest number",y);
    }
    else
    {
    	printf("%f is the largest number",z);
    }
	return 0;
}

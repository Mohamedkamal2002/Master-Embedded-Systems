/*
 * EX_2.c
 *
 *  Created on: Aug 26, 2022
 *      Author: Mhmd kamal
 */


# include "stdio.h"

int main ()
{
	int n,i;                                        /* number of data*/
	printf("Enter the number of data: ");
	fflush(stdout);
	scanf("%d",&n);

	float sum= 0,array[n];                             /* array of size n*/

	for(i=0 ;i<n ; i++ )
	{
		printf("Enter the data: ");
		fflush(stdout);
		scanf("%f",&array[i]);                  /* take data from user*/
		sum += array[i] ;                          /* calc the sum */
	}

	printf("The average is: %f",sum/n);




	return 0;
}

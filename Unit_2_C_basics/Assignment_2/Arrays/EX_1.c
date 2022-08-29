/*

 * EX_1.c:add two matrices 2*2
 *
 *  Created on: Aug 21, 2022
 *      Author: mhmd kamal
 */

# include "stdio.h"

int main()
{
	int k,j;
	float matrix_1[2][2],matrix_2[2][2];

	printf("Enter the elements of the first matrix\r\n");
	for(j=0;j<2;j++)
	{
		for(k=0;k<2;k++)
		{   printf("Enter a%d%d :",j+1,k+1);      /* get the elements of first matrix*/
		fflush(stdout);fflush(stdin);
		scanf("%f",&matrix_1[j][k]);
		}

	}

	printf("Enter the elements of the second matrix \r\n");
	for(j=0;j<2;j++)
	{
		for(k=0;k<2;k++)                                /* get the elements of second matrix*/
		{
			printf("Enter b%d%d :",j+1,k+1);
			fflush(stdout);fflush(stdin);

			scanf("%f",&matrix_2[j][k]);

		}
	}
	printf("The sum of matrices\r\n ");
	for(j=0;j<2;j++)
	{
		for(k=0;k<2;k++)
		{
			printf("%f\t",matrix_1[j][k]+matrix_2[j][k]);         /* print the sum*/
		}
		printf("\r\n");
	}

	return 0;
}

/*

 * EX_3.c
 *
 *  Created on: Aug 26, 2022
 *      Author: Mhmd kamal
 */
# include "stdio.h"
int main()
{
	int j,k,raw,column;
	printf("Enter the number of raw and column: ");
	fflush(stdout);fflush(stdin);
	scanf("%d%d",&raw,&column);
	float matrix[raw-1][column-1],transMatrix[column-1][raw-1];

	for(j=0;j<raw;j++)
	{
		for(k=0;k<column;k++)
		{
			printf("Enter the element a%d%d: ",j+1,k+1);
			fflush(stdout);fflush(stdin);
			scanf("%f",&matrix[j][k]);
			transMatrix[k][j]=matrix[j][k];
		}

	}
	printf("Entered matrix:\r\n");
	for(j=0;j<raw;j++)
	{
		for(k=0;k<column;k++)
		{

			printf("%0.2f\t",matrix[j][k]);
		}
		printf("\r\n");
	}
	printf("Transpose of matrix:\r\n");
	for(k=0;k<column;k++)
	{
		for(j=0;j<raw;j++)
		{

			printf("%0.2f\t",transMatrix[j][k]);
		}
		printf("\r\n");
	}
	return 0;
}


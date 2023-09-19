/*
 * EX_4.c
 *
 *  Created on: Sep 19, 2023
 *      Author: Mhmd
 */


#include "stdio.h"

int main()
{
	int arr[15];
	int n,i;
	int *ptr;


	printf("Enter the number of elements in array (max 15): ");
	fflush(stdout);scanf("%d", &n);
	ptr = arr + n-1;
	for (i = 0 ; i < n ;i++)
	{
		printf("Elemet - %d : ", i+1);
		fflush(stdout);scanf("%d",&arr[i]);
	}

	for(; i > 0 ; i--)
		printf("\nElement - %d : %d", i , (int)(*ptr--));

	return (0);
}

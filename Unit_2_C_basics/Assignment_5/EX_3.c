/*
 * EX_3.c
 *
 *  Created on: Sep 19, 2023
 *      Author: Mhmd
 */

#include "stdio.h"

int main()
{
	char arr[50];
	char *ptr = NULL;
	int i,k ;
	printf("Pointer : Print a string in reverse order :\n");
	printf("------------------------------------------");
	printf("\nInput string: ");
	fflush(stdout);scanf("%s", arr);
	for( i = 0 ; i<sizeof(arr); i++)
		if(arr[i] == NULL)
		{
			ptr = &arr[i-1];
			break;
		}
	printf("Reverse of string: ");
	for(k = i ; k > 0 ; k--)
		printf("%c", *ptr--);
	return (0);
}

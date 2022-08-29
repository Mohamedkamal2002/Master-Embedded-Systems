/*

 * EX_4.c
 *
 *  Created on: Aug 26, 2022
 *      Author: lenovo
 */
#include "stdio.h"
int main()
{

	int i,n,insElm,loc;
	printf("Enter the number of element: ");
	fflush(stdout);
	scanf("%d",&n);
	int array[n+1];
	for(i=0;i<n;i++)
	{
		array[i]=i+1;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
	}
	printf("\r\nEnter the inserted element: ");
	fflush(stdout);
	scanf("%d",&insElm);
	printf("Enter the location: ");
	fflush(stdout);
	scanf("%d",&loc);

	for(i=n ; i>(loc-1);i--)
	{
		array[i]=array[i-1];
	}
    array[loc-1] = insElm;
	for(i=0;i<=n;i++)
	{
		printf("%d\t",array[i]);
	}

return 0;
}


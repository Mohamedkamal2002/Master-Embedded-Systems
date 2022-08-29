/*

 * EX_5.c: search an element in array

 *
 *  Created on: Aug 28, 2022
 *      Author: Mhmd kamal
 */

# include "stdio.h"
int main()
{
	int i,n,elm ;
	printf("Enter the number of element: ");
	fflush (stdout);
	scanf("%d",&n);
	int array[n];
	for(i=0;i<n;i++)
	{
		array[i]= (i+1)*11;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
	}
	printf("\r\nEnter the element to be searched: ");
	fflush(stdout);
	scanf("%d",&elm);
	i=0;
	while(i<n)
	{
		if(array[i]==elm)
		{
		printf("Found at location %d",i+1);
		break;
		}
		i++;
	}
	if(i==n-1)
		printf("Not Found");

return 0;
}

/*

 * EX_1.c
 *
 *  Created on: Aug 28, 2022
 *      Author: Mhmd kamal
 */
#include "stdio.h"

int main()
{
	int count=0,i=0;

	char chr,string[100];
	printf("Enter string: ");
	fflush(stdout);
	gets(string);
	printf("Enter the character:");
	fflush(stdout);
	scanf("%c",&chr);
	while(string[i]!='\0')
	{
		if(string[i]==chr)
			count++;
		i++;
	}
	printf("Frequency of %c: %d",chr,count);
	return 0;
}


/*

 * EX_3.c
 *
 *  Created on: Aug 28, 2022
 *      Author: Mhmd kamal
 */

# include "stdio.h"
#include "string.h"
int main()
{
	int i,length;
	char string[50],revstring[50];
	printf("Enter string : ");
	fflush(stdout);
	gets(string);
	length = strlen(string);
	for(i=0;i<length;i++)
	{
		revstring[i]=string[length-i-1];
	}

	printf("%s\r\n",string);
	printf("%s",revstring);
	return 0;
}


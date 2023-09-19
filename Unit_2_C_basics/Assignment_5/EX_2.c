/*
 * EX_2.c
 *
 *  Created on: Sep 19, 2023
 *      Author: Mhmd
 */

#include "stdio.h"

int main()
{
	char x ='A';
	char *ptr;
	ptr = &x;
	char i;

	for(i = 0 ; i < 26; i++)
	{
		printf("%c ",(char)(*ptr+(char*)i));
	}
	return (0);
}

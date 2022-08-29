/*

 * EX_2.c
 *
 *  Created on: Aug 28, 2022
 *      Author: Mhmd kamal
 */

# include"stdio.h"

int main()
{
    int length;
	char string[100];
	printf("Enter string: ");
	fflush(stdout);
	gets(string);
	while(string[length]!='\0')
	{

		length++;
	}

	printf("Length of string = %d",length);

return 0;
}

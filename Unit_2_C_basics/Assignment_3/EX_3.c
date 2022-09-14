/*

 * EX_3.c
 *
 *  Created on: Sep 7, 2022
 *      Author: Mhmd kamal
 */


#include "stdio.h"
void RevString();
int main()
{
	printf("Enter a sentence:");
	fflush(stdout);
	RevString();

	return 0;
}
void RevString()
{
	char s;
	scanf("%c",&s);
	if(s != '\n')
	{
		RevString();
		printf("%c",s);
	}

}


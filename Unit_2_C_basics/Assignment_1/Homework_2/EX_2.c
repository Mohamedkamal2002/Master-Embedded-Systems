/*
 *

EX_2.c
 *
 *  Created on: Aug 1, 2022
 *      Author: Mhmd kamal
 */
/*
 * check the vowel and consonant alphabet
 * */
#include "stdio.h"
int main()
{
	char x;
	printf("Enter an alphabet: ");
	fflush(stdout);
	scanf("%c",&x);
	switch (x)
	{
	case'a':
	case'e':
	case'i':
	case'o':
	case'A':
	case'E':
	case'I':
	case'O':
	{
		printf("%c is a vowel",x);

	}
	break;


	default:
	printf("%c is a consonant",x);
    break;

}




}


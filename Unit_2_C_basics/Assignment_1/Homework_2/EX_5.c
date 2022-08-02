/*


 * EX_5.c: check whether the character is an alphabet
 *
 *
 *  Created on: Aug 1, 2022
 *      Author: Mhmd kamal
 */
#include "stdio.h"

int main()
{
 char x;
  printf("Enter the character: " );
  fflush(stdout);
  scanf("%c",&x);
if(x>='A'&& x<='z')
	printf("%c is an alphabet",x);
else
	printf("%c is not an alphabet",x);


}

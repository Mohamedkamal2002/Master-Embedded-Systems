/*


 * EX_1.c: check if number is odd or even.
 *
 *  Created on: Aug 1, 2022
 *      Author: Mhmd kamal
 */


# include "stdio.h"
int main()
{
printf("Please,enter the number: ");
int x;
fflush(stdout);
scanf("%d",&x);

if(x%2 == 0)
	printf("%d is even",x);
else
	printf("%d is odd",x);

return 0;
}

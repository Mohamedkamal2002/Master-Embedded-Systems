/*
 * EX_2.c: factorial using recursion.
 *
 *  Created on: Sep 7, 2022
 *      Author: Mhmd kamal
 */

# include "stdio.h"
int fact(int n);
int main()
{
	int res, n;
  printf("Enter a positive integer: ");
  fflush(stdout);
  scanf("%d",&n);
  res=fact(n);
  printf("%d",res);
return 0;
}

int fact(int num)
{
int mult =num;
if (num>1)

mult= mult *fact(num-1);
else
	return 1;
return mult;

}

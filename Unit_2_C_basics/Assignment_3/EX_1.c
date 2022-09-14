/*
 * EX_1.c
 *
 *  Created on: Aug 29, 2022
 *      Author: Mhmd kamal
 */

# include "stdio.h"
void primeNum(int n1,int n2);
int main()
{
	int n1,n2;
	printf("Enter two numbers (interval):");
	fflush(stdout);
	scanf("%d%d",&n1,&n2);
	primeNum(n1,n2);

	return 0;
}
void primeNum(int n1,int n2)
{
	int i,j,temp,pos=-1;
	if(n1>n2)
	{
		temp=n2;n2=n1;n1=temp;        /*if n1 >n2 swap them*/
	}
	int prime[n2];
	int flag =0;
	if(n2%2==0) /* prime numbers can't be even */
        n2--;
		for(j=(n2); j>=n1 ;j-=2 )
		{                           /*
		* the upper loop counter is the odd numbers in the interval
		* the lower loop counter is all the odd numbers less than the greatest boundary of interval which represent all possible divisors to
		* the upper loop*/

			for(i=j-2; i>1 ;i=i-2 )
			{
				if(j%i==0)
					flag=1;   /* if the number is divisible change the flag to show that the number is not prime*/
			}
			if(flag==0)
			{
					pos++;
					prime[pos]=j;
			}
			flag=0;
		}

	if(n1<=2 && n2>=2)
	{
		pos++;
		prime[pos]=2;
	}

	if(pos>-1)
	for(i=0 ;i<=pos;i++)
		printf("%d\t",prime[i]);
	else
	printf("There is no prime numbers");

}

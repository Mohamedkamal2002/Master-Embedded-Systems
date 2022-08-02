/*

 * EX8.c:simple calculator
 *
 *  Created on: Aug 1, 2022
 *      Author: Mhmd kamal
 */
# include "stdio.h"
int main()
{

	float x,y;
	char operator;

    printf("Enter the operator \'+ , - , * or /\': ");
    fflush(stdout);
    scanf("%c",&operator);
    printf("Enter the two operands: ");
    fflush(stdout);

    scanf("%f ",&x);
    fflush(stdout);
    scanf("%f",&y);
    switch (operator)
    {
     case '+':
     {
    	printf("%f + %f =%lf",x,y,x+y);
     }
    break;
    case '-':

    	printf("%f - %f =%f",x,y,x-y);
    break;
    case '*':
    	printf("%f * %f =%lf",x, y ,(x*y));
    break;
    case '/':
    	printf("%f / %f =%lf",x, y ,(x/y));
    break;

    }
}




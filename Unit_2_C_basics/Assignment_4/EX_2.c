/*

 * EX_2.c
 *
 *  Created on: Aug 15, 2023
 *      Author: Mhmd
 */
#include "stdio.h"
#include "stdlib.h"
typedef struct Sdistance_FI
{
	float feet;
	float inches;
}dist;

void calc_sum(float ft1, float ft2, float inch1 , float inch2 , int* ft_sum , float* inch_sum)
{
	float tot_cm = (ft1+ft2) * 30.48 + (inch1 + inch2)* 2.54;
	*ft_sum = tot_cm/30.48;
	*inch_sum = (tot_cm - *ft_sum * 30.48) /2.54;
}
int main()
{
	dist dist1,dist2;
	float *in_sum = malloc(4);
	int *ft_sum = malloc(4);

	printf("Enter information of 1st distance:\n");
	printf("Feet: ");
	fflush(stdout);scanf("%f",&dist1.feet);
	printf("inches: ");
	fflush(stdout);scanf("%f",&dist1.inches);
	printf("\nEnter information of 2st distance:\n");
	printf("Feet: ");
	fflush(stdout);scanf("%f",&dist2.feet);
	printf("inches: ");
	fflush(stdout);scanf("%f",&dist2.inches);

	calc_sum(dist1.feet, dist2.feet, dist1.inches, dist2.inches, ft_sum, in_sum);
	printf("Sum of distance = %d\' - %-.1f\"",*ft_sum,((int)(*in_sum * 10))/10.0);
	return (0);
}

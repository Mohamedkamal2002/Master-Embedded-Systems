/*
 * EX_5.c
 *
 *  Created on: Sep 19, 2023
 *      Author: Mhmd
 */


#include "stdio.h"

struct employee
{
	char *empname;
	int empid;
};

int main()
{

	static struct  employee emp1 = {"Alex", 1002}, emp2={"sara", 1003};
	struct employee (*arr[]) = {&emp1, &emp2};
	struct employee (*(*ptremp)[2]) = &arr;

	printf("Employee name: %s",(**(*ptremp)).empname);
	printf("\nEmployee id: %d",(*(*ptremp))->empid);
	return (0);
}

/*
 * EX_4.c
 *
 *  Created on: Aug 16, 2023
 *      Author: Mhmd
 */

#include "stdio.h"
typedef struct student_info
{
	char name[20];
	int roll;
	float marks;
}student;

int main()
{
	student studentList[10];
	int i;

	printf("Enter Information of Students:\n");
	for(i = 0 ; i<10 ; i++)
	{
		studentList[i].roll = i +1;
		printf("\nFor roll the number%d\n",studentList[i].roll);
		printf("Enter student name: ");
		fflush(stdout);scanf("%s",studentList[i].name);

		printf("Enter student marks: ");
		fflush(stdout);scanf("%f", &studentList[i].marks);
	}

	printf("\nDisplaying Informations:\n");
	for(i=0 ; i< 10 ; i++)
	{
		printf("Information for roll number%d:\n", studentList[i].roll);
		printf("Name: %s\n", studentList[i].name);
		printf("Marks: %.2f\n", studentList[i].marks);
	}
	return (0);
}





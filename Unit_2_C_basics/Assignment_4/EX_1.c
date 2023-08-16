/*
 * EX_1.c
 *
 *  Created on: Aug 15, 2023
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
	student student1;
	fflush(stdout);
	printf("Enter Information of Students:\n\n");

	printf("Enter student name: ");
	fflush(stdout);gets(student1.name);

    printf("Enter student roll:");
    fflush(stdout);scanf("%d", &student1.roll);

	printf("Enter student marks: ");
	fflush(stdout);scanf("%f", &student1.marks);


	printf("\nDisplaying Informations:\n");
	printf("Name: %s\n", student1.name);
	printf("Roll: %d\n", student1.roll);
	printf("Marks: %.2f", student1.marks);

	return (0);
}


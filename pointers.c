#include <stdio.h>
#include <stdlib.h>

int main()
{
	int age = 30;
	int *pAge = &age;
	double gpa = 3.4;
	double *pGpa = &gpa;
	char grade = 'A';
	char *pGrade = &grade;

	/* print the memory address */
	printf("%p\n", pGrade);
	/* print the actual value by adding an * */
	printf("%d\n", *pGrade);

	/* But you can get the memory again with & */
	printf("%p\n", &*pGrade);

	/* And you can combine these two as much as you want */
	printf("%d\n", *&*&*&*&*pGrade);

	return 0;
}
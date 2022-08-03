#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int age = 30;
	int *pAge = &age;
	double gpa = 3.4;
	double *pGpa = &gpa;
	char grade = 'A';
	char *pGrade = &grade;

	/* print the memory address */
	printf("%p\n", pAge);
	/* print the actual value by adding an * */
	printf("%d\n", *pAge);

	/* But you can get the memory again with & */
	printf("%p\n", &*pAge);

	/* And you can combine these two as much as you want */
	printf("%d\n", *&*&*&*&*pAge);

	return 0;
}
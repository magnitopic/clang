#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
	char name[50];
	char major[50];
	int age;
	int avMark;
};

int main()
{
	struct Student student1;
	struct Student student2;

	strcpy(student1.name, "Alex");
	strcpy(student1.major, "Computer Science");
	student1.age = 18;
	student1.avMark = 7;

	strcpy(student2.name, "Dave");
	strcpy(student2.major, "Finance");
	student2.age = 23;
	student2.avMark = 9;

	printf("%s\n", student1.name);
	printf("%s\n", student2.name);
	return 0;
}
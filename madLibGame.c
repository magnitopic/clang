#include <stdio.h>

int main(void)
{
	char color[20];
	char noun[20];
	char lovedone[20];

	printf("Enter a color: ");
	scanf("%s", color);
	printf("Enter a plural noun: ");
	scanf("%s", noun);
	printf("Enter a loved one's name: ");
	scanf("%s", lovedone);

	printf("\nRoses are %s\n", color);
	printf("%s are blue\n", noun);
	printf("I love %s\n", lovedone);
	return 0;
}

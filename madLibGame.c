#include <stdio.h>

int main()
{
	char color[20];
	char noun[20];
	char celebrety[20];

	printf("Enter a color: ");
	scanf("%s", color);
	printf("Enter a plural noun: ");
	scanf("%s", noun);
	printf("Enter a celebrety's name: ");
	scanf("%s", celebrety);

	printf("\nRoses are %s\n", color);
	printf("%s are blue\n", noun);
	printf("I love %s\n", celebrety);
	return 0;
}

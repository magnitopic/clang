#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int index = 1;
	while (index <= 7)
	{
		printf("%d\n", index);
		index++;
	}

	printf("______________");

	index = 1;
	do
	{
		printf("%d\n", index);
		index++;
	} while (index <= 5);
	return 0;
}
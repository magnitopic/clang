#include <stdio.h>
#include <stdlib.h>

int main()
{

	char line[255];
	FILE *fpointer = fopen("test.txt", "r");

	for (int i = 0; i <= 4; i++)
	{
		fgets(line, 255, fpointer);
		printf("%s", line);
	}

	return 0;
}

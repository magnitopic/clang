#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int luckyNumbers[] = {2, 4, 8, 16, 32, 64, 128, 256};
	for (int i = 0; i < sizeof(luckyNumbers) / sizeof(luckyNumbers[i]); i++)
	{
		printf("%d\n", luckyNumbers[i]);
	}
	return 0;
}
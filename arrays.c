#include <stdio.h>

int main()
{
	int luckyNumbers[3];
	luckyNumbers[2] = 3;
	printf("%d\n", luckyNumbers[2]); 
	luckyNumbers[1] = 2;
	printf("%d\n", luckyNumbers[1]);
	luckyNumbers[0] = 1;
	printf("%d\n", luckyNumbers[0]);
	return 0;
}
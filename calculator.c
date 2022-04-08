#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1;
	int num2;
	printf("Give me the first number: ");
	/* scanf("%d", &num1); */
	printf("Give me the second number: ");
	scanf("%d", &num2);
	printf("Answer: %d", num1 + num2);
	return 0;
}
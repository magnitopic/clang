#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double num1;
	double num2;
	printf("Give me the first number: ");
	scanf("%lf", &num1);
	printf("Give me the second number: ");
	scanf("%lf", &num2);
	printf("Answer: %lf\n", num1 + num2);
	return 0;
}
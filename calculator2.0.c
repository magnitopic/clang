#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double num1;
	double num2;
	char op;

	printf("Give me the first number: ");
	scanf("%lf", &num1);
	printf("Enter an operator: ");
	scanf(" %c", &op);
	printf("Give me the second number: ");
	scanf("%lf", &num2);

	if (op == '+')
	{
		printf("%f\n", num1 + num2);
	}
	else if (op == '-')
	{
		printf("%f\n", num1 - num2);
	}
	else if (op == '*')
	{
		printf("%f\n", num1 * num2);
	}
	else if (op == '/')
	{
		printf("%f\n", num1 / num2);
	}
	else
	{
		printf("Invalid operator.\n");
	}
	return 0;
}
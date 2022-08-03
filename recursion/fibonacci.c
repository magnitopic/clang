#include <stdio.h>

int	fibonacci(int num)
{
	if (num <= 0)
		return (0);
	if (num == 1)
		return (1);
	return (fibonacci(num - 1) + fibonacci(num - 2));
}

int	main(void)
{
	for (int i = 42; i >= 0; i--)
		printf("%d: %d\n", i, fibonacci(i));
	return (0);
}
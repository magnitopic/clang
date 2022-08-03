#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int a = 0, b = 1;
	for (int i = 1; i <= 42; i++)
	{
		printf("%d: %d\n", i, a);
		a = a + b;
		b = a - b;
	}

	return 0;
}
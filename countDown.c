#include <stdio.h>

void	countdown(int n)
{
	if (n > 0)
	{
		printf("%d\n", n);
		countdown(n - 1);
	}
	else
		printf("See you space cowboy...\n");
}

void	countdown_improved(int n)
{
	if (n == 0)
		printf("See you space cowboy...\n");
	else
	{
		printf("%d\n", n);
		countdown_improved(n - 1);
	}
}

int	main(void)
{
	countdown(5);
	countdown_improved(5);
	return (0);
}
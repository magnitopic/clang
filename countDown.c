#include <unistd.h>

void	countdown(int n)
{
	char	c;

	if (n > 0)
	{
		c = n + '0';
		write(1, &c, 1);
		write(1, "\n", 1);
		n--;
		countdown(n);
	}
	else
		write(1, "See you space cowboy!\n", 22);
}

void	countdown_improved(int n)
{
	char	c;

	if (n == 0)
		write(1, "See you space cowboy!\n", 22);
	else
	{
		c = n + '0';
		write(1, &c, 1);
		write(1, "\n", 1);
		n--;
		countdown_improved(n);
	}
}

int	main(void)
{
	countdown_improved(5);
	return (0);
}
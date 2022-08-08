#include <unistd.h>

void ft_month(int month_num)
{
	char name_month[12][20] = {"January", "February", "March", "April", "May", "June", "July", "Agust", "September", "October", "November", "December"};
	int i = 0;
	if (month_num >= 1 && month_num <= 12)
	{
		while (name_month[month_num - 1][i])
		{
			write(1, &name_month[month_num - 1][i], 1);
			i++;
		}
	}
	else
		write(1, "Numero de mes invalido", 1);
	write(1, "\n", 1);
}

int main(void)
{
	ft_month(12);
	return (0);
}

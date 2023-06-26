#include "list.h"

static void	parse_args(char **argv, t_list *lists)
{
	char	**list_numbers;
	t_list	*num_list;

	while (*argv)
	{
		list_numbers = ft_split(*argv, ' ');
		while (*list_numbers)
		{
			printf("%s ", *list_numbers);
			write(1, "Yes", 3);
			ft_lstadd_new(&num_list, list_numbers);
			list_numbers++;
		}
		printf("\n");
		ft_lstadd_new(&lists, num_list);
	}
}

int	main(int argc, char **argv)
{
	t_list	*lists;

	if (argc == 1)
	{
		printf("Error:\nInvalid number of arguments\n");
		exit(0);
	}
	parse_args(argv, lists);
	return (0);
}

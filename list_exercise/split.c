#include "list.h"

static int	num_words(char const *s, char c)
{
	int	num;
	int	flag;

	num = 0;
	flag = 0;
	while (*s)
	{
		if (*s == c && flag == 1)
			flag = 0;
		else if (*s != c && flag == 0)
		{
			flag = 1;
			num++;
		}
		s++;
	}
	return (num);
}

void	free_matrix(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[i] != NULL)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}

static const char	*num_letters(char const *s, char c, char **matrix, int row)
{
	int	letters;
	int	i;

	i = 0;
	letters = 0;
	while (s[i] == c)
		i++;
	while (s[i] && s[i] != c)
	{
		letters++;
		i++;
	}
	matrix[row] = calloc(sizeof(char), (letters + 1));
	if (matrix[row] == 0)
	{
		free_matrix(matrix);
		return (NULL);
	}
	s = s + i - letters;
	strlcpy(matrix[row], s, letters + 1);
	return (s + letters + 1);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	int		rows;
	int		words;

	if (!s)
		return (NULL);
	rows = num_words(s, c);
	matrix = calloc((rows + 1), sizeof(char *));
	if (!matrix)
		return (NULL);
	words = 0;
	while (words < rows)
	{
		s = num_letters(s, c, matrix, words);
		if (!s)
			return (NULL);
		words++;
	}
	matrix[rows] = 0;
	return (matrix);
}
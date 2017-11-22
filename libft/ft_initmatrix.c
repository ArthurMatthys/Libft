#include "libft.h"

t_matrix	ft_initmatrix(int **tab, size_t line, size_t col)
{
	t_matrix	init;
	size_t		i;
	size_t		j;

	i = 0;
	init = ft_creatematrix(line, col, 0);
	while (i < line)
	{
		j = 0;
		while (j < col)
		{
			(init.tab)[i][j] = tab[i][j];
			j++;
		}
		i++;
	}
	return (init);
}

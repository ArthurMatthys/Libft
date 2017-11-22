#include "libft.h"

t_matrix	ft_dvpmatrix(t_matrix A, size_t line, size_t col)
{
	t_matrix	dvp;
	size_t		i;
	size_t		j;

	dvp = ft_creatematrix(line - 1, col - 1, 0);
	i = 0;
	while (i < line - 1)
	{
		j = 0;
		while (j < col - 1)
		{
			if (i >= line && j >= col)
				(dvp.tab)[i][j] = (A.tab)[i + 1][j + 1];
			else if (i >= line)
				(dvp.tab)[i][j] = (A.tab)[i + 1][j];
			else if (j >= col)
				(dvp.tab)[i][j] = (A.tab)[i][j + 1];
			else
				(dvp.tab)[i][j] = (A.tab)[i][j];
			j++;
		}
		i++;
	}
	return (dvp);
}

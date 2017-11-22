#include "libft.h"

t_matrix	ft_creatematrix(size_t line, size_t col, int val)
{
	t_matrix	A;
	size_t		i;
	size_t		j;

	i = 0;
	if (line && col)
	{
		A.nbrline = line;
		A.nbrcol = col;
		A.tab = (int **)malloc(sizeof(int *) * line);
		while (i < line)
		{
			j = 0;
			(A.tab)[i] = (int *)malloc(sizeof(int) * col);
			while (j < col)
				(A.tab)[i][j++] = val;
			i++;
		}
	}
	return (A);
}

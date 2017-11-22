#include "libft.h"

t_matrix	ft_commatrix(t_matrix A)
{
	t_matrix	com;
	size_t		i;
	size_t		j;

	i = 0;
	com.nbrline = A.nbrline;
	com.nbrcol = A.nbrcol;
	com.tab = (int **)malloc(sizeof(int *) * (A.nbrline));
	while (i < A.nbrline)
	{
		j = 0;
		(com.tab)[i] = (int *)malloc(sizeof(int) * (A.nbrcol));
		while (j < A.nbrcol)
		{
			(com.tab)[i][j] = ft_detmatrix(ft_dvpmatrix(A, i, j));
			j++;
		}
		i++;
	}
	return (com);
}

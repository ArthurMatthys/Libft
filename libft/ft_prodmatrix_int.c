#include "libft.h"

t_matrix	ft_prodmatrix_int(t_matrix A, int c)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < A.nbrline)
	{
		j = 0;
		while (j < A.nbrcol)
		{
			(A.tab)[i][j] *= c;
			j++;
		}
		i++;
	}
	return (A);
}

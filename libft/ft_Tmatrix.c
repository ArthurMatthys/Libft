#include "libft.h"

t_matrix	ft_Tmatrix(t_matrix A)
{
	size_t	i;
	size_t	j;
	int		tmp;

	i = 0;
	while (i < A.nbrline - 1)
	{
		j = i + 1;
		while (j < A.nbrcol)
		{
			tmp = (A.tab)[i][j];
			(A.tab)[i][j] = (A.tab)[j][i];
			(A.tab)[j][i] = tmp;
			j++;
		}
		i++;
	}
	return (A);
}

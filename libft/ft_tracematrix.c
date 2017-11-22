#include "libft.h"

int		ft_tracematrix(t_matrix A)
{
	int		res;
	size_t	i;

	i = 0;
	res = 0;
	while (i < A.nbrline)
	{
		res += (A.tab)[i][i];
		i++;
	}
	return (res);
}

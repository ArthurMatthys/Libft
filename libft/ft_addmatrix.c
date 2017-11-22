#include "libft.h"

t_matrix	ft_addmatrix(t_matrix A, t_matrix B)
{
	t_matrix	res;
	size_t		i;
	size_t		j;

	if (!(A.nbrline == B.nbrline && A.nbrcol == B.nbrcol))
		return(A);
	i = 0;
	res = ft_creatematrix(A.nbrline, A.nbrcol, 0);
	while (i < A.nbrline)
	{
		j = 0;
		while (j < A.nbrcol)
		{
			(res.tab)[i][j] = (A.tab)[i][j] + (B.tab)[i][j];
			j++;
		}
		i++;
	}
	return (res);
}

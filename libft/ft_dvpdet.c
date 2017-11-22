#include "libft.h"

int		ft_dvpdet(t_matrix A)
{
	size_t	i;
	int		det;

	det = 0;
	while (i < A.nbrline)
	{
		det += ft_pow_int(-1, i) * (A.tab)[0][i] * ft_detmatrix((ft_dvpmatrix(A, 0, i)));
		i++;
	}
	return (det);
}

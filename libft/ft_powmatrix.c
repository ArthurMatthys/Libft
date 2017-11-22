#include "libft.h"

t_matrix	ft_powmatrix(t_matrix A, size_t n)
{
	if (n == 0)
		return (ft_idmatrix(A.nbrline));
	else if (n == 1)
		return (A);
	else
		return (ft_prodmatrix(A, ft_powmatrix(A, n - 1)));
}

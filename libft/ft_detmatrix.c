#include "libft.h"

int				ft_detmatrix(t_matrix A)
{
	if (A.nbrline == 1)
		return ((A.tab)[0][0]);
	else if (A.nbrline == 2)
		return (((A.tab)[0][0] * (A.tab)[1][1]) -
			((A.tab)[1][0] * (A.tab)[0][1]));
	else
		return (ft_dvpdet(A));
}

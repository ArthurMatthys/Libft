#include "libft.h"

void	ft_printmatrix(t_matrix A)
{
	size_t i;
	size_t j;

	i = 0;
	while (i < A.nbrline)
	{
		j = 0;
		ft_putchar('(');
		while (j < A.nbrcol)
		{
			ft_putnbr((A.tab)[i][j++]);
			if (j != A.nbrcol)
			ft_putchar(' ');
		}
		ft_putchar(')');
		ft_putchar('\n');
		i++;
	}
}

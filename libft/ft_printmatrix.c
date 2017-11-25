/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printmatrix.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amatthys <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 13:24:58 by amatthys     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 13:53:02 by amatthys    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_printmatrix(t_matrix a)
{
	size_t i;
	size_t j;

	i = 0;
	while (i < a.nbrline)
	{
		j = 0;
		ft_putchar('(');
		while (j < a.nbrcol)
		{
			ft_putnbr((a.tab)[i][j++]);
			if (j != a.nbrcol)
				ft_putchar(' ');
		}
		ft_putchar(')');
		ft_putchar('\n');
		i++;
	}
}

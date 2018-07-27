/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_prodmatrix.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amatthys <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 13:39:47 by amatthys     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 20:28:37 by amatthys    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_matrix	ft_prodmatrix(t_matrix a, t_matrix b)
{
	t_matrix	prod;
	size_t		i;
	size_t		j;
	size_t		n;

	i = 0;
	if (a.nbrline != b.nbrcol || !(a.nbrline))
		return (ft_creatematrix(0, 0, 0));
	prod = ft_creatematrix(a.nbrline, b.nbrcol, 0);
	while (i < a.nbrline)
	{
		j = 0;
		while (j < b.nbrcol)
		{
			n = 0;
			while (n < a.nbrline)
			{
				(prod.tab)[i][j] += (a.tab)[i][n] * (b.tab)[n][j];
				n++;
			}
			j++;
		}
		i++;
	}
	return (prod);
}

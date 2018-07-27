/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_addmatrix.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amatthys <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 13:23:24 by amatthys     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 13:46:07 by amatthys    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_matrix	ft_addmatrix(t_matrix a, t_matrix b)
{
	t_matrix	res;
	size_t		i;
	size_t		j;

	if (a.nbrline && a.nbrcol && a.nbrline == b.nbrline && a.nbrcol == b.nbrcol)
	{
		i = 0;
		res = ft_creatematrix(a.nbrline, b.nbrcol, 0);
		while (i < a.nbrline)
		{
			j = 0;
			while (j < a.nbrcol)
			{
				(res.tab)[i][j] = (a.tab)[i][j] + (b.tab)[i][j];
				j++;
			}
			i++;
		}
	}
	else
		res = ft_creatematrix(0, 0, 0);
	return (res);
}

/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_prodmatrix_int.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amatthys <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 13:25:04 by amatthys     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 20:28:53 by amatthys    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_matrix	ft_prodmatrix_int(t_matrix a, int c)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < a.nbrline)
	{
		j = 0;
		while (j < a.nbrcol)
		{
			(a.tab)[i][j] *= c;
			j++;
		}
		i++;
	}
	return (a);
}

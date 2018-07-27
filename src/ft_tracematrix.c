/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_tracematrix.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amatthys <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 13:25:13 by amatthys     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/25 13:39:54 by amatthys    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_tracematrix(t_matrix a)
{
	int		res;
	size_t	i;

	i = 0;
	res = 0;
	if (a.nbrline != a.nbrcol)
	{
		ft_putstr("input must be square matrix");
		return (0);
	}
	while (i < a.nbrline)
	{
		res += (a.tab)[i][i];
		i++;
	}
	return (res);
}

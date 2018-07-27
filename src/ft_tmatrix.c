/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_Tmatrix.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amatthys <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 13:25:15 by amatthys     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/25 13:38:09 by amatthys    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_matrix	ft_tmatrix(t_matrix a)
{
	size_t	i;
	size_t	j;
	int		tmp;

	i = 0;
	if (a.nbrline != a.nbrcol)
		return (ft_creatematrix(0, 0, 0));
	while (i < a.nbrline - 1)
	{
		j = i + 1;
		while (j < a.nbrcol)
		{
			tmp = (a.tab)[i][j];
			(a.tab)[i][j] = (a.tab)[j][i];
			(a.tab)[j][i] = tmp;
			j++;
		}
		i++;
	}
	return (a);
}

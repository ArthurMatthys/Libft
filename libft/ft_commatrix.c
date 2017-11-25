/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_commatrix.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amatthys <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 13:24:06 by amatthys     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/25 13:33:53 by amatthys    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_matrix	ft_commatrix(t_matrix a)
{
	t_matrix	com;
	size_t		i;
	size_t		j;

	i = 0;
	com.nbrline = a.nbrline;
	com.nbrcol = a.nbrcol;
	if (!(com.tab = (int **)malloc(sizeof(int *) * (a.nbrline))))
		return (ft_creatematrix(0, 0, 0));
	if (a.nbrline != a.nbrcol)
		return (ft_creatematrix(0, 0, 0));
	while (i < a.nbrline)
	{
		j = 0;
		(com.tab)[i] = (int *)malloc(sizeof(int) * (a.nbrcol));
		while (j < a.nbrcol)
		{
			(com.tab)[i][j] = ft_detmatrix(ft_dvpmatrix(a, i, j));
			j++;
		}
		i++;
	}
	return (com);
}

/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_dvpmatrix.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amatthys <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 13:24:20 by amatthys     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/25 13:30:03 by amatthys    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_matrix	ft_dvpmatrix(t_matrix a, size_t line, size_t col)
{
	t_matrix	dvp;
	size_t		i;
	size_t		j;

	dvp = ft_creatematrix(line - 1, col - 1, 0);
	if (dvp.nbrline && !(i = 0))
	{
		while (i < line - 1 && !(j = 0))
		{
			while (j < col - 1)
			{
				if (i >= line && j >= col)
					(dvp.tab)[i][j] = (a.tab)[i + 1][j + 1];
				else if (i >= line)
					(dvp.tab)[i][j] = (a.tab)[i + 1][j];
				else if (j >= col)
					(dvp.tab)[i][j] = (a.tab)[i][j + 1];
				else
					(dvp.tab)[i][j] = (a.tab)[i][j];
				j++;
			}
			i++;
		}
	}
	return (dvp);
}

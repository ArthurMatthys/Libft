/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_initmatrix.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amatthys <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 13:24:28 by amatthys     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/25 13:36:29 by amatthys    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_matrix	ft_initmatrix(int **tab, size_t line, size_t col)
{
	t_matrix	init;
	size_t		i;
	size_t		j;

	i = 0;
	if (!(line && col))
		return (ft_creatematrix(0, 0, 0));
	init = ft_creatematrix(line, col, 0);
	while (i < line)
	{
		j = 0;
		while (j < col)
		{
			(init.tab)[i][j] = tab[i][j];
			j++;
		}
		i++;
	}
	return (init);
}

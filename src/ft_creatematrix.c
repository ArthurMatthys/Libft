/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_creatematrix.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amatthys <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 13:24:11 by amatthys     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 13:47:39 by amatthys    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_matrix	ft_creatematrix(size_t line, size_t col, int val)
{
	t_matrix	a;
	size_t		i;
	size_t		j;

	if (!(line && col))
	{
		a.nbrline = 0;
		a.tab = NULL;
	}
	else
	{
		i = 0;
		a.tab = (int **)malloc(sizeof(int *) * line);
		while (i < line)
		{
			j = 0;
			(a.tab)[i] = (int *)malloc(sizeof(int) * col);
			while (j < col)
				(a.tab)[i][j++] = val;
			i++;
		}
	}
	return (a);
}

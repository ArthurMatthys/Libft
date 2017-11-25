/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_idmatrix.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amatthys <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 13:24:24 by amatthys     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 13:50:01 by amatthys    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_matrix	ft_idmatrix(size_t line)
{
	t_matrix	id;
	size_t		i;
	size_t		j;

	i = 0;
	id = ft_creatematrix(line, line, 0);
	while (i < line)
	{
		j = 0;
		while (j < line)
		{
			(id.tab)[i][j] = (i == j);
			j++;
		}
		i++;
	}
	return (id);
}

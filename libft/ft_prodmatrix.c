/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prodmatrix.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatthys <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 18:15:43 by amatthys          #+#    #+#             */
/*   Updated: 2017/11/19 18:38:24 by amatthys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_matrix	ft_prodmatrix(t_matrix A, t_matrix B)
{
	t_matrix	prod;
	size_t		i;
	size_t		j;
	size_t		n;

	i = 0;
	if (A.nbrline != B.nbrcol || !(A.nbrline))
		return (A);
	prod = ft_creatematrix(A.nbrline, B.nbrcol, 0);
	while (i < A.nbrline)
	{
		j = 0;
		while (j < B.nbrcol)
		{
			n = 0;
			while (n < A.nbrline)
			{
				(prod.tab)[i][j] += (A.tab)[i][n] * (B.tab)[n][j];
				n++;
			}
			j++;
		}
		i++;
	}
	return (prod);
}

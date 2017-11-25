/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_dvpdet.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amatthys <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 13:24:17 by amatthys     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 20:19:40 by amatthys    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_dvpdet(t_matrix a)
{
	size_t	i;
	int		det;

	i = 0;
	det = 0;
	while (i < a.nbrline)
	{
		det += ft_pow_int(-1, i + 1) * (a.tab)[0][i]
			* ft_detmatrix((ft_dvpmatrix(a, 0, i)));
		i++;
	}
	return (det);
}

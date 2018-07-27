/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_detmatrix.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amatthys <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 13:24:14 by amatthys     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/25 13:34:29 by amatthys    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int				ft_detmatrix(t_matrix a)
{
	if (a.nbrline != a.nbrcol)
	{
		ft_putstr("Nbrline and nbrcol must be equal.");
		return (0);
	}
	if (a.nbrline == 1)
		return ((a.tab)[0][0]);
	else if (a.nbrline == 2)
		return (((a.tab)[0][0] * (a.tab)[1][1]) -
			((a.tab)[1][0] * (a.tab)[0][1]));
	else
		return (ft_dvpdet(a));
}

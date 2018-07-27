/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_powmatrix.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amatthys <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 13:24:53 by amatthys     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/25 13:37:15 by amatthys    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_matrix	ft_powmatrix(t_matrix a, size_t n)
{
	if (a.nbrline != a.nbrcol)
		return (ft_creatematrix(0, 0, 0));
	if (n == 0)
		return (ft_idmatrix(a.nbrline));
	else if (n == 1)
		return (a);
	else
		return (ft_prodmatrix(a, ft_powmatrix(a, n - 1)));
}

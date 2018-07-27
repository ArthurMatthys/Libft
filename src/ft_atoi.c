/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amatthys <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 13:27:48 by amatthys     #+#   ##    ##    #+#       */
/*   Updated: 2018/06/24 15:46:19 by amatthys    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

long long	ft_atoi(const char *nptr)
{
	long long	i;
	long long	res;
	int			p;

	i = 0;
	p = 1;
	res = 0;
	while (nptr[i] && (nptr[i] == '\n' || nptr[i] == '\t' || nptr[i] == '\v' ||
			nptr[i] == '\f' || nptr[i] == '\r' || nptr[i] == ' '))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			p = -1;
		i++;
	}
	while (nptr[i] <= '9' && nptr[i] >= '0' && nptr[i])
	{
		res = res * 10 + (nptr[i] - '0');
		i++;
	}
	return (res * p);
}

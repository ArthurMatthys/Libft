/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strequ.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amatthys <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 13:32:45 by amatthys     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 13:32:45 by amatthys    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	size_t i;

	i = 0;
	if (!s1 || !s2)
		return (-2147483648);
	while (s1[i] && (char)s1[i] == (char)s2[i])
		i++;
	return (i == ft_strlen((char *)s1) && i == ft_strlen((char *)s2));
}

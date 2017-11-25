/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amatthys <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 13:33:51 by amatthys     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 13:33:52 by amatthys    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t len2;
	size_t i;
	size_t tmp;

	len2 = ft_strlen((char *)little);
	i = 0;
	if (len2 == 0)
		return ((char *)big);
	while (i < len && big[i])
	{
		tmp = 0;
		while (big[i + tmp] == little[tmp] && (i + tmp) < len && little[tmp])
			tmp++;
		if (tmp == len2)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

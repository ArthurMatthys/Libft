/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatthys <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 14:21:27 by amatthys          #+#    #+#             */
/*   Updated: 2017/11/18 20:33:31 by amatthys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t len1;
	size_t len2;
	size_t i;
	size_t tmp;

	len1 = ft_strlen((char *)big);
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

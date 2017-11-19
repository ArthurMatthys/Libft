/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatthys <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 14:14:34 by amatthys          #+#    #+#             */
/*   Updated: 2017/11/18 20:26:01 by amatthys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t n;
	size_t tmp;
	size_t len2;

	len2 = ft_strlen((char *)needle);
	n = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[n])
	{
		tmp = 0;
		while (needle[tmp] == haystack[n + tmp] && needle[tmp])
			tmp++;
		if (tmp == len2)
			return ((char *)&haystack[n]);
		n++;
	}
	return (NULL);
}

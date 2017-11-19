/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatthys <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 14:12:33 by amatthys          #+#    #+#             */
/*   Updated: 2017/11/18 18:59:18 by amatthys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t c;

	c = 0;
	i = ft_strlen(dest);
	while (src[c] != '\0' && c < n)
	{
		dest[i + c] = src[c];
		c++;
	}
	dest[i + c] = 0;
	return (dest);
}

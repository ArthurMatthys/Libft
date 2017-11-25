/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amatthys <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 13:33:01 by amatthys     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 13:33:01 by amatthys    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static size_t	min(size_t a, size_t b)
{
	return ((a < b) ? a : b);
}

size_t			ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t c;
	size_t res;

	c = 0;
	i = ft_strlen(dest);
	res = ft_strlen((char *)src) + min(n, i);
	while (src[c] != '\0' && (i + c + 1) < n)
	{
		dest[c + i] = src[c];
		c++;
	}
	dest[i + c] = '\0';
	return (res);
}

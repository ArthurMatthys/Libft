/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amatthys <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 13:34:05 by amatthys     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 13:34:06 by amatthys    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
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

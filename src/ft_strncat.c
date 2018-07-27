/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amatthys <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 13:33:22 by amatthys     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/25 14:10:12 by amatthys    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t c;

	c = 0;
	if (dest)
		i = ft_strlen(dest);
	else
		i = 0;
	while (src[c] != '\0' && c < n)
	{
		dest[i + c] = src[c];
		c++;
	}
	dest[i + c] = 0;
	return (dest);
}

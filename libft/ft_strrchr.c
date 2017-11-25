/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrchr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amatthys <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 13:33:56 by amatthys     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 13:33:56 by amatthys    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t n;
	size_t tmp;

	n = 0;
	tmp = ft_strlen((char *)s) + 2;
	while (s[n] != '\0')
	{
		if (s[n] == c)
			tmp = n;
		n++;
	}
	if (c == '\0')
		return ((char *)&s[n]);
	else if (tmp > ft_strlen((char *)s))
		return (NULL);
	else
		return ((char *)&s[tmp]);
}

/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amatthys <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 13:34:16 by amatthys     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 13:34:17 by amatthys    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	n;
	size_t	tmp;
	size_t	start;

	n = 0;
	tmp = 1;
	if (!s)
		return (NULL);
	while (s[n] == ' ' || s[n] == '\n' || s[n] == '\t')
		n++;
	start = n;
	while (s[n + tmp - 1])
	{
		tmp = 1;
		while (s[n + tmp] == ' ' || s[n + tmp] == '\n' || s[n + tmp] == '\t')
			tmp++;
		n++;
	}
	return (ft_strsub(s, (unsigned int)start, n - start));
}

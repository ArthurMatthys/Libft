/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsplit.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amatthys <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 13:34:01 by amatthys     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 13:34:01 by amatthys    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlenin(char const *s, char c, size_t n)
{
	size_t i;

	i = 0;
	while (s[n + i] == c)
		n++;
	while (s[n + i] != c && s[n + i])
		i++;
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	n;
	size_t	p;
	size_t	tmp;
	char	**tab;

	n = 0;
	p = 0;
	if (!c || !s)
		return (NULL);
	i = ft_countwords(s, c);
	if (!(tab = (char **)malloc(sizeof(char *) * (i + 1))))
		return (NULL);
	while (n < i && s[p] && !(tmp = 0))
	{
		if (!(tab[n] = (char *)malloc(sizeof(char) * ft_strlenin(s, c, p))))
			return (NULL);
		while (s[p] == c)
			p++;
		while (s[p] != c && s[p])
			tab[n][tmp++] = s[p++];
		tab[n++][tmp] = '\0';
	}
	tab[n] = NULL;
	return (tab);
}

/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_countwords.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amatthys <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 13:28:08 by amatthys     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 13:28:09 by amatthys    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_countwords(char const *s, char c)
{
	size_t i;
	size_t n;

	n = 0;
	i = 0;
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			n++;
		else if (s[i - 1] == c && s[i] != c)
			n++;
		i++;
	}
	return (n);
}

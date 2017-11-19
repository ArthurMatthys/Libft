/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatthys <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 15:40:31 by amatthys          #+#    #+#             */
/*   Updated: 2017/11/19 13:11:12 by amatthys         ###   ########.fr       */
/*                                                                            */
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

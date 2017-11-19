/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatthys <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 14:20:23 by amatthys          #+#    #+#             */
/*   Updated: 2017/11/19 12:06:03 by amatthys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	size_t	i;
	size_t	n;

	n = 0;
	if (!s || !f)
		return (NULL);
	i = ft_strlen((char *)s);
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	while (s[n])
	{
		str[n] = f(s[n]);
		n++;
	}
	str[n] = '\0';
	return (str);
}

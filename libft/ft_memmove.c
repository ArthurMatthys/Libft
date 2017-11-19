/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatthys <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 18:26:43 by amatthys          #+#    #+#             */
/*   Updated: 2017/11/19 14:22:08 by amatthys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void const *src, size_t n)
{
	size_t i;

	i = 0;
	if ((int)((char const *)src - (char *)dest) > 0)
	{
		while (i < n)
		{
			*((char *)dest + i) = *((char const *)src + i);
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			*((char *)dest + n - 1 - i) = *((char const *)src + n - 1 - i);
			i++;
		}
	}
	return (dest);
}

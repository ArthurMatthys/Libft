/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatthys <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 14:18:18 by amatthys          #+#    #+#             */
/*   Updated: 2017/11/19 11:45:33 by amatthys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	int		*dest;
	size_t	i;

	i = 0;
	if (size == 0)
		return (NULL);
	dest = (int *)malloc(sizeof(int) * size);
	if (!dest)
		return (NULL);
	while (i < size)
	{
		dest[i] = 0;
		i++;
	}
	return ((void *)dest);
}

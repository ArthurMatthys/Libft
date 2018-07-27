/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amatthys <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 13:30:46 by amatthys     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 13:30:47 by amatthys    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
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

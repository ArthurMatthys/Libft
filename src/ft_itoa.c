/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amatthys <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 13:29:03 by amatthys     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 13:29:04 by amatthys    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countnbr(int c)
{
	size_t	i;

	i = 0;
	if (c == 0)
		return (1);
	while (c)
	{
		i++;
		c = c / 10;
	}
	return (i);
}

char			*ft_itoa(int c)
{
	int		res;
	size_t	i;
	char	*str;

	i = ft_countnbr(c) + (c < 0);
	res = c;
	if (c == 0)
		return (ft_strdup("0"));
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i--] = '\0';
	while (res)
	{
		str[i--] = (res % 10) * (c < 0 ? -1 : 1) + '0';
		res = res / 10;
	}
	if (c < 0)
		str[i] = '-';
	return (str);
}

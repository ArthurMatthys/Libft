/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr_fd.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amatthys <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 13:31:44 by amatthys     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 13:31:44 by amatthys    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd('0' + n % 10, fd);
	}
	else if (0 <= n && n < 10)
		ft_putchar_fd('0' + n % 10, fd);
	else
	{
		ft_putchar_fd('-', fd);
		if (!(-10 < n))
			ft_putnbr_fd(-(n / 10), fd);
		ft_putchar_fd('0' - n % 10, fd);
	}
}

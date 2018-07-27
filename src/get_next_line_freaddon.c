/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line_freaddon.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amatthys <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/06/25 09:05:48 by amatthys     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 11:01:00 by amatthys    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"

void	free_fd(void)
{
	t_fd	**list;
	t_fd	*b;

	list = get_fd();
	while (*list)
	{
		ft_memdel((void **)&((*list)->str));
		b = (*list);
		*list = (*list)->next;
		ft_memdel((void **)&b);
	}
	ft_memdel((void **)&(*list));
	*list = NULL;
}

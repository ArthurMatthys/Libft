/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstdel.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amatthys <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 13:29:12 by amatthys     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 13:29:13 by amatthys    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*to_del;

	if (alst && del)
	{
		while (*alst)
		{
			to_del = *alst;
			*alst = (*alst)->next;
			(*del)(to_del->content, to_del->content_size);
			free(to_del);
		}
	}
}

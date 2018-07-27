/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amatthys <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 13:29:29 by amatthys     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 13:29:30 by amatthys    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *mod;

	if (lst && f)
	{
		if (!(mod = (t_list*)malloc(sizeof(lst))))
			return (NULL);
		mod = f(lst);
		mod->next = ft_lstmap(lst->next, f);
		return (mod);
	}
	return (NULL);
}

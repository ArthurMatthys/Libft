/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatthys <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 16:24:53 by amatthys          #+#    #+#             */
/*   Updated: 2017/11/19 16:53:25 by amatthys         ###   ########.fr       */
/*                                                                            */
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

/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amatthys <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/13 12:26:30 by amatthys     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/25 09:56:55 by amatthys    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"
#include <stdio.h>

static t_fd		*find_fd(int fd, t_fd **list)
{
	t_fd	*new;
	t_fd	*curr;

	curr = *list;
	while (curr)
	{
		if (fd == curr->fd)
			return (curr);
		curr = curr->next;
	}
	if (!(new = (t_fd *)malloc(sizeof(t_fd))))
		return (NULL);
	new->fd = fd;
	new->str = ft_strnew(0);
	new->len = 0;
	new->next = *list;
	*list = new;
	return (new);
}

static int		find_str(t_fd *curr, char **tab)
{
	char	*to_print;
	char	*residual;
	int		len;
	char	*tmp;

	if (!(residual = ft_strchr(curr->str, '\n')))
		return (0);
	len = ft_strlen(++residual);
	if (!(to_print = ft_strnew(ft_strlen(curr->str) - len)))
		return (-1);
	ft_strncpy(to_print, curr->str, ft_strlen(curr->str) - len - 1);
	*tab = to_print;
	tmp = curr->str;
	curr->str = ft_strdup(residual);
	free(tmp);
	return (1);
}

static int		end_of_file(t_fd *curr, char **tab)
{
	*tab = ft_strdup(curr->str);
	if (ft_strlen(curr->str))
	{
		free(curr->str);
		curr->str = ft_strnew(0);
		return (1);
	}
	else
	{
		return (0);
	}
}

t_fd			**get_fd(void)
{
	static t_fd	*list = NULL;

	return (&list);
}

int				get_next_line(const int fd, char **tab)
{
	t_fd		**list;
	char		buff[BUFF_SIZE + 1];
	int			count;
	t_fd		*curr;
	char		*temp;

	list = get_fd();
	count = 0;
	if (fd < 0 || !tab || !(curr = find_fd(fd, list)))
		return (-1);
	while (!(ft_strchr(curr->str, '\n')))
	{
		if ((count = read(fd, buff, BUFF_SIZE)) == -1)
			return (-1);
		if (count == 0)
			return (end_of_file(curr, tab));
		buff[count] = '\0';
		temp = curr->str;
		curr->str = ft_strjoin(curr->str, buff);
		free(temp);
	}
	count = find_str(curr, tab);
	return (count);
}

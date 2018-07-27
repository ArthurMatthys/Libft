/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.h                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amatthys <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/13 12:27:35 by amatthys     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/25 16:41:55 by amatthys    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# define BUFF_SIZE	666

typedef struct		s_fd
{
	int				fd;
	int				len;
	char			*str;
	struct s_fd		*next;
}					t_fd;

int					get_next_line(int const fd, char **tab);
t_fd				**get_fd(void);
void				free_fd(void);

#endif

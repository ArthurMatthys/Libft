#include "libft.h"

t_matrix	ft_idmatrix(size_t line)
{
	t_matrix	id;
	size_t		i;
	size_t		j;

	i = 0;
	id = ft_creatematrix(line, line, 0);
	while (i < line)
	{
		j = 0;
		while (j < line)
		{
			(id.tab)[i][j] = (i == j);
			j++;
		}
		i++;
	}
	return (id);
}

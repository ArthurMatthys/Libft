#include "libft.h"

int		ft_pow_int(int c, size_t pow)
{
	if (pow == 0)
		return (1);
	else if (pow == 1)
		return (c);
	else 
		return (c * ft_pow_int(c, pow - 1));
}

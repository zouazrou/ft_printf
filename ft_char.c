#include "libftprintf.h"

char	*ft_char(int c)
{
	char	*d;

	d = malloc(2);
	if (!d)
		return (NULL);
	d[0] = c;
	d[1] = '\0';
	return (d);
}

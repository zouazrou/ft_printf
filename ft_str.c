#include "libftprintf.h"

char	*ft_str(char *s)
{
	char	*d;
	size_t	i;
	d = malloc(ft_strlen(s) + 1);
	if (!d)
		return (NULL);
	i = 0;
	while (*s)
		d[i++] = *s++;
	d[i] = '\0';
	return (d);
}

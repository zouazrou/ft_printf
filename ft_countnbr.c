#include "libftprintf.h"

size_t	ft_countnbr(long nb)
{
	size_t	len;

	len = 0;
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	if (!nb)
		return (1);
	while (nb)
	{
		nb /= 10;
		len++;
	}
	return (len);
}
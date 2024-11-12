#include "libftprintf.h"

// size_t	ft_countnbr(int	n)
// {
// 	size_t	len;
// 	long	nb;

// 	len = 0;
// 	nb = (long)n;
// 	if (nb < 0)
// 		nb *= -1;
// 	if (nb >= 0 && nb < 9)
// 		return (len + 1);
// 	while (nb)
// 	{
// 		nb /= 10;
// 		len++;
// 	}
// 	return (len);
// }

char	*ft_decimal(int n)
{
	// char	*d;
	// long	nb;
	// size_t	i;

	// i = ft_countnbr(n);
	// d = malloc(i + (n < 0) + 1);
	// if (!d)
	// 	return (NULL);
	// nb = (long)n;
	// d[i] = '\0';
	// if (nb < 0)
	// 	d[0] = '-';
	// if (nb == 0)
	// {
	// 	d[0] = '0';
	// 	return (d);
	// }
	// while (nb)
	// {
	// 	d[--i] = (nb % 10) + '0';
	// 	nb /= 10;
	// }
	return (ft_itoa(n));
}

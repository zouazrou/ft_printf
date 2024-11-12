#include "libftprintf.h"

int	main(void)
{
	char	str[] = "%s is %d!!\n";

	int	ft, std;

	ft = ft_printf(str, "zakaria", 1);
	std = printf(str, "zakaria", 1);
	printf("%d\n", ft);
	printf("%d\n", std);
	return (0);
}

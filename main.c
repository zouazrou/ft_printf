#include "libftprintf.h"

int	main(void)
{
	char	str[] = "Hello i'm zakaria!!\n";

	int	ft, std;

	ft = ft_printf(str, "zakaria", 1337);
	std = printf(str, "zakaria", 1337);
	printf("%d\n", ft);
	printf("%d\n", std);
	return (0);
}

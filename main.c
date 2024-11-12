#include "libftprintf.h"

int	main(void)
{
	char	str[] = "Hello i'm %s i student in %d\n";

	ft_printf(str, "zakaria", 1337);
	return (0);
}

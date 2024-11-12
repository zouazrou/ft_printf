#include "libftprintf.h"

char    *ft_strformat(char format, va_list args) // n
{
    if (format == 'c')
        return (ft_char(va_arg(args, int)));
    if (format == 's')
        return (ft_str(va_arg(args, char *)));
    if (format == 'd')
        return (ft_decimal(va_arg(args, int)));
    return (NULL);
}
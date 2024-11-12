#include "libftprintf.h"

size_t  ft_chrlen(char *format)
{
    size_t  len;

    len = 0;
    while (format[len] && format[len] != '%')
        len++;
    return (len);
}
char    *ft_chrdup(char *format, size_t len)
{
    char    *p;
    size_t  i;

    p = malloc(len + 1);
    i = 0;
    if (!p)
        return (NULL);
    while (len--)
    {
        p[i] = *format;
        i++;
        format++;
    }
    p[i] = '\0';
    return (p);
}
char    *ft_strformat(char *format, va_list args)
{
    if (*format == 'c')
        return (ft_char(va_arg(args, int)));
    if (*format == 's')
        return (ft_str(va_arg(args, char *)));
    if (*format == 'd')
        return (ft_decimal(va_arg(args, int)));
    return (NULL);
}
int ft_printf(const char *format, ...)
{
    va_list args;
    char    *buffer;
    char    *temp;
    char    *strf;
    size_t  len;
    

    va_start(args, format);
    while (*format)
    {
        len = ft_chrlen((char *)format);
        buffer = ft_chrdup((char *)format, len);
        strf = ft_strformat((char *)format + len + 1, args);
        temp = ft_strjoin(buffer, strf);
        free(buffer);
        free(strf);
        buffer = temp;
        // free(temp);
        format += (len + 2);
    }
    va_end(args);
    return (0);
}
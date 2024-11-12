#include "libftprintf.h"

size_t  ft_chrlen(char *format) // nn
{
    size_t  len;

    len = 0;
    while (format[len] && format[len] != '%')
        len++;
    return (len);
}
char    *ft_chrdup(char *format, size_t len) // n
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

char	*ft_strdup(const char *s)
{
	char	*p;
	size_t	i;

	i = 0;
	p = malloc((ft_strlen(s) + 1));
	if (p == NULL)
		return (p);
	while (i < ft_strlen(s) + 1)
	{
		*(p + i) = s[i];
		i++;
	}
	return (p);
}
void    ft_update_buffer(char **buffer, char **temp, char **str) // n
{
    *temp = ft_strjoin(*buffer, *str);
    free(*buffer);
    free(*str);
    *buffer = *temp;
}
int ft_printf(const char *format, ...)
{
    va_list args;
    char    *buffer;
    char    *temp;
    char    *str;
    size_t  i;
    size_t  len;
    
    i = 0;
    buffer = ft_strdup("");
    va_start(args, format);
    while (format[i])
    {
        if (format[i] != '%' && format[i])
        {
            len = ft_chrlen((char *)(format + i));
            str = ft_chrdup((char *)(format + i), len);
            ft_update_buffer(&buffer, &temp, &str);
            i += len;
        }
        if (format[i] == '%' && format[i])
        {
            str = ft_strformat(format[i + 1], args);
            ft_update_buffer(&buffer, &temp, &str);
            i += 2;
        }
    }
    va_end(args);
    ft_putstr(buffer);
    return (ft_strlen(buffer));
}

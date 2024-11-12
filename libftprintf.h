#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
//          for calculate lenght of number or string
size_t     ft_countnbr(long nb);
char    *ft_itoa(long n);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
void    ft_putstr(const char *str);
//          for formats
// %c : Prints a single character
char    *ft_char(int c);
// %s : Prints astring
char    *ft_str(char *s);
// %d : Prints a decimal (base 10) number
char	*ft_decimal(int n);
// %i : Prints an integer in Base 10
char    *ft_integer(int nb);
// %u : Prints an unsigned decimal (base 10) number
char    *ft_unsignedint(int nb);
// ft_strformat ...
char    *ft_strformat(char format, va_list args);
// my Printf !!
int ft_printf(const char *format, ...);
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouazrou <zouazrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:18:55 by zouazrou          #+#    #+#             */
/*   Updated: 2024/11/15 14:44:08 by zouazrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
//          from libft
size_t	ft_countnbr(long nb);
char	*ft_itoa(long n);
size_t	ft_strlen(const char *s);
void	ft_putstr(const char *str);

//          for formats
// %c : Prints a single character
void	ft_char(int c, size_t *len);
// %s : Prints astring
void	ft_str(char *s, size_t *len);
// %p The void * pointer argument has to be printed in hexadecimal format
void	ft_pointeraddr(void *pointer, size_t *len);
// %d : Prints a decimal (base 10) number
void	ft_decimal(int n, size_t *len);
// %i : Prints an integer in Base 10
void	ft_integer(int nb, size_t *len);
// %u : Prints an unsigned decimal (base 10) number
void	ft_unsignedint(int nb, size_t *len);
// %x Prints a number in hexadecimal (base 16) lowercase format.
void	ft_hexdecimal(unsigned int nb, char *base, size_t *len);
// for indicate any format
void	ft_strformat(char format, va_list args, size_t *len);
// my Printf !!
int		ft_printf(const char *format, ...);
#endif

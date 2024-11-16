/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strformat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouazrou <zouazrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:19:19 by zouazrou          #+#    #+#             */
/*   Updated: 2024/11/14 14:57:44 by zouazrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_strformat(char format, va_list args, size_t *len)
{
	if (format == 'c')
		ft_char(va_arg(args, int), len);
	else if (format == 's')
		ft_str(va_arg(args, char *), len);
	else if (format == 'p')
		ft_pointeraddr(va_arg(args, void *), len);
	else if (format == 'd')
		ft_decimal(va_arg(args, int), len);
	else if (format == 'i')
		ft_integer(va_arg(args, int), len);
	else if (format == 'u')
		ft_unsignedint(va_arg(args, int), len);
	else if (format == 'x')
		ft_hexdecimal(va_arg(args, unsigned int), "0123456789abcdef", len);
	else if (format == 'X')
		ft_hexdecimal(va_arg(args, unsigned int), "0123456789ABCDEF", len);
	else if (format == '%')
		ft_char('%', len);
	return ;
}
/*
	part bonus:
*******************
 - : "%-10d" output "42          "
 0 : "%010d" output "000000000042"
 . : %.5s "hello, world!", "Hello"
*******************
 # : used with format (x,X) "0x"
 sp: like '+' but only applies to positive numbers
 + : used for pritn sign of number
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouazrou <zouazrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:19:50 by zouazrou          #+#    #+#             */
/*   Updated: 2024/11/14 16:00:25 by zouazrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// for print normal string without format
size_t	ft_putchr(char *format, size_t *len)
{
	size_t	i;

	i = 0;
	while (format[i] && format[i] != '%')
	{
		ft_char(format[i], len);
		i++;
	}
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	i;
	size_t	len;
	size_t	index;

	if (!format)
		return (-1);
	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] != '%' && format[i])
		{
			index = ft_putchr((char *)(format + i), &len);
			i += index;
		}
		if (format[i] == '%' && format[i])
		{
			ft_strformat(format[i + 1], args, &len);
			i += 2;
		}
	}
	va_end(args);
	return (len);
}

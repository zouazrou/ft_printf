/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointeraddr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouazrou <zouazrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:48:56 by zouazrou          #+#    #+#             */
/*   Updated: 2024/11/15 14:38:05 by zouazrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_counthexaddr(unsigned long nb)
{
	size_t	len;

	len = 0;
	while (nb)
	{
		nb /= 16;
		len++;
	}
	return (len);
}

void	ft_hexaddr(unsigned long nb, char *base, size_t *lenp)
{
	char	*p;
	size_t	len;

	len = ft_counthexaddr(nb) + 2 + 1;
	*lenp += len - 1;
	p = malloc(len);
	if (!p)
		return ;
	p[--len] = '\0';
	while (nb)
	{
		len--;
		p[len] = base[nb % 16];
		nb /= 16;
	}
	p[1] = 'x';
	p[0] = '0';
	ft_putstr(p);
	free(p);
}

void	ft_pointeraddr(void *pointer, size_t *len)
{
	unsigned long	addr;

	if (!pointer)
	{
		write(1, "(nil)", 5);
		(*len) += 5;
		return ;
	}
	addr = (unsigned long)pointer;
	ft_hexaddr(addr, "0123456789abcdef", len);
}
// 32 = 0x 0123 4567 (4 bits)(8)
// 64 = 0x 0123 4567 89AB CDEF (8 bits)(16)
//      0x 7ffe d732 2f04
// 7ffd886e0104 (12)

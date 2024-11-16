/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdecimal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouazrou <zouazrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:32:27 by zouazrou          #+#    #+#             */
/*   Updated: 2024/11/15 14:38:15 by zouazrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_counthex(unsigned int nb)
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

void	ft_hexdecimal(unsigned int nb, char *base, size_t *lenp)
{
	char	*p;
	size_t	len;

	if (!nb)
	{
		write(1, "0", 1);
		(*lenp) += 1;
		return ;
	}
	len = ft_counthex(nb);
	p = malloc(len + 1);
	if (!p)
		return ;
	p[len] = '\0';
	while (len--)
	{
		p[len] = base[nb % 16];
		nb /= 16;
	}
	ft_putstr(p);
	(*lenp) += ft_strlen(p);
	free(p);
}

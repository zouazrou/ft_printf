/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouazrou <zouazrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:19:53 by zouazrou          #+#    #+#             */
/*   Updated: 2024/11/14 14:17:01 by zouazrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoa(long n)
{
	char	*p;
	size_t	lennb;

	lennb = ft_countnbr(n);
	p = malloc(lennb + 1);
	if (p == NULL)
		return (NULL);
	if (n < 0)
	{
		p[0] = '-';
		n *= -1;
	}
	p[lennb] = '\0';
	if (!n)
		p[--lennb] = n % 10 + 48;
	else
	{
		while (n > 0)
		{
			p[--lennb] = n % 10 + 48;
			n /= 10;
		}
	}
	return (p);
}

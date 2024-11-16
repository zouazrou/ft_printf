/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouazrou <zouazrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:20:01 by zouazrou          #+#    #+#             */
/*   Updated: 2024/11/14 14:16:51 by zouazrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_decimal(int n, size_t *len)
{
	char	*p;

	p = ft_itoa(n);
	ft_putstr(p);
	(*len) += ft_strlen(p);
	free(p);
}

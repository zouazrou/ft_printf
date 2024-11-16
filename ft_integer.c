/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_integer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouazrou <zouazrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:19:56 by zouazrou          #+#    #+#             */
/*   Updated: 2024/11/14 14:16:58 by zouazrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_integer(int nb, size_t *len)
{
	char	*p;

	p = ft_itoa(nb);
	ft_putstr(p);
	(*len) += ft_strlen(p);
	free(p);
}

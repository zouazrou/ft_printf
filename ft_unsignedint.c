/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsignedint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouazrou <zouazrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:19:09 by zouazrou          #+#    #+#             */
/*   Updated: 2024/11/14 14:17:31 by zouazrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsignedint(int nb, size_t *len)
{
	char	*p;

	p = ft_itoa(((nb < 0) * (4294967295 + 1)) + nb);
	ft_putstr(p);
	(*len) += ft_strlen(p);
	free(p);
}

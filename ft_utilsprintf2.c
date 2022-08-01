/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilsprintf2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomoreno <jomoreno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 17:57:19 by jomoreno          #+#    #+#             */
/*   Updated: 2022/08/01 17:57:21 by jomoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hex_may(unsigned long long p, int *total_str)
{
	if (p >= 16)
		ft_hex_may(p / 16, total_str);
	ft_putchar("0123456789ABCDEF"[p % 16], total_str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_phold.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomoreno <jomoreno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 18:41:43 by jose              #+#    #+#             */
/*   Updated: 2022/06/29 21:24:06 by jomoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

void    ft_phold(const char *str, int *total_str, va_list arg, int i)
{
	if (str[i + 1] == 'c')
		ft_putchar(va_arg(arg, int), total_str);
	else if (str[i + 1] == 's')
		ft_putstr(va_arg(arg, char*), total_str);
	else if (str[i + 1] == 'p')
	{
		write(1, &"0x", 2);
		ft_hex(va_arg(arg, unsigned long long), total_str);
	}
	else if (str[i + 1] == 'd' || str[i + 1] == 'i')
		ft_dec(va_arg(arg, int), total_str);
	else if (str[i + 1] == 'u')
		ft_ssigndec(va_arg(arg, unsigned int), total_str);
}
		
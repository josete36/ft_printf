/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_phold.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomoreno <jomoreno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 17:56:26 by jomoreno          #+#    #+#             */
/*   Updated: 2022/08/01 17:56:30 by jomoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

void	ft_phold(const char *str, int *total_str, va_list arg, int i)
{
	if (str[i + 1] == 'c')
		ft_putchar(va_arg(arg, int), total_str);
	else if (str[i + 1] == 's')
		ft_putstr(va_arg(arg, char *), total_str);
	else if (str[i + 1] == 'p')
	{
		ft_putstr("0x", total_str);
		ft_hex(va_arg(arg, unsigned long long), total_str);
	}
	else if (str[i + 1] == 'd' || str[i + 1] == 'i')
		ft_dec(va_arg(arg, int), total_str);
	else if (str[i + 1] == 'u')
		ft_ssigndec(va_arg(arg, unsigned int), total_str);
	else if (str[i + 1] == 'x')
		ft_hex(va_arg(arg, unsigned int), total_str);
	else if (str[i + 1] == 'X')
		ft_hex_may(va_arg(arg, unsigned int), total_str);
	else if (str[i + 1] == '%')
		ft_putchar('%', total_str);
}

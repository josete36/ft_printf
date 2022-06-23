/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_phold.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose <jose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 18:41:43 by jose              #+#    #+#             */
/*   Updated: 2022/06/23 22:16:34 by jose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

void    ft_phold(const char *str, int *total_str, va_list arg, int i)
{
	char	*base16;
	
	base16 = "0123456789abcdef" 
	if (str[i + 1] == 'c')
		ft_putchar(va_arg(arg, int), total_str);
	else if (str[i + 1] == 's')
		ft_putstr(va_arg(arg, char*), total_str);
	else if (str[i + 1] == 'p')
		ft_hex(va_arg(arg, unsigned long long), total_str, *base16);
		
}
		
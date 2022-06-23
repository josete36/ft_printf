/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose <jose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 20:02:23 by jomoreno          #+#    #+#             */
/*   Updated: 2022/06/23 20:26:53 by jose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include<stdarg.h>

int	ft_printf(char const *str, ...)
{
	int		i;
	int		total_str;
	va_list	arg;

	va_start(arg, str);
	i = 0;
	total_str = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			ft_phold(str, &total_str, arg, i);
			i++;
		}
		else
			ft_putchar(str[i], &total_str);
		i++;
	}
	va_end(arg);
	return (total_str);
}

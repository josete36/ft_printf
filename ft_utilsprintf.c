/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilsprintf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomoreno <jomoreno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 18:26:06 by jose              #+#    #+#             */
/*   Updated: 2022/06/29 21:28:57 by jomoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include<unistd.h>

void	ft_putchar(char c, int *total_str)
{
	write(1, &c, 1);
	*total_str = *total_str + 1;
}

void	ft_putstr(char *s, int *total_str)
{
	if (!s)
		return ;
	while (*s != '\0')
	{
		write(1, s, 1);
		s++;
		*total_str = *total_str + 1;
	}
}

void	ft_hex(unsigned long long p, int *total_str)
{
	if (p >= 16)
		ft_hex(p / 16, total_str);
	ft_putchar("0123456789abcdef"[p % 16], total_str);
}

void	ft_dec(int num,	int *total_str)
{
	if (num < 0)
	{
		ft_putchar('-', total_str);
		num = num * (-1);
	}
	if (num >= 10)
	{
		ft_dec(num / 10, total_str);
		num = num % 10;
	}
	ft_putchar(num + '0', total_str);
}

void	ft_ssigndec(unsigned int num, int *total_str)
{
	if (num >= 10)
	{
		ft_ssigndec(num / 10, total_str);
		num = num % 10;
	}
	ft_putchar(num + '0', total_str);
}

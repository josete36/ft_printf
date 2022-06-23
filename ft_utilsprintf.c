/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilsprintf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose <jose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 18:26:06 by jose              #+#    #+#             */
/*   Updated: 2022/06/23 22:12:20 by jose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include<unistd.h>

void	ft_putchar(char c, int *total_str)
{
	write(1, &c, 1);
	total_str++;
}

void	ft_putstr(char *s, int *total_str)
{
	if (!s)
		return ;
	while (*s != '\0')
	{
		write(1, s, 1);
		s++;
		total_str++;
	}
}

void	*ft_hex(unsigned long long p, int *total_str, char *hex)
{
	
}
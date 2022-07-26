/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose <jose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 20:27:55 by jomoreno          #+#    #+#             */
/*   Updated: 2022/07/25 22:48:35 by jose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(char const *str, ...);
void	ft_phold(const char *str, int *total_str, va_list arg, int i);
void	ft_putchar(char c, int *total_str);
void	ft_putstr(char *s, int *total_str);
void	ft_hex(unsigned long long p, int *total_str);
void	ft_dec(int num,	int *total_str);
void	ft_ssigndec(unsigned int num, int *total_str);
void	ft_hex_may(unsigned long long p, int *total_str);

#endif
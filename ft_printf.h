/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomoreno <jomoreno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 17:56:51 by jomoreno          #+#    #+#             */
/*   Updated: 2022/08/01 17:56:56 by jomoreno         ###   ########.fr       */
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
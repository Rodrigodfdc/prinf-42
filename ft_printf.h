/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 17:16:34 by rodde-fr          #+#    #+#             */
/*   Updated: 2026/05/11 18:23:12 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int				ft_printf(const char *format, ...);
int				ft_putchar(char c);
int				ft_putstr(char *str);
int				ft_putnbr(int n);
int				ft_putptr(void *ptr);
int				ft_puthex(unsigned long n);
int				ft_puthex_upper(unsigned long n);
unsigned int	ft_putunsigned(unsigned int n);

#endif

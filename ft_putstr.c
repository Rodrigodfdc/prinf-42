/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 17:17:11 by rodde-fr          #+#    #+#             */
/*   Updated: 2026/05/11 18:23:57 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int		count;

	count = 0;
	if (!s)
	{
		count += ft_putstr("(null)");
		return (count);
	}
	while (*s)
	{
		count += ft_putchar(*s);
		s++;
	}
	return (count);
}

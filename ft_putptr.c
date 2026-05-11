/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 17:16:12 by rodde-fr          #+#    #+#             */
/*   Updated: 2026/05/11 17:19:16 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int count;

	count = 0;
	if (ptr == NULL)
	{
		count += ft_putstr("(nill)");
		return (count);
	}
	count += ft_putstr("0x");
	count += ft_puthex((unsigned long)ptr);
	return (count);
}

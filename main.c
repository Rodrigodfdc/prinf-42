/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 17:17:23 by rodde-fr          #+#    #+#             */
/*   Updated: 2026/05/11 17:20:52 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char c = 'A';
	char *s = "Hello, ft_printf!";
	void *p = s;
	void *nullp = NULL;
	int d = 42;
	int i = -123;
	unsigned int u = 3000000000u;
	unsigned int x = 0xdeadbeef;
	unsigned int X = 0xBEEF;

	printf("---- STD printf ----\n");
	printf("char: %c\n", c);
	printf("string: %s\n", s);
	printf("pointer: %p\n", p);
	printf("pointer NULL: %p\n", nullp);
	printf("dec: %d\n", d);
	printf("int: %i\n", i);
	printf("unsigned: %u\n", u);
	printf("hex lower: %x\n", x);
	printf("hex upper: %X\n", X);
	printf("percent: %%\n");

	printf("---- ft_printf ----\n");
	ft_printf("char: %c\n", c);
	ft_printf("string: %s\n", s);
	ft_printf("pointer: %p\n", p);
	ft_printf("pointer NULL: %p\n", nullp);
	ft_printf("dec: %d\n", d);
	ft_printf("int: %i\n", i);
	ft_printf("unsigned: %u\n", u);
	ft_printf("hex lower: %x\n", x);
	ft_printf("hex upper: %X\n", X);
	ft_printf("percent: %%\n");

	return (0);
}

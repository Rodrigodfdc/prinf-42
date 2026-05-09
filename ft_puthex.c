#include "ft_printf.h"

int	ft_puthex(unsigned long n)
{
	int count;
	char *base;

	count = 0;

	base = "0123456789abcdef";
	if (n >= 15)
		count += ft_puthex(n / 16);
	count += ft_putchar(base[n % 16]);

	return (count);
}
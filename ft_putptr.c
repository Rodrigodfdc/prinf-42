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
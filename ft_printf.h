#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>

int				ft_putstr(char *s);
int				ft_putchar(char c);
int				ft_puthex_upper(unsigned long n);
int				ft_puthex(unsigned long n);
int				ft_putptr(void *ptr);
unsigned int	ft_putunsigned(unsigned int n);

#endif

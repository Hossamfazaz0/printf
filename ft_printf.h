#ifndef FT_PRINTF_H
#define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(char *str, ...);
int ft_putchar(char c);
int ft_putstr(char *str);
int		ft_putnbr(long int nb);
int		ft_print_hexa(unsigned long n);
int		ft_print_hexa_upper(unsigned long n);
int		ft_unsigned(unsigned int n);


#endif
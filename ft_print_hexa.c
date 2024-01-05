#include "ft_printf.h"

int ft_print_hexa(unsigned long n)
{
    int count;
    char *p;

    count = 0;
    p = "0123456789abcdef";
    if(n>=16)
    {
        count += ft_print_hexa(n/16);
        count += ft_print_hexa(n%16);
    }
    else
    count+=ft_putchar(p[n]);
    return count;
}
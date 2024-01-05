#include "ft_printf.h"

int ft_putstr(char *str)
{
    int i = 0;
    if(!str)
    ft_putstr("Null");
    while(str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
    return i;
    
}
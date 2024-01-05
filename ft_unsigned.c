#include "ft_printf.h"
int ft_unsigned(unsigned    int nb)
{
    int count = 0;
    if(nb <=9)
    count +=ft_putchar(nb + '0');
    if(nb>9)
    {
        count +=ft_unsigned(nb/10);
        count +=ft_unsigned(nb%10);
    }
    return count;
}
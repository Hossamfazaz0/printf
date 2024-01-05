#include "ft_printf.h"

int ft_check(char c,va_list ap){
    int count = 0;
    if(c == 'c')
        count += ft_putchar(va_arg(ap,int));
    else if(c == 's')
        count += ft_putstr(va_arg(ap,char *));
    else if(c == 'd')
        count+= ft_putnbr(va_arg(ap,int));
    else if(c == 'x')
        count+=ft_print_hexa(va_arg(ap,unsigned int));
    else if(c == 'X')
        count+=ft_print_hexa_upper(va_arg(ap,unsigned int));
    else if(c == 'u')
        count += ft_unsigned(va_arg(ap,unsigned int));
    else if(c == 'p')
    {
        count += ft_putstr("0x");
        count += ft_print_hexa((unsigned long)va_arg(ap,void *));
    }
    else if(c == '%')
        count += ft_putchar('%');
    return count;
}
int ft_printf(char *str,...)
{
    va_list ap;
    int count = 0;
    va_start(ap,str);
    while(*str !='\0')
    {
        if(*str== '%')
            count += ft_check(*++str,ap);
        else
        count += ft_putchar(*str);
    str++;
    }
    va_end(ap);
    return count;
}
 
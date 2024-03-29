#include "ft_printf.h"

int	ft_putnbr(long int n)
{
	int	count;

	count = 0;
	if (n >= 0 && n <= 9)
	{
		count += ft_putchar(n + '0');
	}
	else if (n > 9)
	{
		count += ft_putnbr(n / 10);
		count += ft_putnbr(n % 10);
	}
	else if (n < 0)
	{
		count += write(1, "-", 1);
		count += ft_putnbr(n * -1);
	}
	return (count);
}
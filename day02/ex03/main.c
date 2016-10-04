#include <unistd.h>

void	ft_is_negative(int n);

/* This is only for a test ! */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	ft_is_negative(-2147483648);
	ft_putchar('\n');
	ft_is_negative(0);
	ft_putchar('\n');
	ft_is_negative(2147483647);
	ft_putchar('\n');
	return (0);
}

/* You don't have to push this ! */

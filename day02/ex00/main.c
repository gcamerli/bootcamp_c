#include <unistd.h>

void	ft_print_alphabet(void);

/* This is only for a test ! */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}

/* You don't have to push this ! */

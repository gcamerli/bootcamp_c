#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
}

/* You don't have to push this ! */

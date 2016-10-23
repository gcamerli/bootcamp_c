#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
}

#include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);

int	main(void)
{
	char	c;
	char	*str;

	str = &c;
	str = "Hello world, it's time for unicorns!";
	ft_putstr(str);
	return (0);
}

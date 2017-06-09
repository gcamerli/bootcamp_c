#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*str;

	str = "Hello world, it's time for unicorns!";
	printf("%d", ft_strlen(str));
	return (0);
}

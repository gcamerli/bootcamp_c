#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	char	str[] = "42";
	char	str2[] = "4242";
	char	str3[] = "424242";

	printf("%d\n", ft_atoi(str));
	printf("%d\n", ft_atoi(str2));
	printf("%d\n", ft_atoi(str3));
	return (0);
}

#include <stdio.h>

char	*ft_strrev(char *str);

int	main(void)
{
	char    str[] = "Hello world, it's time for unicorns!";
    
	printf("%s", ft_strrev(str));
	return (0);
}

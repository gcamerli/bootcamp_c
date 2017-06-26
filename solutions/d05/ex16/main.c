#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	src[] = "Hello";
	char	dest[] = "Wow";
	
	ft_strcat(dest, src);
	printf("%s\n", dest);
	return (0);
}

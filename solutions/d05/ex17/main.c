#include <stdio.h>

char	*ft_strncat(char *dest, char *src, int nb);

int	main(void)
{
	char	src[] = "Hello";
	char	dest[] = "Wow";

	ft_strncat(dest, src, 5);
	printf("%s\n", dest);
	return (0);
}

/* You don't have to push this ! */

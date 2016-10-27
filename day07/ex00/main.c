#include <stdio.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char *src;
	char *dest;

	src = "Hello Bocal!";
	dest = ft_strdup(src);
	printf("%s\n", dest);
	return (0);
}

/* You don't have to push this ! */

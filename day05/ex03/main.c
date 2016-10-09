#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char *dest;
	char *src;

	src = "Hello world!";
	ft_strcpy(dest, src);
	printf("%s \n", dest);
	return (0);
}

/* You don't have to push this ! */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	dest[] = "Follow the white rabbit.";
	char	src[] = "Follow the white unicorn.";

	ft_strcpy(dest, src);
	printf("%s\n", dest);
	return (0);
}

/* You don't have to push this ! */

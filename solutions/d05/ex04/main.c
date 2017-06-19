#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char dest[] = "Unicorn";
	char src[] = "Hello world";
	
	ft_strncpy(dest, src, 5);
	printf("%s\n", dest);
	return (0);
}

/* You don't have to push this ! */

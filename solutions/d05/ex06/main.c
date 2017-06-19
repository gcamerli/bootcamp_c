#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char s1[] = "unicorn";
	char s2[] = "uniporn";

	printf("%d\n", ft_strcmp(s1, s2));
	return (0);
}

/* You don't have to push this ! */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	s1[] = "unicorn";
	char	s2[] = "uniporn";

	printf("%d\n", ft_strncmp(s1, s2, 3));
	return (0);
}

/* You don't have to push this ! */

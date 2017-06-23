#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char test[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s \n", test);
	printf("%s \n", ft_strcapitalize(test));
	return (0);
}

/* You don't have to push this ! */

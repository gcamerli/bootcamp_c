#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int i;
	int min;
	int max;
	int len;
	int *tab;

	i = 0;
	min = 1;
	max = 10;
	len = max - min;
	tab = ft_range(min, max);
	while (i < len)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}

/* You don't have to push this ! */

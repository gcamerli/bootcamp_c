#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int i;
	int min;
	int max;
	int len;
	int *range;

	i = 0;
	min = 1;
	max = 10;
	len = max - min;
	range = ft_range(min, max);
	while (i < len)
	{
		printf("%d", range[i]);
		i++;
	}
	printf("\n");
	return (0);
}

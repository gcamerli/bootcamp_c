#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int i;
	int min;
	int max;
	int len;
	int size;
	int *range;

	i = 0;
	min = 5;
	max = 15;
	len = max - min;
	size = ft_ultimate_range(&range, min, max);
	while (i < size)
	{
		printf("%d, %d\n", i, range[i]);
		i++;
	}
	return (0);
}

/* You don't have to push this ! */

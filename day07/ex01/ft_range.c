#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int len;
	int *range;

	i = 0;
	len = max - min;
	range = (int *)malloc((len + 1) * sizeof(*range));
	if (min >= max)
	{
		range = 0;
		return(range);
	}	
	else
	{
		while (min < max)
		{
			range[i] = min;
			min++;
			i++;
		}
	}
	range[i] = '\0';
	return (range);
}

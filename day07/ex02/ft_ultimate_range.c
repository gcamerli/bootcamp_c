#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int len;
	int *tab;

	i = 0;
	len = max - min;
	tab = (int *)malloc((len + 1) * sizeof(*tab));
	if (min >= max)
	{
		*range = 0;
		return(0);
	}	
	else
	{
		while (min < max)
		{
			tab[i] = min;
			min++;
			i++;
		}
	}
	tab[i] = '\0';
	*range = tab;
	return (i);
}

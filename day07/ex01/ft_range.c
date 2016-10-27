#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int len;
	int *tab;

	i = 0;
	len = max - min;
	tab = (int *)malloc((len + 1) * sizeof(*tab));
	if (min >= max)
	{
		tab = 0;
		return(tab);
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
	return (tab);
}

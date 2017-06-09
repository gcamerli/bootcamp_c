#include <stdio.h>

int	ft_sort_integer_table(int *tab, int size);

int	main(void)
{
	int	tab[9] = {11, 14, 3, 9, 7, 2, 4, 5, 8};
	int i;

	i = 0;
	ft_sort_integer_table(tab, 9);
	while (i < 8)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("%d", tab[8]);
	return (0);
}

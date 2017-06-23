#include <stdio.h>

void	ft_putchar(char c);
void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;
	int	*ptr;
	int	*ptr2;

	a = 24;
	ptr = &a;
	b = 42;
	ptr2 = &b;

	/* Before ft_swap call */
	printf("a is equal to: %d\n", *ptr);
	printf("b is equal to: %d\n", *ptr2);
	ft_putchar('\n');

	/* After ft_swap call */
	ft_swap(ptr, ptr2);
	printf("a is equal to: %d\n", *ptr);
	printf("b is equal to: %d\n", *ptr2);
	return (0);
}

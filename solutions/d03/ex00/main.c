#include <stdio.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putaddr(void *ptr);
void	ft_ft(int *nbr);

int	main(void)
{
	int a;
	int *ptr;

	a = 24;
	ptr = &a;

	/* Before ft_ft call */
	ft_putnbr(*ptr);
	ft_putchar('\n');
	ft_putaddr(ptr);
	ft_putchar('\n');

	/* After ft_ft call */
	ft_ft(ptr);
	ft_putnbr(a);
	ft_putchar('\n');
	ft_putaddr(ptr);
	return (0);
}

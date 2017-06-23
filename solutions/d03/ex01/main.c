#include <stdio.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	a;
	int	*ptr;
	int	**ptr2;
	int	***ptr3;
	int	****ptr4;
	int	*****ptr5;
	int	******ptr6;
	int	*******ptr7;
	int	********ptr8;
	int	*********ptr9;

	a = 24;
	ptr = &a;
	ptr2 = &ptr;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ptr9 = &ptr8;

	/* Before ft_utlimate_ft call */
	ft_putnbr(*********ptr9);
	ft_putchar('\n');

	/* After ft_ultimate_ft call */
	ft_ultimate_ft(ptr9);
	ft_putnbr(a);
	return (0);
}

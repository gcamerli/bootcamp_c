#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char nbr)
{
    write(1, &nbr, 1);
}

void	ft_putnbr(int nbr)
{
	int min;
	int max;

	min = -2147483648;
	max = 2147483647;
	if (nbr > min || nbr <= max)
	{
		if (nbr >= 10)
		{
			ft_putnbr(nbr / 10);
			ft_putnbr(nbr % 10);
		}
		else if (nbr < 0)
		{
			nbr = -nbr;
			ft_putchar('-');
			ft_putnbr(nbr);
		}
		else
			ft_putchar(nbr + '0');
	}
}

void	ft_putaddr(void *nbr)
{
	printf("%p \n", nbr);	
}

/* You don't have to push this ! */

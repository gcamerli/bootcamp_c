#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	min;
	int	max;

	min = -2147483648;
	max = 2147483647;
	if (nb > min || nb <= max)
	{
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else if (nb < 0)
		{
			nb = -nb;
			ft_putchar('-');
			ft_putnbr(nb);
		}
		else
			ft_putchar(nb + '0');
	}
}

void	ft_putaddr(void *ptr)
{
	printf("%p \n", ptr);
	/* printf is forbidden but you can use it for testing. */
}

/* You don't have to push this ! */

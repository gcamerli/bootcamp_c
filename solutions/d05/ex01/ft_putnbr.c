void	ft_putchar(char c);

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

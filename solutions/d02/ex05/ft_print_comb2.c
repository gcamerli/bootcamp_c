void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

void	ft_put_comb(int a, int b)
{
	if (a < 10)
	{
		ft_putchar('0');
	}
	ft_putnbr(a);
	ft_putchar(' ');
	if (b < 10)
	{
		ft_putchar('0');
	}
	ft_putnbr(b);
	if (a != 98 || b != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_put_comb(a, b);
			b++;
		}
		a++;
	}
}

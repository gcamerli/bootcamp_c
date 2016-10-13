void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int	tmp;
	int	size;

	size = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	tmp = nb;
	while (tmp > 9)
	{
		tmp /= 10;
		size *= 10;
	}
	tmp = nb;
	while (size > 0)
	{
		ft_putchar((char)(tmp / size) + 48);
		tmp %= size;
		size /= 10;
	}
}

void	ft_put_comb(int a, int b)
{
	if (a != 0 || b != 1)
		ft_putchar(',');
	if (a != 0 || b != 1)
		ft_putchar(' ');
	if (a < 10)
		ft_putchar('0');
	if (a < 10)
		ft_putchar(a + '0');
	else
		ft_putnbr(a);
	ft_putchar(' ');
	if (b < 10)
		ft_putchar('0');
	if (b < 10)
		ft_putchar(b + '0');
	else
		ft_putnbr(b);
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

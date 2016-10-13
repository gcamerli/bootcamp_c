void	ft_putchar(char c);

void	ft_print_tab(int *tab, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
}

void	ft_set_out(int *tab, int col, int n)
{
	int	i;

	while (1)
	{
		while (tab[col] == (9 + col - (n - 1)) && col >= 0)
			col--;
		if (col < 0)
			break ;
		tab[col]++;
		i = col + 1;
		while (i <= n)
		{
			tab[i] = tab[i - 1] + 1;
			i++;
		}
		col = n - 1;
		ft_putchar(',');
		ft_putchar(' ');
		ft_print_tab(tab, n);
	}
}

void	ft_print_combn(int n)
{
	int	tab[n];
	int	i;
	int col;

	col = n - 1;
	if (n > 10)
		return ;
	i = 0;
	while (i <= n)
	{
		tab[i] = i;
		i++;
	}
	ft_print_tab(tab, n);
	ft_set_out(tab, col, n);
}

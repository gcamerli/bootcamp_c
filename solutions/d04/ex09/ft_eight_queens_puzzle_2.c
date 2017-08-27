#define DIFF(a, b) ((a < b) ? (b - a) : (a - b))

void	ft_putchar(char c);

void	ft_print_layout(int *list)
{
	int	i;

	i = 0;
	while (i < 8)
		ft_putchar((char)list[i++] + 48 + 1);
	ft_putchar('\n');
}

int		ft_solve_2(int n, int col, int *hist)
{
	int i;
	int j;
	int count;

	count = 0;
	if (col == n)
		count++;
	if (col == n)
		ft_print_layout(hist);
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < col && !(hist[j] == i) && !(DIFF(hist[j], i) == col - j))
			j++;
		if (j < col)
			i++;
		if (j < col)
			continue ;
		hist[col] = i;
		count += ft_solve_2(n, col + 1, hist);
		i++;
	}
	return (count);
}

int		ft_eight_queens_puzzle_2(void)
{
	int hist[8];

	return (ft_solve_2(8, 0, hist));
}

void	ft_putchar(char c);

void	ft_print_row(int x, char a, char b, char c)
{
	int i;
	
	if (x == 1)
	{
		ft_putchar(a);
		ft_putchar('\n');
	}
	if (x > 1)
	{
		i = 2; 
		ft_putchar(a);
		while (i < x)
		{
			ft_putchar(b);
			i++;
		}
		ft_putchar(c);
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int i;
	int min;
	
	min = 0;
	if ((x > min) && (y > min))
	{
		if (y == 1)
			ft_print_row(x, 'A', 'B', 'C');
		if (y > 1)
		{
			i = 2;
			ft_print_row(x, 'A', 'B', 'C');
			while (i < y)
			{
				ft_print_row(x, 'B', ' ', 'B');
				i++;
			}
			ft_print_row(x, 'A', 'B', 'C');
		}
	}
}

void	ft_putchar(char c);

char	ft_get_line(int x, char a, char b, char c)
{
	int i;
	
	if (x == 1)
	{
		ft_putchar(a);
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
	}
	ft_putchar('\n');
}

char	rush(int x, int y)
{
	int i;
	
	if (y == 1)
	{
		ft_get_line(x, 'A', 'B', 'A');
	}
	if (y > 1)
	{
		i = 2;
		ft_get_line(x, 'A', 'B', 'A');
		while (i < y)
		{
			ft_get_line(x, 'B', ' ', 'B');
			i++;
		}
		ft_get_line(x, 'C', 'B', 'C');
	}
}

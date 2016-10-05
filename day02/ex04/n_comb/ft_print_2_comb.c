void	ft_putchar(char c);

void	ft_print_2_comb(void)
{
	char i;
	char j;
	
	i = '/';
	while (i <=	'9')
	{
		j = ++i + 1;
		while (j <= '9')
		{	
			ft_putchar(i);
			ft_putchar(j);
			j++;
			if (i != '8')
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}

/* You don't have to push this ! */

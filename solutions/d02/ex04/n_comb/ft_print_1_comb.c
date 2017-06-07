void	ft_putchar(char c);

void	ft_print_1_comb(void)
{
	char i;
	
	i = '/';
	while (i <= '9')
	{
		i = ++i;
		while (i <= '9')
		{	
			ft_putchar(i);
			i++;
			if (i <= '9')
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}

/* You don't have to push this ! */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	char i;
	char j;
	char k;
	
	i = '/';
	while (i <= '9')
	{
		j = ++i;	
		while (j <=	'9')
		{
			k = ++j + 1;
			while (k <= '9')
			{	
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(k);
				k++;
				if (i != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}

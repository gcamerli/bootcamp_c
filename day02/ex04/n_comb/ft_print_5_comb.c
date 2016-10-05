void	ft_putchar(char c);

void	ft_print_5_comb(void)
{
	char i;
	char j;
	char k;
	char l;
	char m;
	
	i = '/';
	while (i <= '9')
	{
		j = ++i;	
		while (j <=	'9')
		{
			k = ++j;
			while (k <= '9')
			{	
				l = ++k;
				while (l <= '9')
				{	
					m = ++l + 1;
					while (m <= '9')
					{
						ft_putchar(i);
						ft_putchar(j);
						ft_putchar(k);
						ft_putchar(l);
						ft_putchar(m);
						m++;
						if (i != '5')
						{
							ft_putchar(',');
							ft_putchar(' ');
						}
					}
				}
			}
		}
	}
}

/* You don't have to push this ! */

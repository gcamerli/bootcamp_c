void	ft_putchar(char c);

void	ft_print_4_comb(void)
{
	char	i;
	char	j;
	char	k;
	char	l;
	
	i = '/';
	while (i <= '9')
	{
		j = ++i;	
		while (j <= '9')
		{
			k = ++j;
			while (k <= '9')
			{	
				l = ++k + 1;
				while (l <= '9')
				{	
					ft_putchar(i);
					ft_putchar(j);
					ft_putchar(k);
					ft_putchar(l);
					l++;
					if (i != '6')
					{
						ft_putchar(',');
						ft_putchar(' ');
					}
				}
			}
		}
	}
}

/* You don't have to push this ! */

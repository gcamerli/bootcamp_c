void	ft_putchar(char c);

char	ft_putstr(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int i;
	int len;

	len = argc -1;
	if (argc >= 2)
	{
		i = 1;
		while (len >= i)
		{
			ft_putstr(argv[len]);
			ft_putchar('\n');
			len--;
		}
	}
	return (0);
}

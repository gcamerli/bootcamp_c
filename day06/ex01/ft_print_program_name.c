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
	if (argc == 1)
	{
		ft_putstr(argv[0]);
		ft_putchar('\n');
	}
	return (0);
}

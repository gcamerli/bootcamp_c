int	ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	if (str[0] == 0)
	{
		return (1);
	}
}

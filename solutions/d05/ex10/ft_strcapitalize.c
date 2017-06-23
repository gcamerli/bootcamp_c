char *ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[0] >= 97 && str[0] <= 122)
	{
		str[0] = str[0] - 32;
	}
	while (str[i] != '\0')
	{
		i++;
	}
	return (str);
}

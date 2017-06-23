int	ft_str_is_alphanum(char c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	if (c >= 97  && c <= 122)
	{
		return (1);
	}
	return (0);
}

char *ft_strcapitalize(char *str)
{
	int	i;
	char	*s;

	i = 0;
	s = str;
	while (s[i] != '\0')
	{
		if (ft_str_is_alphanum(s[i - 1]) && s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] += 32;
		}
 		if (!ft_str_is_alphanum(s[i - 1]) && s[i] >= 'a' && s[i] <= 'z')
		{
 			s[i] -= 32;
		}
		i++;
	}
	return (str);
}

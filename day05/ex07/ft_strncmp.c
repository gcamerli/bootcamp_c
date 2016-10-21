int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;
	
	i = 0;
	while (i < n -1 && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] > s2[i])
	{
		return (s1[i] - s2[i]);
	}
	else if (s1[i] < s2[i])
	{
		return (s1[i] - s2[i]);
	}
	else
	{
		return (0);
	}
}

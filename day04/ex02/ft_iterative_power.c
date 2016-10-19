int	ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	i = 0;
	result = 1;
	if (i >= 0 && power >= 0)
	{
		while (i < power)
		{
			result = nb * result;
			i++;
		}
	}
	else
	{
		return (0);
	}
	return (result);
}

/* Overflows don’t have to be handled ! */

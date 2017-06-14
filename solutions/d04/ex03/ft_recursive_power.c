int	ft_recursive_power(int nb, int power)
{
	int result;

	if (nb >= 1 && power >= 1)
	{
		result = nb * ft_recursive_power(nb, power - 1);
		return (result);
	}
	else if (nb == 0 || power == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/* Overflows don’t have to be handled ! */ 

int	ft_is_prime(int nb)
{
	int i;
	int max;
	
	i = 2;
	max = 2147483647;
	if (nb == 0 || nb == 1)
	{
		return (0);
	}
	while (i <= nb / 2 && nb < max)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

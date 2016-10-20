int	ft_is_prime(int nb)
{
	int i;
	
	i = 2;
	while (i <= nb / 2 && nb < 2147483647)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	if (nb == 0 || nb == 1)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

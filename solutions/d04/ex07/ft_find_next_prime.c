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

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
	{
		return (2);
	}
	nb += (nb % 2) ? 0 : 1;
	while (!ft_is_prime(nb))
	{
		nb += 2;
	}
	return (nb);
}

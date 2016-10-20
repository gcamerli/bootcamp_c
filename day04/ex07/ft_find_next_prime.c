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
	int np;

	if (nb < 2)
	{
		np = 2;
	}
	else if (nb == 2)
	{
		np = 3;
	}	
	else if (nb & 1)
	{
		nb += 2;
		np = ft_is_prime(nb) ? nb : ft_find_next_prime(nb);
	}
	else
	{
		np = ft_find_next_prime(nb -1);
	}
	return (np);
}

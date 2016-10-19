int	ft_iterative_factorial(int nb)
{
	int i;
	int result;
	
	i = 1;
	result = 1;
	if (nb < 0 || nb >= 13)
	{ 
		return (0);
	}
	while (i <= nb && nb <= 12)
	{
		result *= i;
		i++;
	}
	return (result);
}

/* Pay attention to the return int size ! */

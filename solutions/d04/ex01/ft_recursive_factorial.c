int	ft_recursive_factorial(int nb)
{
	int result;

	if (nb >= 1 && nb <= 12)
	{
		result = nb * ft_recursive_factorial(nb - 1);
		return (result);
	}
	else if (nb == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/* Pay attention to the return int size ! */

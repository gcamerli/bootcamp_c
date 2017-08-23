int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb >= 1 && nb <= 12)
	{
		result = nb * ft_recursive_factorial(nb - 1);
		return (result);
	}
	if (nb == 0)
		return (1);
	else
		return (0);
}

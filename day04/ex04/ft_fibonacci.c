int	ft_fibonacci(int index)
{
	int result;
	
	if (index == 0)
	{
		return (0);
	}
	else if (index == 1 || index == 2)
	{
		return (1);
	}
	else if (index >= 3 && index < 42)
	{
		result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (result);	
	}
	else
	{
		return (-1);
	}
}

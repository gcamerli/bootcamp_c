int	ft_sqrt(int nb)
{
	int r;

	r = 1;
	while (r * r != nb)
	{
		if (r / 2 > nb)
		{
			break;
		}
		r++;
	}
	if (r * r == nb)
	{
		return (r);
	}
	else 
	{
		return (0);
	}
}

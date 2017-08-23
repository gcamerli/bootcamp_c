int	ft_sqrt(int nb)
{
	int	root;

	root = 1;
	while (root * root != nb)
	{
		if (root / 2 > nb)
			break ;
		root++;
	}
	if (root * root == nb)
		return (root);
	else 
		return (0);
}

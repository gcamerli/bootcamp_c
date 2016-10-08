void	ft_ultimate_div_mod(int *a, int *b)
{
	int temp;

	temp = *a;
	*a /= *b;
	*b = temp % *b;
}

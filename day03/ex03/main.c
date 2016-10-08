void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putaddr(void *ptr);

int	main(void)
{
	int a;
	int b;
	int *ptr;

	a = 42;
	b = 2;	
	ptr = &a;
	ft_putchar(*(ptr / b));
	return (0);
}

#include <stdlib.h>

int	ft_puchar(char c);
void	sastantua(int size);

/* Test */
int	main(int argc, char **argv)
{
	int size;

	size = atoi(argv[1]);
	if (argc == 2)
		sastantua(size);
	else
		return (0);
}

/* You don't have to push this ! */

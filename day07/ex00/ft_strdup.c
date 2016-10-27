#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int i;
	int len;
	char *dest;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	dest = (char *)malloc((len + 1) * sizeof(*dest));
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

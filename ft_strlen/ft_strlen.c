int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

#include <stdio.h>
int	main(int argc, char *argv[])
{
	int i = 1;
	while (i < argc)
	{
		printf("%i", ft_strlen(argv[i]));
		i++;
	}
}
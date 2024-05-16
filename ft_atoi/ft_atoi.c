int	ft_atoi(const char *str)
{
	int result = 0;
	int i = 0;
	if (str[0] == '-')
	{
		i++;
	}
	while (str[i] != '\0')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (str[0] == '-')
	{
		result = result * (-1);
	}
	return result;
}


#include <stdio.h>
int	main(int argc, char *argv[])
{
	printf("%i\n", ft_atoi(argv[1]));
}
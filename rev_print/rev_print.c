int	length_str(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	return (i);
}

char	*ft_rev_print(char *str)
{
	int		length;
	int		i;
	char	temp;

	length = length_str(str);
	i = 0;
	while (i < length)
	{
		temp = str[i];
		str[i] = str[length];
		str[length] = temp;
		i++;
		length--;
	}
	return (str);
}

#include <stdio.h>
int main(int argc, char *argv[])
{
	int i = 1;
	while (i < argc)
	{
		printf("%s\n", ft_rev_print(argv[i]));
		i++;
	}
}
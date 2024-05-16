int	length_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i - 1);
}
char	*ft_strrev(char *str)
{
	int	i;
	char temp = ' ';
	int length;

	i = 0;
	length = length_str(str);
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

#include <unistd.h>
int	main(int argc, char *argv[])
{
	int i = 0;
	if (argc != 2)
	{
		return 0;
	}
	
	ft_strrev(argv[1]);
	while (argv[1][i] != '\0')
	{
		write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
}
#include <unistd.h>
#include <stdio.h>

void	find_last_string(char *str1)
{
	int i;

	i = 0;
	while (str1[i] != '\0')
	{
		i++;
	}
	i--;
	while (str1[i] == ' ' || str1[i] == '\t')
	{
		i--;
	}
	while (str1[i] != ' ' && str1[i] != '\t')
	{
		i--;
	}
	i++;
	while (str1[i] != ' ' && str1[i] != '\t')
	{
		write(1, &str1[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		find_last_string(argv[1]);
	}
	write(1, "\n", 1);
}
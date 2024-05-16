#include <unistd.h>

int	check_for_doubles(char *str, char ch, int pos)
{
	int i = 0;
	while (i < pos)
	{
		if (str[i] == ch)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	remove_doubles_write(char *str1)
{
	int i = 0;

	while (str1[i] != '\0')
	{
		if (check_for_doubles(str1, str1[i], i) == 1)
		{
			write(1, &str1[i], 1);
		}
		i++;
	}
	
}

void	find_doubles(char *str1, char *str2)
{
	int i = 0;
	int j = 0;

	while (str1[i] != '\0' && str2[j] != '\0')
	{
		if (str1[i] != str2[j])
		{
			j++;
		}
		else
		{
			str1[i] = str2[j];
			i++;
		}
	}
	str1[i] = '\0';
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		find_doubles(argv[1], argv[2]);
		remove_doubles_write(argv[1]);
	}
	write(1, "\n", 1);
}
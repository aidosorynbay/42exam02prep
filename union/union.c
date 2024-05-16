#include <unistd.h>

int	check_doubles_str1(char *str, char ch, int pos)
{
	int i = 0;
	while(i < pos)
	{
		if (str[i] == ch)
		{
			return 1;
		}
		i++;
	}
	return 0;
}

int	check_doubles_str2(char *str2, char *str1, char ch, int pos)
{
	int i = 0;
	int j = 0;
	while (str1[j] != '\0')
	{
		if (str1[j] == ch)
		{
			return 1;
		}
		j++;
	}
	while (i < pos)
	{
		if (str2[i] == ch)
		{
			return 1;
		}
		i++;
	}
	return 0;
}

void	write_no_doubles(char *str1, char *str2)
{
	int i = 0;
	while (str1[i] != '\0')
	{
		if (check_doubles_str1(str1, str1[i], i) == 0)
		{
			write(1, &str1[i], 1);
		}
		i++;
	}
	i = 0;
	while (str2[i] != '\0')
	{
		if (check_doubles_str2(str2, str1, str2[i], i) == 0)
		{
			write(1, &str2[i], 1);
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		write_no_doubles(argv[1], argv[2]);
	}
	write(1, "\n", 1);
}
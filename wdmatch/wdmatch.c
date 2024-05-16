#include <unistd.h>

char	*wd_match(char *str1, char *str2)
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
			i++;
			j++;
		}
	}
	if (str1[i] != '\0')
	{
		return "";
	}
	else
	{
		return str1;
	}
}

#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%s\n", wd_match(argv[1], argv[2]));
	}
	else
	{
		write(1, "\n", 1);
	}
}
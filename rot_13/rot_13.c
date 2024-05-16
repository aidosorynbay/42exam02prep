#include <unistd.h>

void	mod_string(char *str)
{
	int i = 0;
	int j = 0;
	char alph_lower[] = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
	char alph_upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";
	while (str[i] != '\0')
	{
		j = 0;
		if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
		{
			write(1, &str[i], 1);
			i++;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			while (alph_upper[j] != str[i])
			{
				j++;
			}
			write(1, &alph_upper[j + 1], 1);
			i++;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			while (alph_lower[j] != str[i])
			{
				j++;
			}
			write(1, &alph_lower[j + 1], 1);
			i++;
		}
		else
		{
			return;
		}
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		mod_string(argv[1]);
	}
	write(1, "\n", 1);
}
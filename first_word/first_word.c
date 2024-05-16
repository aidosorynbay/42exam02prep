#include <unistd.h>

void	sep_first_word(char *str)
{
	int i;

	i = 0;
	if(str[i] == '\0')
		return ;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t'))
		i++;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		sep_first_word(argv[1]);
	write (1, "\n", 1);
}
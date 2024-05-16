#include <stdio.h>
#include <stdlib.h>

int	word_count(char *str)
{
	int i = 0;
	int count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			{
				i++;
			}
		}
		else
		{
			count++;
			while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
			{
				i++;
			}
		}
	}
	return count;
}

char **do_malloc_for_each_string(char *str, char **arr, int count)
{
	int i = 0;
	int j;
	int k = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			{
				i++;
			}
		}
		else
		{
			j = 0;
			while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
			{
				j++;
				i++;
			}
			arr[k] = malloc((j + 1) * sizeof(char));
			k++;
		}
	}
	arr[count + 1] = NULL;
	return arr;
}

char	**assign_str_arr(char **arr, char *str)
{
	int i = 0;
	int j;
	int k = 0;
	while (arr[k] != NULL)
	{
		while (str[i] != '\0')
		{
			if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			{
				while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
				{
					i++;
				}
			}
			else
			{
				j = 0;
				while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
				{
					arr[k][j] = str[i]; 
					i++;
					j++;
				}
				arr[k][j] = '\0';
				k++;
			}
		}
	}
	return arr;
}

char	**ft_split(char *str)
{
	char **arr = NULL;
	int count = word_count(str);
	arr = malloc((count + 1) * sizeof(char*));
	arr = do_malloc_for_each_string(str, arr, count);
	arr = assign_str_arr(arr, str);
	return arr;
}


int	main(void)
{
	char str[] = "        5 divide these   words	\n	apart please,      ";
	char **arr = ft_split(str);
	int i = 0;
	while (arr[i] != NULL)
	{
		printf("|%s|\n", arr[i]);
		i++;
	}
}
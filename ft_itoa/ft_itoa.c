#include <stdlib.h>

char	*int_to_str(char *result, int nbr)
{
	int i = 0;
	if (nbr > 0)
	{
		while (nbr > 0)
		{
			result[i] = nbr % 10 + '0';
			i++;
			nbr = nbr / 10;
		}
		result[i] = '\0';
		return result;
	}
	result[i] = '-';
	i++;
	nbr = -nbr;
	while (nbr > 0)
	{
		result[i] = nbr % 10 + '0';
		i++;
		nbr = nbr / 10;
	}
	result[i] = '\0';
	return result;
}

char	*allocate_mem(char *result, int nbr)
{
	int count = 0;
	int temp = nbr;
	while (temp > 0)
	{
		count++;
		temp = temp / 10;
	}
	if (nbr < 0)
	{
		result = malloc((count + 2) * sizeof(char));
	}
	else
	{
		result = malloc((count + 1) * sizeof(char));
	}
	return result;
}

int	len_result(char *result)
{
	int i = 0;
	while (result[i] != '\0')
	{
		i++;
	}
	return i;
}

void	reverse_result(char *result, int nbr)
{
	char temp = ' ';
	int i = 0;
	int result_len = len_result(result);
	result_len--;
	if (nbr > 0)
	{
		while (i < result_len)
		{
			temp = result[i];
			result[i] = result[result_len];
			result[result_len] = temp;
			i++;
			result_len--; 
		}
	}
	else
	{
		i = 1;
		while (i < result_len)
		{
			temp = result[i];
			result[i] = result[result_len];
			result[result_len] = temp;
			i++;
			result_len--; 
		}
	}
}

char	*ft_itoa(int nbr)
{
	char *result = NULL;

	if (nbr == 0)
	{
		result = malloc(sizeof(char) * 2);
		result[0] = '0';
		result[1] = '\0';
		return result;
	}
	result = allocate_mem(result, nbr);
	result = int_to_str(result, nbr);
	reverse_result(result, nbr);
	return result;
}

#include <stdio.h>
int	main(void)
{
	char *ptr = ft_itoa(-1);
	printf("%s\n", ptr);
	free(ptr);
}
#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int i = 0;
	if (end > start)
	{
		int *result = malloc(((end - start) + 1) * sizeof(int));
		while (end >= start)
		{
			result[i] = start;
			start++;
			i++;
		}
		return result;
	}
	else if (start > end)
	{
		int *result = malloc((-(end - start) + 1) * sizeof(int));
		while (start >= end)
		{
			result[i] = end;
			end++;
			i++;
		}
		return result;
	}
	else
	{
		int *result = malloc(sizeof(int));
		result[0] = 0;
		return result;
	}
}
#include <stdio.h>
int	main()
{
	int size = 5;
	int *arr = ft_range(-1, 3);
	int i = 0;
	while(i < size)
	{
		printf("%i\n", arr[i++]);
	}
	free(arr);
}
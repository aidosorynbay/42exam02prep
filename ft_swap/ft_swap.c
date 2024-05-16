void	ft_swap(int *a, int *b)
{
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}

#include <stdio.h>
int	main()
{
	int a = 333;
	int b = 0;
	printf("%i\n", a);
	printf("%i\n", b);
	ft_swap(&a, &b);
	printf("%i\n", a);
	printf("%i\n", b);
}
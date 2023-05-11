#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int	main(void)
{
	int a;
	int b;
	int x;
	int y;

	a = 20;
	b = 6;
	ft_div_mod(a, b, &x, &y);
	printf("\nThe division of a and b is: %d\n", x);
	printf("\nThe modulo of a and b is: %d\n\n", y);

    return(0);
}
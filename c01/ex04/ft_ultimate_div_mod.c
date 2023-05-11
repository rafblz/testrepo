#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	if (b != 0)
	{
        int div;
        int mod;

		div = *a / *b;
		mod = *a % *b;
        *a = div;
        *b = mod;
	}
}

int	main(void)
{
	int x;
	int y;

	x = 20;
	y = 6;

	ft_ultimate_div_mod(&x, &y);
	printf("\nThe division of a and b is: %d\n", x);
	printf("\nThe modulo of a and b is: %d\n\n", y);
}
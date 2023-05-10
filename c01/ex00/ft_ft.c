#include <stdio.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
}

int main(void)
{
    int *nbr;
    int n;

    nbr = &n;
    ft_ft(nbr);
    printf("%d", n);
}
#include<stdio.h>
#include<unistd.h>

void ft_swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int x;
    int y;

    x = 2;
    y = 4;

    printf("\nOriginal value of x: %d\n",x);
    printf("Original value of y: %d\n",y);

    ft_swap(&x, &y);

    printf("\nUpdated value of x: %d\n",x);
    printf("Updated value of y: %d\n\n",y);

    return(0);
}
#include<unistd.h>
#include <stdbool.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb(int i, int j, bool last)
{
     ft_putchar(48 + i / 10);
     ft_putchar(48 + i % 10);
     ft_putchar(' ');
     ft_putchar(48 + j / 10);
     ft_putchar(48 + j % 10);
     if(last)
     {
		ft_putchar(',');
		ft_putchar(' ');
	 }
}


void ft_print_comb2(void)
{
    int i;
    int j;
    bool last;

    i = '0';
    while(i <= 99)
    {
        j = i + 1;
        while(j <= 99)
        {
                last = !(i == 98 && j == 99);
                ft_print_comb(i, j, last);
            j++;
        }
        i++;
    }
}

int main(void)
{
    ft_print_comb2();
    return(0);
}
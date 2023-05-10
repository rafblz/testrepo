#include<unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb(void)
{
    int i;
    int j;
    int x;

    i = '0';
    while(i <= '7')
    {
        j = i + 1;
        while(j <= '8')
        {
            x = j + 1;
            while(x <= '9')
            {
                ft_putchar(i);
                ft_putchar(j);
                ft_putchar(x);
                if( i != '7')
                {
                    write(1, ", ",2);
                }
                x++;
            }
           j++;
        }
        i++;
    }
}

int main(void)
{
    ft_print_comb();
    return(0);
}
#include<unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void t_print_reverse_alphabet(void)
{
    char c = 'z';
    while(c >= 'a')
    {
        ft_putchar(c);
        c--;
    }
}

int main(void)
{
    t_print_reverse_alphabet();
}
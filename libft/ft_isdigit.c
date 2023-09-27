#include <stdio.h>

int ft_isdigit(int c)
{
    return (c >= '0' && c <= '9');
}

int main(void)
{
    printf("%d\n", ft_isdigit('2'));
    printf("%d\n", ft_isdigit('7'));
    printf("%d\n", ft_isdigit('a'));
    printf("%d\n", ft_isdigit('\n'));
    return (0);
}
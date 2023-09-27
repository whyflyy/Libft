#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    else   
        return (0);
}

int main(void)
{
    printf("%d\n", ft_isalpha('\n'));
    printf("%d\n", ft_isalpha('U'));
    printf("%d\n", ft_isalpha('w'));
    printf("%d\n", ft_isalpha('U'));
    printf("%d\n", ft_isalpha('2'));
    return (0);
}
#include "libft.h"

int ft_isalpha(int c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
/*
int main(void)
{
    printf("%d\n", ft_isalpha('\n'));
    printf("%d\n", ft_isalpha('U'));
    printf("%d\n", ft_isalpha('w'));
    printf("%d\n", ft_isalpha('U'));
    printf("%d\n", ft_isalpha('2'));
    return (0);
}
*/
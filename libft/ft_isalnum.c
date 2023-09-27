#include <stdio.h>
#include "libft.h"

int ft_isalnum(int c)
{
    return(ft_isalpha(c) || ft_isdigit(c));
}

int main(void)
{
    printf("%d\n", ft_isalnum('\n'));
    printf("%d\n", ft_isalnum('U'));
    printf("%d\n", ft_isalnum('w'));
    printf("%d\n", ft_isalnum('U'));
    printf("%d\n", ft_isalnum('2'));
    return (0);
}
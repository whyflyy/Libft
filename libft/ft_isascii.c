#include "libft.h"

int ft_isascii(int c)
{
    return (c >= 0 && c <= 127);
}
/*
int main(void)
{
    printf("%d\n", ft_isascii(20));
    printf("%d\n", ft_isascii(60));
    printf("%d\n", ft_isascii(128));
    printf("%d\n", ft_isascii(200));
    return (0);
}
*/
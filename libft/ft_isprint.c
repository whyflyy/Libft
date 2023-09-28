#include "libft.h"

int ft_isprint(int c)
{
    return (c >= 32 && c <= 126);    
}
/*
int main(void)
{
    printf("%d\n", ft_isprint(2));
    printf("%d\n", ft_isprint(69));
    printf("%d\n", ft_isprint(45));
    printf("%d\n", ft_isprint(127));
    return (0);
}
*/
#include "libft.h"

size_t ft_strlen(const char *c)
{
    size_t i;

    i = 0;
    while (c[i])
        i++;
    return (i);
}
/*
int main(void)
{
    printf("%ld\n", ft_strlen("AwA OwO EwE"));
    printf("%ld\n", ft_strlen("ehe\0UwUw"));
    printf("%ld\n", ft_strlen("ahahahahahahahahahahha"));
    return (0);
}
*/

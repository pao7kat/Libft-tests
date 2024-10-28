#include "libft.h"
#include <stdio.h>

int main(void)
{
    printf("ft_isalpha('A'): %d\n", ft_isalpha('A'));
    printf("ft_isdigit('5'): %d\n", ft_isdigit('5'));
    printf("ft_isprint(' '): %d\n", ft_isprint(' '));
    printf("ft_isascii(127): %d\n", ft_isascii(127));
    printf("ft_isalnum('A'): %d\n", ft_isalnum('A'));
    
    return 0;
}

#include "libft.h"
#include <stdio.h>

int main(void)
{
    // Test ft_itoa
    int num = 12345;
    char *num_str = ft_itoa(num);
    printf("ft_itoa: %s\n", num_str);
    free(num_str);

    //Test ft_atoi
    printf("%d\n", ft_atoi("123456789"));
    return 0;
}


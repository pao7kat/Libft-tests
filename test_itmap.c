#include "libft.h"
#include <stdio.h>

void iter(unsigned int i, char *c)
{
    *c = *c + i;  // Modify char based on its index
}

char map(unsigned int i, char c)
{
    return c + i;
}

int main(void)
{
    // Test ft_striteri
    char s1[] = "abcd";
    ft_striteri(s1, iter);
    printf("ft_striteri: %s\n", s1);

    // Test ft_strmapi
    char *mapped = ft_strmapi("abcd", map);
    printf("ft_strmapi: %s\n", mapped);
    free(mapped);

    return 0;
}


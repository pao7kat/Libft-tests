#include "libft.h"
#include <stdio.h>

int main(void)
{
    // Test ft_substr
    char *substr = ft_substr("Hello, World!", 7, 5);
    printf("ft_substr: %s\n", substr);
    free(substr);

    // Test ft_strjoin
    char *joined = ft_strjoin("Hello", " World!");
    printf("ft_strjoin: %s\n", joined);
    free(joined);

    // Test ft_strtrim
    char *trimmed = ft_strtrim("   Hello, World!   ", " ");
    printf("ft_strtrim: '%s'\n", trimmed);
    free(trimmed);

    // Test ft_split
    char **split = ft_split("Hello,World,42,Libft", ',');
    for (int i = 0; split[i] != NULL; i++)
    {
        printf("ft_split: %s\n", split[i]);
        free(split[i]);
    }
    free(split);

    return 0;
}

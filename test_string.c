#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *str = "Hello, World!";
    
    // Test ft_strlen
    printf("ft_strlen: %zu\n", ft_strlen(str));

    // Test ft_strlcat
    char dest[50] = "Hello ";
    char *src = "World!";
    printf("ft_strlcat: %zu\n", ft_strlcat(dest, src, sizeof(dest)));
    printf("After ft_strlcat: %s\n", dest);

    // Test ft_strlcpy
    char dest2[50];
    printf("ft_strlcpy: %zu\n", ft_strlcpy(dest2, str, sizeof(dest2)));
    printf("After ft_strlcpy: %s\n", dest2);

    // Test ft_strchr
    char *chr = ft_strchr(str, 'W');
    if (chr)
        printf("ft_strchr: Found 'W' at %s\n", chr);
    else
        printf("ft_strchr: 'W' not found\n");

    // Test ft_strrchr
    char *rchr = ft_strrchr(str, 'l');
    if (rchr)
        printf("ft_strrchr: Found last 'l' at %s\n", rchr);
    else
        printf("ft_strrchr: 'l' not found\n");

    // Test ft_strncmp
    printf("ft_strncmp(\"Hello\", \"Helm\", 3): %d\n", ft_strncmp("Hello", "Helm", 3));

    // Test ft_strnstr
    char *needle = "World";
    char *haystack = "Hello, World!";
    char *substr = ft_strnstr(haystack, needle, ft_strlen(haystack));
    if (substr)
        printf("ft_strnstr: Found \"%s\" in \"%s\"\n", needle, haystack);
    else
        printf("ft_strnstr: \"%s\" not found in \"%s\"\n", needle, haystack);

    // Test ft_strdup
    char *dup = ft_strdup("Duplicate me");
    printf("ft_strdup: %s\n", dup);
    free(dup);

    return 0;
}

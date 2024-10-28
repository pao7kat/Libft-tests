#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    char buffer[20];

    // Test ft_memset
    ft_memset(buffer, 'A', 10);
    buffer[10] = '\0';
    printf("ft_memset: %s\n", buffer);

    // Test ft_bzero
    ft_bzero(buffer, 5);
    printf("ft_bzero (first 5 chars set to zero): %s\n", buffer + 5);

    // Test ft_memcpy
    char src[] = "Libft Test";
    char dst[20];
    ft_memcpy(dst, src, ft_strlen(src) + 1);
    printf("ft_memcpy: %s\n", dst);

    // Test ft_memmove
    char overlap[] = "123456789";
    ft_memmove(overlap + 2, overlap, 5);
    printf("ft_memmove (overlapping): %s\n", overlap);

    // Test ft_memchr
    char *mem_chr = ft_memchr(src, 'T', ft_strlen(src));
    if (mem_chr)
        printf("ft_memchr: Found 'T' at %s\n", mem_chr);
    else
        printf("ft_memchr: 'T' not found\n");

    // Test ft_memcmp
    printf("ft_memcmp(\"abc\", \"abd\", 3): %d\n", ft_memcmp("abc", "abd", 3));

    // Test ft_calloc
    int *arr = (int *)ft_calloc(5, sizeof(int));
    if (arr)
    {
        printf("ft_calloc: Allocated array of 5 ints\n");
        free(arr);
    }

    return 0;
}

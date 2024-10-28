#include "libft.h"
#include <stdio.h>

int main(void)
{
    // Test ft_putchar_fd
    ft_putchar_fd('A', 1);
    write(1, "\n", 1);

    // Test ft_putnbr_fd
    ft_putnbr_fd(12345, 1);
    write(1, "\n", 1);

    // Test ft_putendl_fd
    ft_putendl_fd("Hello, World!", 1);

    // Test ft_putstr_fd
    ft_putstr_fd("This is a string", 1);
    write(1, "\n", 1);

    return 0;
}


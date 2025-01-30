//header

/*prints a string to standard output, followed
by a newline.*/
#include "libft.h"

void    ft_putendl(char *s)
{
        if (!s)
                return; 
        while (*s)
                write(1, s++, 1);
        write(1, "\n", 1);
}
/*
int     main(void)
{
    ft_putendl("Let's try this function");
    return (0);
}*/
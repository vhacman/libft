//header
#include "libft.h"

void    ft_putendl_fd(char *s, int fd)
{
        if (!s)
                return ;
        ft_putstr_fd(s, fd);
        ft_putchar_fd('\n', fd);

}
/*
int     main(void)
{
        ft_putendl_fd("Ciao!", STDOUT_FILENO);
	ft_putendl_fd("Questa è una riga di testo.", STDOUT_FILENO);
	ft_putendl_fd(NULL, STDOUT_FILENO); 
	return (0);
}*/

//header
/* used to convert an int to a string /int len = (n <= 0) ? 1 : 0;*/
#include "libft.h"

static int      ft_get_num_len(int n)
{
        int     len;

        if (n <= 0)
                len = 1;
        else
                len = 0;
        while (n)
        {
                len++;
                n /= 10;
        }
        return (len);
}

char    *ft_itoa(int n)
{
        int     len;
        char    *str;

        len = ft_get_num_len(n);
        str = (char *)malloc(sizeof(char *) * (len + 1));
        if (!str)
        return (NULL);
        str[len] = '\0';
        long    num;
        num = n;
        if (num < 0)
        {
                str[0] = '-';
                num = -num;
        }
        while (len-- && str[len] != '-')
        {
                str[len] = (num % 10) + '0';
                num /= 10;
        }
        return (str);
}
/*
int     main(void)
{
    int test[] = {0, -123, 456, -2147483648, 2147483647};
    int i = 0;
    
    while (i < 5)
    {
        char *str = ft_itoa(test[i]);
        printf("ft_itoa(%d) = %s\n", test[i], str);
        free(str);
        i++;
    }
    return (0);
}*/

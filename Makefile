Library = libft

files = ft_atoi ft_bzero ft_isalnum ft_isdigit ft_isascii ft_isalpha ft_isprint ft_itoa ft_memchr ft_memcmp ft_memcpy ft_memmove ft_memset ft_putchar_fd
	ft_putendl_fd ft_putnbr_fd ft_putstr_fd ft_strchr ft_strdup ft_strlcat ft_strlcpy ft_strlen ft_strncmp ft_strnstr ft_strrchr ft_tolower
	ft_toupper ft_calloc ft_substr ft_strjoin ft_strtrim ft_split ft_strmapi ft_striteri
		
Compiler = gcc
CmpFlags = -Wall -Werror -Wextra

OUTN = $(Library).a
CFILES = $(files:%=%.c)
OFILES = $(files:%=%.o)

NAME = $(OUTN)

$(NAME): $(OFILES)
	@$(Compiler) $(CmpFlags) -c $(CFILES) -I./
	@ar -rc $(OUTN) $(OFILES)

all: $(NAME)

clean:
	@rm -f $(OFILES)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
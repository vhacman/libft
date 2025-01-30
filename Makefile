# Name of the static library
Library = libft

# List of source files (no need to include the .c extensions here)
files = ft_atoi ft_bzero ft_isalnum ft_isdigit ft_isascii ft_isalpha ft_isprint ft_itoa ft_memchr ft_memcmp ft_memcpy ft_memmove ft_memset ft_putchar_fd \
        ft_putendl_fd ft_putnbr_fd ft_putstr_fd ft_strchr ft_strdup ft_strlcat ft_strlcpy ft_strlen ft_strncmp ft_strnstr ft_strrchr ft_tolower \
        ft_toupper ft_calloc ft_substr ft_strjoin ft_strtrim ft_split ft_strmapi ft_striteri

# Compiler and flags
Compiler = gcc
CmpFlags = -Wall -Werror -Wextra

# Output name for the static library
OUTN = $(Library).a

# Source files (.c)
CFILES = $(files:%=%.c)

# Object files (.o) corresponding to the source files
OFILES = $(files:%=%.o)

# Target to create the static library
$(OUTN): $(OFILES)
	@ar -rc $(OUTN) $(OFILES)    # Create the static library

# Rule to compile .c files into .o files
%.o: %.c
	@$(Compiler) $(CmpFlags) -c $< -o $@   # Compile each .c into .o

# Default target
all: $(OUTN)

# Clean object files
clean:
	@rm -f $(OFILES)

# Clean everything (object files and the static library)
fclean: clean
	@rm -f $(OUTN)

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re

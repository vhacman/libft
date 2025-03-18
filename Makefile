# **************************************************************************** #
#                                Variabili                                     #
# **************************************************************************** #

NAME        = libft.a
CC          = gcc
CFLAGS      = -Wall -Wextra -Werror
AR          = ar rcs
RM          = rm -f

# ----------------- LISTA DEI .C DELLA LIBFT (base) ----------------------------
LIBFT_SRCS = \
	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
	ft_isdigit.c ft_isprint.c ft_isascii.c ft_itoa.c ft_memchr.c \
	ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c \
	ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
	ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
	ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

# ----------------- LISTA DEI .C BONUS LIBFT ------------------------------------
BONUS_SRCS = \
	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

# ----------------- LISTA DEI .C DI FT_PRINTF -----------------------------------
PRINTF_SRCS = \
	ft_printf.c ft_printf_utils.c

# ----------------- LISTA DEI .C DI GET_NEXT_LINE ------------------------------
GNL_SRCS = \
	get_next_line.c get_next_line_utils.c

# ----------------- LISTA DEI .C BONUS GET_NEXT_LINE ---------------------------
GNL_BONUS_SRCS = \
	get_next_line_bonus.c get_next_line_utils_bonus.c

# **************************************************************************** #
#                         Creazione liste di oggetti                           #
# **************************************************************************** #

LIBFT_OBJS       = $(LIBFT_SRCS:.c=.o)
BONUS_OBJS       = $(BONUS_SRCS:.c=.o)
PRINTF_OBJS      = $(PRINTF_SRCS:.c=.o)
GNL_OBJS         = $(GNL_SRCS:.c=.o)
GNL_BONUS_OBJS   = $(GNL_BONUS_SRCS:.c=.o)

# **************************************************************************** #
#                                  Regole                                      #
# **************************************************************************** #

all: $(NAME)

# Unisce i .o di LIBFT, PRINTF e GNL nella stessa libreria statica
$(NAME): $(LIBFT_OBJS) $(PRINTF_OBJS) $(GNL_OBJS)
	$(AR) $@ $^

# “bonus”: compila anche i bonus di LIBFT e di GNL
bonus: $(LIBFT_OBJS) $(PRINTF_OBJS) $(GNL_OBJS) $(BONUS_OBJS) $(GNL_BONUS_OBJS)
	$(AR) $(NAME) $(LIBFT_OBJS) $(PRINTF_OBJS) $(GNL_OBJS) $(BONUS_OBJS) $(GNL_BONUS_OBJS)

# Regola generica per compilare un file .c (della stessa cartella) in .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(LIBFT_OBJS) $(PRINTF_OBJS) $(BONUS_OBJS) $(GNL_OBJS) $(GNL_BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus

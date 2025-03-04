#Alcuni caratteri $ sono utilizzati per riferirsi a file target e dipendenze:
# $@ → Il nome del target (file che si sta generando).
# $^ → Tutte le dipendenze della regola.
# $< → La prima dipendenza della regola.

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

#lista dei file sorgente della libreria(senza estensione)
FILES = \
	ft_atoi ft_bzero ft_calloc ft_isalnum ft_isalpha ft_isdigit\
	ft_isprint ft_isascii ft_itoa ft_memchr ft_memcmp\
	ft_memcpy ft_memmove ft_memset ft_putchar_fd ft_putendl_fd\
	ft_putnbr_fd ft_putstr_fd ft_split ft_strchr ft_strdup\
	ft_striteri ft_strjoin ft_strlcat ft_strlcpy ft_strlen\
	ft_strmapi ft_strncmp ft_strnstr ft_strrchr ft_strtrim\
	ft_substr ft_tolower ft_toupper\

#lista dei file bonus della libreria (senza estensione)
BOBUS_FILES = \
			ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast\
			ft_lstadd_back ft_lstdelone ft_lstclear\
			ft_lstiter ft_lstmap

SRCS_DIR = ./ #directory dei file sorgente 
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES))) #percorsi completi dei file sorgente
BONUS_SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(BONUS_FILES))) #percorsi completi dei file bonus

OBJS_DIR = ./ #directory degli oggetti compilati
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES))) #percorsi completi degli oggetti
BONUS_OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(BONUS_FILES))) #percorsi completi degli oggetti bonus


all : $(NAME) #regola principale: compilare tutto

#regola per compilare la libreria
$(NAME): $(OBJS)
	$(AR) $@ $^

#regola per compilare i file bonus
bonus: $(OBJS) $(BONUS_OBJS)
	$(AR) $(NAME) $(OBJS) $(BONUS_OBJS)

#regola generica per compilare un file sorgente in un file oggetto
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

#regola per pulire file oggetto
clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

#regola per pulire completamente(incluso il file della libreria)
fclean: clean
	$(RM) $(NAME)

#regola per ricompilare tutto da zero
re: clean all

#indica che questi nomi non sono file, ma regole.
.PHONY: all clean fclean re bonus

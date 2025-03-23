
#Libft
![42 Badge](https://img.shields.io/badge/42-Rome-2BA5DE)
![Project Score](https://img.shields.io/badge/Score-100%2F100-brightgreen)
![Created](https://img.shields.io/badge/Created-January_2025-blue)
![Result](https://img.shields.io/badge/Status-SUCCESS-violet)

## 📝 Description
Questo progetto è il tuo primo passo come studentə presso 42.  
Consiste nella riscrittura di alcune funzioni fondamentali della libreria standard C (`libc`) e l’aggiunta di alcune funzioni di utilità.  
Tutte le funzioni sono raccolte in una libreria statica riutilizzabile: **libft.a**.

## 🛠️ Function List

### Libc Functions
| Function     | Description                                 |
|--------------|---------------------------------------------|
| ft_atoi      | Convert ASCII string to integer             |
| ft_bzero     | Zero a byte string                          |
| ft_calloc    | Allocate and zero memory                    |
| ft_isalnum   | Test for alphanumeric character             |
| ft_isalpha   | Test for alphabetic character               |
| ft_isascii   | Test for ASCII character                    |
| ft_isdigit   | Test for decimal-digit character            |
| ft_isprint   | Test for printable character                |
| ft_memchr    | Scan memory for a character                 |
| ft_memcmp    | Compare memory areas                        |
| ft_memcpy    | Copy memory area                            |
| ft_memmove   | Copy memory area with overlap handling      |
| ft_memset    | Fill memory with a constant byte            |
| ft_strchr    | Locate character in string                  |
| ft_strdup    | Create a duplicate of the string            |
| ft_strlen    | Calculate the length of a string            |
| ft_strncmp   | Compare two strings                         |
| ft_strnstr   | Locate a substring in a string              |
| ft_strrchr   | Locate character in string from the end     |
| ft_tolower   | Convert uppercase letter to lowercase       |
| ft_toupper   | Convert lowercase letter to uppercase       |

### Additional Functions
| Function       | Description                                                 |
|----------------|-------------------------------------------------------------|
| ft_itoa        | Convert integer to ASCII string                             |
| ft_putchar_fd  | Output a character to given file descriptor                 |
| ft_putstr_fd   | Output string to given file descriptor                      |
| ft_putnbr_fd   | Output integer to given file descriptor                     |
| ft_split       | Split string using a delimiter character                    |
| ft_strjoin     | Concatenate two strings                                     |
| ft_strmapi     | Create new string from modifying string with specified func |
| ft_strtrim     | Trim beginning and end of string with specified characters  |
| ft_substr      | Extract substring from string                               |

## 🚀 BONUS

### Bonus Linked-List Functions  
Il bonus consiste nell'implementazione di funzioni per la manipolazione di **liste concatenate** tramite la seguente struttura:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| Function        | Description                                   |
|-----------------|-----------------------------------------------|
| ft_lstnew       | Create a new list node                        |
| ft_lstadd_front | Add node at the beginning of the list         |
| ft_lstsize      | Count the number of nodes in the list         |
| ft_lstlast      | Get the last node of the list                 |
| ft_lstadd_back  | Add node at the end of the list               |
| ft_lstdelone    | Delete a single node from the list            |
| ft_lstclear     | Delete and free an entire list                |
| ft_lstiter      | Apply a function to each node of the list     |
| ft_lstmap       | Create a new list applying a function to each node |

Tutti i bonus si trovano nella cartella `src/` e vengono compilati automaticamente con le funzioni base.

## 💪 Getting Started

### Prerequisites
- GCC compiler
- Make

### Installation
```bash
git clone <your-repository-url>
cd libft
make
```

## 💻 Usage

1. **Includi** la libreria nel tuo file C:
   ```c
   #include "libft.h"
   ```
2. **Compila** il tuo programma linkando la libreria:
   ```bash
   gcc your_program.c -L. -lft
   ```

## ⚙️ Project Structure
```
libft/
├── Makefile
├── includes/
│   └── libft.h
├── src/
│   ├── ft_atoi.c
│   ├── ft_bzero.c
│   ├── ...
│   ├── ft_lstnew.c
│   ├── ft_lstadd_front.c
│   └── ...
```

## ⚙️ Compilation Rules
- **`make`**: Compila tutte le funzioni (incluse quelle bonus)
- **`make clean`**: Rimuove i file oggetto
- **`make fclean`**: Rimuove i file oggetto e la libreria statica
- **`make re`**: Esegue `fclean` seguito da `make`

## 📌 Notes
- Tutte le funzioni rispettano la **Norme** di 42
- Ogni funzione è protetta da errori comuni (buffer overflow, null input...)
- Memoria sempre gestita con `malloc`/`free` dove necessario

## 👤 Author
**vhacman**  
- 42 Intra Profile: [vhacman](https://profile.intra.42.fr/)

## 📝 License
Questo progetto è rilasciato secondo i termini della 42 School.  
Ogni modifica e/o riutilizzo del codice deve rispettare le regole di 42.

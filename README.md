Di seguito trovi un README **aggiornato** per la tua **libft** con l’aggiunta di **ft_printf** e **get_next_line** (incluse le versioni bonus). Mantiene lo stile e la struttura del precedente, aggiungendo le nuove funzionalità e spiegando come utilizzarle.

---

# 🌟🛡️ libft 🛡️🌟
![42 Badge](https://img.shields.io/badge/42-Rome-2BA5DE)
![Project Score](https://img.shields.io/badge/Score-100%2F100-brightgreen)
![Created](https://img.shields.io/badge/Created-January_2025-blue)
![Result](https://img.shields.io/badge/Status-SUCCESS-violet)

## 📝 Description
Questo progetto è il tuo primo step come studentə presso 42. Include la riscrittura di alcune funzioni della libreria standard del C, alcune funzioni di utilità e l’**integrazione** di progetti come **ft_printf** e **get_next_line** in un’unica libreria statica (`libft.a`).

## 🛠️ Function List

### Libc Functions
| Function | Description |
|----------|-------------|
| ft_atoi | Convert ASCII string to integer |
| ft_bzero | Zero a byte string |
| ft_calloc | Allocate and zero memory |
| ft_isalnum | Test for alphanumeric character |
| ft_isalpha | Test for alphabetic character |
| ft_isascii | Test for ASCII character |
| ft_isdigit | Test for decimal-digit character |
| ft_isprint | Test for printable character |
| ft_memchr | Scan memory for a character |
| ft_memcmp | Compare memory areas |
| ft_memcpy | Copy memory area |
| ft_memmove | Copy memory area with overlap handling |
| ft_memset | Fill memory with a constant byte |
| ft_strchr | Locate character in string |
| ft_strdup | Create a duplicate of the string |
| ft_strlen | Calculate the length of a string |
| ft_strncmp | Compare two strings |
| ft_strnstr | Locate a substring in a string |
| ft_strrchr | Locate character in string from the end |
| ft_tolower | Convert uppercase letter to lowercase |
| ft_toupper | Convert lowercase letter to uppercase |

### Additional Functions
| Function       | Description                                                 |
|----------------|-------------------------------------------------------------|
| ft_itoa        | Convert integer to ASCII string                             |
| ft_putchar_fd  | Output a character to given file descriptor                |
| ft_putstr_fd   | Output string to given file descriptor                      |
| ft_putnbr_fd   | Output integer to given file descriptor                     |
| ft_split       | Split string using a delimiter character                    |
| ft_strjoin     | Concatenate two strings                                     |
| ft_strmapi     | Create new string from modifying string with specified func |
| ft_strtrim     | Trim beginning and end of string with specified characters  |
| ft_substr      | Extract substring from string                               |

---

## 🖨️ ft_printf
- **ft_printf** è stato unito alla libreria: fornisce la funzionalità di stampa formattata (come `printf` standard).
- Include funzioni di supporto, come `ft_printf_utils.c`, per la gestione di vari tipi di formattazione (`%s`, `%d`, `%x`, ecc.).

---

## 📜 get_next_line
- **get_next_line** (GNL) è ora incluso nella libreria. Permette di leggere linee da un file descriptor (incluso `0` per stdin) una alla volta.
- File principali:
  - `get_next_line.c` e `get_next_line_utils.c` per la versione base.
  - `get_next_line_bonus.c` e `get_next_line_utils_bonus.c` per la versione bonus (per gestire più file descriptor contemporaneamente).

---

## 🚀 BONUS
### Bonus Linked-List Functions
Il bonus di **libft** consiste in funzioni per manipolare **liste concatenate** con la struttura:
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

### Bonus get_next_line
- **get_next_line** bonus (`get_next_line_bonus.c`, `get_next_line_utils_bonus.c`) supporta la lettura *simultanea* da più file descriptor.

---

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
Questo comando compilerà `libft.a` includendo di default:
- Funzioni libft (base)
- `ft_printf`
- `get_next_line` base

Per aggiungere anche le funzioni bonus (liste concatenate di libft *e* GNL bonus):
```bash
make bonus
```

---

## 💻 Usage
1. **Includi** la libreria nel tuo file C:
   ```c
   #include "libft.h"
   ```
2. **Compila** il tuo programma linkando la libreria:
   ```bash
   gcc your_program.c -L. -lft
   ```
3. **Esempio**: utilizzo di `ft_printf` e `get_next_line`:
   ```c
   #include "libft.h"
   #include <stdio.h>   // se vuoi usare anche printf standard per debug

   int main(void)
   {
       // ft_printf usage
       ft_printf("Hello, 42!\n");
       
       // get_next_line usage (lettura da stdin)
       char *line = get_next_line(0); 
       if (line)
       {
           ft_printf("You typed: %s", line);
           free(line);
       }
       return 0;
   }
   ```

---

## ⚙️ Project Structure
```
libft/
├── Makefile
├── libft.h
├── ft_atoi.c
├── ft_bzero.c
├── ...
├── ft_printf.c
├── ft_printf_utils.c
├── get_next_line.c
├── get_next_line_utils.c
├── get_next_line_bonus.c
├── get_next_line_utils_bonus.c
└── ...
```
*(Eventuali header per GNL come `get_next_line.h` / `get_next_line_bonus.h` possono stare qui.)*

---

## ⚙️ Compilation Rules
- **`make`**: Compila le funzioni base di libft, ft_printf e get_next_line “normale”
- **`make bonus`**: Aggiunge anche i bonus (liste concatenate e GNL bonus)
- **`make clean`**: Rimuove i file oggetto
- **`make fclean`**: Rimuove i file oggetto e la libreria statica
- **`make re`**: Esegue `fclean` seguito da `make`

---

## 🤖 Testing
- Ogni funzione è stata testata con casi di test interni (commentati nel codice)  
- Per test aggiuntivi, puoi creare un tuo `main.c` di prova o usare i tester disponibili online

---

## 📌 Notes
- Tutte le funzioni seguono la **Norme** di 42
- Gestione accurata della memoria per evitare memory leaks
- Considerati edge cases (es: input vuoti, dimensioni zero, ecc.)

---

## 👤 Author
**vhacman**  
- 42 Intra Profile: [vhacman](https://profile.intra.42.fr/)

---

## 📝 License
Questo progetto è rilasciato secondo i termini della 42 School.  
Ogni modifica e/o riutilizzo del codice deve rispettare le regole di 42.

---

Buon divertimento con la tua libreria potenziata! Ora hai **libft**, **ft_printf** e **get_next_line** (anche in versione bonus) in un unico package.

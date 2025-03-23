# 🌟🛡️ libft 🛡️🌟
![42 Badge](https://img.shields.io/badge/42-Rome-2BA5DE)
![Project Score](https://img.shields.io/badge/Score-100%2F100-brightgreen)
![Created](https://img.shields.io/badge/Created-January_2025-blue)
![Result](https://img.shields.io/badge/Status-SUCCESS-violet)

## 📝 Description
This project is your first step as a 42 student. It involves re-implementing fundamental functions from the C standard library and other utility functions to create your own static library: `libft.a`.

Bonus functions (like list manipulation) are integrated into the `src/` directory and compiled together with the rest.

## 🛠️ Function List

### Libc Functions
| Function | Description |
|----------|-------------|
| ft_atoi | Convert ASCII string to integer |
| ft_bzero | Zero a byte string |
| ft_calloc | Allocate and zero memory |
| ft_isalnum | Check for alphanumeric character |
| ft_isalpha | Check for alphabetic character |
| ft_isascii | Check for ASCII character |
| ft_isdigit | Check for decimal-digit character |
| ft_isprint | Check for printable character |
| ft_memchr | Scan memory for a character |
| ft_memcmp | Compare memory areas |
| ft_memcpy | Copy memory area |
| ft_memmove | Copy memory area with overlap handling |
| ft_memset | Fill memory with a constant byte |
| ft_strchr | Locate character in string |
| ft_strdup | Duplicate a string |
| ft_strlen | Compute length of string |
| ft_strncmp | Compare two strings |
| ft_strnstr | Locate a substring |
| ft_strrchr | Locate character in string (reverse) |
| ft_tolower | Convert char to lowercase |
| ft_toupper | Convert char to uppercase |

### Additional Functions
| Function       | Description                                  |
|----------------|----------------------------------------------|
| ft_itoa        | Convert integer to ASCII string              |
| ft_putchar_fd  | Write a character to a file descriptor       |
| ft_putstr_fd   | Write a string to a file descriptor          |
| ft_putnbr_fd   | Write an integer to a file descriptor        |
| ft_split       | Split string using a delimiter               |
| ft_strjoin     | Concatenate two strings                      |
| ft_strmapi     | Apply a function to each char of a string    |
| ft_strtrim     | Trim characters from beginning and end       |
| ft_substr      | Extract a substring from a string            |

## 🚀 BONUS
### Bonus Linked-List Functions
These functions allow manipulation of a linked list structure:
```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```
| Function        | Description                             |
|-----------------|-----------------------------------------|
| ft_lstnew       | Create a new node                       |
| ft_lstadd_front | Add a node to the front of the list     |
| ft_lstsize      | Get the number of elements in the list  |
| ft_lstlast      | Get the last element of the list        |
| ft_lstadd_back  | Add a node to the end of the list       |
| ft_lstdelone    | Delete a single node                    |
| ft_lstclear     | Clear and free the entire list          |
| ft_lstiter      | Apply a function to each node           |
| ft_lstmap       | Create a new list by mapping a function |

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
1. **Include** the library in your `.c` files:
   ```c
   #include "libft.h"
   ```
2. **Compile** your program linking the library:
   ```bash
   gcc your_program.c -L. -lft
   ```

## ⚙️ Project Structure
```
libft/
├── Makefile
├── libft.h
├── ft_*.c
├── bonus list functions
└── ...
```

## ⚙️ Compilation Rules
- **`make`**: Build the full library, including bonus files in `src`
- **`make clean`**: Remove object files
- **`make fclean`**: Remove objects and `libft.a`
- **`make re`**: Clean and rebuild from scratch

## 📌 Notes
- Fully Norm-compliant (42 coding style)
- Careful memory handling
- Edge cases considered (nulls, empty inputs, etc.)

## 👤 Author
**vhacman**  
- 42 Intra Profile: [vhacman](https://profile.intra.42.fr/)

## 📝 License
Released under 42 school rules. Respect intra project policies when reusing.
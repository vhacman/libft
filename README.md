# 🌟🛡️ libft 🛡️🌟
![42 Badge](https://img.shields.io/badge/42-Rome-2BA5DE)
![Project Score](https://img.shields.io/badge/Score-100%2F100-brightgreen)
![Created](https://img.shields.io/badge/Created-January_2025-blue)
![Result](https://img.shields.io/badge/Status-SUCCESS-violet).

## 📝 Description
This project is your very first project as a student at 42. You will need to recode a few functions of the C standard library as well as some other utility functions that you will use during your whole cursus.

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
| Function | Description |
|----------|-------------|
| ft_itoa | Convert integer to ASCII string |
| ft_putchar_fd | Output a character to given file descriptor |
| ft_putstr_fd | Output string to given file descriptor |
| ft_putnbr_fd | Output integer to given file descriptor |
| ft_split | Split string using a delimiter character |
| ft_strjoin | Concatenate two strings |
| ft_strmapi | Create new string from modifying string with specified function |
| ft_strtrim | Trim beginning and end of string with specified characters |
| ft_substr | Extract substring from string |

## 🚀 BONUS
The bonus part consists of functions to manipulate **linked lists** using the following structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

### Bonus Functions
| Function | Description |
|----------|-------------|
| ft_lstnew | Create a new list node |
| ft_lstadd_front | Add node at the beginning of the list |
| ft_lstsize | Count the number of nodes in the list |
| ft_lstlast | Get the last node of the list |
| ft_lstadd_back | Add node at the end of the list |
| ft_lstdelone | Delete a single node from the list |
| ft_lstclear | Delete and free an entire list |
| ft_lstiter | Apply a function to each node of the list |
| ft_lstmap | Create a new list by applying a function to each node |

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
This will create the `libft.a` file.

## 💻 Usage
Include the header in your C file:
```c
#include "libft.h"
```

When compiling your project, add the library:
```bash
gcc your_program.c -L. -lft
```

### Example
```c
#include "libft.h"

int main(void)
{
    char str[] = "Hello, 42 Rome!";
    
    // Using string functions
    size_t len = ft_strlen(str);
    char *dup = ft_strdup(str);
    
    // Using character functions
    if (ft_isalpha('A'))
        ft_putchar_fd('A', 1);
        
    // Using memory functions
    char buffer[50];
    ft_memset(buffer, 0, 50);
    
    // Free allocated memory
    free(dup);
    
    return (0);
}
```

## 💡 Project Structure
```
libft/
├── Makefile
├── libft.h
├── ft_atoi.c
├── ft_bzero.c
├── ft_calloc.c
...
└── ft_putnbr_fd.c
```

## ⚙️ Compilation
The library comes with a Makefile that contains the following rules:
- `make`: Compiles the library
- `make clean`: Removes object files
- `make fclean`: Removes object files and the library
- `make re`: Recompiles the library
- `make bonus`: Compiles the bonus part

## 🤖 Testing
Each function includes comprehensive test cases in comments that can be uncommented for testing.

## 📌 Notes
- All functions are implemented following the 42 Norm
- Memory management is handled carefully to avoid leaks
- Edge cases are considered and handled appropriately

## 👤 Author
**vhacman**
- 42 Intra Profile: [vhacman](https://profile.intra.42.fr/)

## GitHub Stats 📊
![GitHub Stats](https://github-readme-stats.vercel.app/api?username=DevGabi98&show_icons=true&theme=radical)
![Top Languages](https://github-readme-stats.vercel.app/api/top-langs/?username=DevGabi98&layout=compact&theme=radical)

## 📝 License
This project is licensed under the terms of the 42 School.

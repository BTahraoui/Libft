*This project has been created as part of the 42 curriculum by batahrao.*

# Libft

## Description

Libft is a custom C library built during the 42 curriculum. The goal of the project is to reimplement a subset of the standard C library functions and a few additional utilities, with a strong focus on memory management, pointers, string handling, and linked-list manipulation.

This project helps develop a deeper understanding of how common C functions work internally, how memory is managed at a low level, and how to build reusable code in a clean and modular way. The final result is a static library named `libft.a` that can be reused in future projects.

## Library overview

The library is organized into several categories:

### Character checks and conversions
- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_toupper`
- `ft_tolower`

### Memory manipulation
- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`
- `ft_calloc`

### String manipulation and conversion
- `ft_strlen`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_strnstr`
- `ft_strdup`
- `ft_atoi`
- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_itoa`
- `ft_strmapi`
- `ft_striteri`

### File descriptor output
- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

### Linked list utilities
This project also includes a simple singly linked list implementation using the `t_list` structure, with operations such as:

- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstadd_back`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

The purpose of these functions is to practice dynamic memory allocation, pointer manipulation, and data structure design in a controlled and reusable way.

## Instructions

### Requirements

- GCC or Clang
- GNU Make
- `ar` utility
- Linux or macOS environment

### Compilation

From the repository root, run:

```bash
make
```

This compiles the source files and creates the static library:

```bash
libft.a
```

### Useful Makefile targets

```bash
make        # build the library
make all    # same as make
make clean  # remove object files
make fclean # remove object files and the library
make re     # rebuild from scratch
```

### Using the library in another C project

Include the header in your source file:

```c
#include "libft.h"
```

Compile your program by linking the library:

```bash
cc main.c libft.a -o program
```

Run it:

```bash
./program
```

## Project structure

```text
.
├── Makefile
├── libft.h
├── libft.a
├── ft_*.c
├── readme.md
└── ...
```

## Resources

### Documentation

- [C Standard Library Reference](https://en.cppreference.com/w/c)
- [Linux Manual Pages](https://man7.org/linux/man-pages/)
- [GNU Make Manual](https://www.gnu.org/software/make/manual/)
- [GCC Documentation](https://gcc.gnu.org/onlinedocs/)

### Learning resources

- [Beej's Guide to C Programming](https://beej.us/guide/bgc/)
- [Learn C](https://www.learn-c.org/)
- [42 Intra](https://profile.intra.42.fr/)

### AI usage

AI tools were used as supplementary learning and debugging resources during this project.

They were particularly helpful for:
- understanding pointer and memory behavior,
- explaining how standard library functions are implemented,
- debugging segmentation faults and memory issues,
- reviewing logic for linked-list and string functions,
- testing edge cases and validating expected behavior.

AI was used as a support tool to reinforce learning and help debug implementation issues, but the actual code was developed and validated through direct implementation and testing.

## Summary

Libft is a foundational project that teaches the basics of low-level C programming by recreating essential library utilities and building a reusable static library. It is a key step toward understanding memory safety, string processing, and data structures in a practical and application-focused way.

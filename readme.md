*This project has been created as part of the 42 curriculum by batahraoui.*

# Libft

## Description

**Libft** is a foundational C programming project developed as part of the 1337/42 curriculum.

The objective is to recreate essential functions from the standard C library, alongside additional utility functions and linked-list operations, without relying on their original implementations.

Through this project, the goal is to understand how common C operations work internally, particularly memory management, pointers, strings, data structures, and low-level programming.

The result is a custom static library called `libft.a`, designed to be reused in future C projects.

### Project Objectives

- Understand pointers, memory addresses, and pointer arithmetic.
- Develop a strong understanding of dynamic memory allocation.
- Learn how to manipulate strings and memory blocks.
- Understand structures and singly linked lists.
- Practice handling memory safely and avoiding memory leaks.
- Develop modular and reusable C functions.
- Learn how static libraries and Makefiles work.

---

## Library Contents

The library is organized into five main categories.

### 1. Character Checking and Conversion

Functions used to classify characters and convert between uppercase and lowercase.

| Function | Description |
|---|---|
| `ft_isalpha` | Checks whether a character is an alphabetic letter. |
| `ft_isdigit` | Checks whether a character is a digit (0–9). |
| `ft_isalnum` | Checks whether a character is alphanumeric. |
| `ft_isascii` | Checks whether a character belongs to the ASCII character set. |
| `ft_isprint` | Checks whether a character is printable. |
| `ft_toupper` | Converts a lowercase letter into uppercase. |
| `ft_tolower` | Converts an uppercase letter into lowercase. |

### 2. Memory Manipulation

Functions that operate directly on memory blocks rather than relying on null-terminated strings.

| Function | Description |
|---|---|
| `ft_memset` | Fills a memory block with a specified byte. |
| `ft_bzero` | Sets a memory block to zero. |
| `ft_memcpy` | Copies a memory block from one location to another. |
| `ft_memmove` | Copies memory safely when source and destination overlap. |
| `ft_memchr` | Searches for a specific byte within a memory block. |
| `ft_memcmp` | Compares two memory blocks. |
| `ft_calloc` | Allocates memory for an array and initializes it to zero. |

### 3. String Manipulation and Conversion

Functions for searching, copying, comparing, modifying, and converting strings.

| Function | Description |
|---|---|
| `ft_strlen` | Calculates the length of a string. |
| `ft_strchr` | Finds the first occurrence of a character in a string. |
| `ft_strrchr` | Finds the last occurrence of a character in a string. |
| `ft_strncmp` | Compares two strings up to a specified number of characters. |
| `ft_strlcpy` | Copies a string into a destination buffer with size limitation. |
| `ft_strlcat` | Appends a string to a destination buffer with size limitation. |
| `ft_strnstr` | Searches for a substring within a limited portion of another string. |
| `ft_strdup` | Creates a dynamically allocated duplicate of a string. |
| `ft_atoi` | Converts a string into an integer. |
| `ft_substr` | Extracts a substring from a string. |
| `ft_strjoin` | Concatenates two strings into a newly allocated string. |
| `ft_strtrim` | Removes specified characters from the beginning and end of a string. |
| `ft_split` | Splits a string into an array of strings using a delimiter. |
| `ft_itoa` | Converts an integer into a string. |
| `ft_strmapi` | Creates a new string by applying a function to each character. |
| `ft_striteri` | Applies a function to each character, allowing modification in place. |

### 4. File Descriptor Output

Functions that write characters, strings, and numbers to a specified file descriptor.

| Function | Description |
|---|---|
| `ft_putchar_fd` | Writes a character to a specified file descriptor. |
| `ft_putstr_fd` | Writes a string to a specified file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline. |
| `ft_putnbr_fd` | Writes an integer to a specified file descriptor. |

### 5. Linked List Manipulation

Functions for creating, traversing, modifying, and deleting singly linked lists.

The library uses the `t_list` structure, where each node contains:

- `content`: A pointer to the data stored in the node.
- `next`: A pointer to the next node in the list.

| Function | Description |
|---|---|
| `ft_lstnew` | Allocates and initializes a new list node. |
| `ft_lstadd_front` | Adds a node at the beginning of a list. |
| `ft_lstadd_back` | Adds a node at the end of a list. |
| `ft_lstsize` | Counts the number of nodes in a list. |
| `ft_lstlast` | Returns the last node of a list. |
| `ft_lstdelone` | Deletes a node and frees its content using a supplied deletion function. |
| `ft_lstclear` | Deletes and frees an entire list. |
| `ft_lstiter` | Applies a function to the content of every node. |
| `ft_lstmap` | Creates a new list by applying a function to each node's content. |

---

## Instructions

### Requirements

- GCC or Clang compiler.
- GNU Make.
- `ar` utility.
- A Unix-like environment (Linux or macOS).

### Compilation

Clone the repository:

```bash
git clone <repository-url>
cd Libft
```

Compile the library:

```bash
make
```

This generates the static library:

```text
libft.a
```

### Makefile Commands

| Command | Description |
|---|---|
| `make` | Compiles the source files and creates the library. |
| `make all` | Builds the library. |
| `make clean` | Removes object files (`.o`). |
| `make fclean` | Removes object files and the static library. |
| `make re` | Rebuilds the library from scratch. |

### Using Libft in Another Project

Include the library header in your C source file:

```c
#include "libft.h"
```

Compile your project by linking the static library:

```bash
cc main.c -L. -lft -I. -o program
```

Run the executable:

```bash
./program
```

---

## Technical Choices and Implementation

The project follows the coding standards and constraints imposed by the 1337/42 curriculum.

### Compilation Flags

- `-Wall`: Enables common compiler warnings.
- `-Wextra`: Enables additional compiler warnings.
- `-Werror`: Treats warnings as errors.

### Implementation Principles

- Standard library functions are reimplemented rather than directly reused where prohibited by the assignment.
- Dynamic memory allocation is handled using `malloc` and `free`.
- Memory operations use appropriate pointer types.
- Helper functions are declared `static` when they are only needed within a single source file.
- No global variables are used.
- The library is compiled into a static archive using `ar`.
- The Makefile automates compilation and cleanup.

---

## Resources

The following resources were useful for understanding C programming concepts and implementing the library.

### Documentation

- [C Standard Library Reference – cppreference](https://en.cppreference.com/w/c)
- [Linux Manual Pages](https://man7.org/linux/man-pages/)
- [GNU Compiler Collection Documentation](https://gcc.gnu.org/onlinedocs/)
- [GNU Make Documentation](https://www.gnu.org/software/make/manual/)

### Learning Resources

- [Beej's Guide to C Programming](https://beej.us/guide/bgc/)
- [Learn C](https://www.learn-c.org/)
- [42 Intra](https://profile.intra.42.fr/)

### AI Usage

AI tools, particularly ChatGPT, were used as supplementary learning and debugging resources throughout this project.

Their use included:

- **Concept explanations:** Understanding pointers, memory allocation, pointer arithmetic, strings, structures, linked lists, and file descriptors.
- **Debugging assistance:** Identifying logical errors, compiler warnings, segmentation faults, and memory-related problems.
- **Testing guidance:** Understanding expected function behavior and developing test cases.
- **Code review:** Reviewing personal implementations, identifying potential issues, and discussing possible improvements.
- **Learning support:** Breaking down complex programming concepts into smaller steps and explaining how standard C functions operate internally.

AI was used as a learning assistant rather than a replacement for understanding the implementation. The functions were developed and studied through an iterative process of implementation, testing, debugging, and reviewing.

---

## Project Structure

```text
Libft/
│
├── Makefile
├── libft.h
│
├── ft_isalpha.c
├── ft_isdigit.c
├── ft_isalnum.c
├── ft_isascii.c
├── ft_isprint.c
├── ft_toupper.c
├── ft_tolower.c
│
├── ft_memset.c
├── ft_bzero.c
├── ft_memcpy.c
├── ft_memmove.c
├── ft_memchr.c
├── ft_memcmp.c
├── ft_calloc.c
│
├── ft_strlen.c
├── ft_strchr.c
├── ft_strrchr.c
├── ft_strncmp.c
├── ft_strlcpy.c
├── ft_strlcat.c
├── ft_strnstr.c
├── ft_strdup.c
├── ft_atoi.c
├── ft_substr.c
├── ft_strjoin.c
├── ft_strtrim.c
├── ft_split.c
├── ft_itoa.c
├── ft_strmapi.c
├── ft_striteri.c
│
├── ft_putchar_fd.c
├── ft_putstr_fd.c
├── ft_putendl_fd.c
├── ft_putnbr_fd.c
│
├── ft_lstnew.c
├── ft_lstadd_front.c
├── ft_lstadd_back.c
├── ft_lstsize.c
├── ft_lstlast.c
├── ft_lstdelone.c
├── ft_lstclear.c
├── ft_lstiter.c
└── ft_lstmap.c
```

---

## Final Notes

Libft is more than a collection of utility functions. It is an opportunity to understand what happens behind familiar C library operations and develop the foundations required for more advanced systems programming.

The resulting library serves as a reusable foundation for future projects in the 42 curriculum.

**Ship · learn · repeat.**

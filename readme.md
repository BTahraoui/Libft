# 📚 Libft — 42/1337

> Your very first own C library, built from scratch as part of the 42/1337 curriculum.

## 📖 About

**Libft** is a foundational project at 42 School. The goal is to recreate useful functions from the C standard library and build a personal library that can be reused in future C projects.

This project focuses on understanding memory management, pointers, strings, character manipulation, and low-level programming in C.

## 🛠️ Technologies

- **Language:** C
- **Compiler:** `cc` / `gcc`
- **Compiler flags:** `-Wall -Wextra -Werror`
- **Archive tool:** `ar`
- **Build system:** Makefile

## 📂 Project Structure

```text
libft/
├── Makefile
├── libft.h
├── ft_atoi.c
├── ft_bzero.c
├── ft_calloc.c
├── ft_isalnum.c
├── ft_isalpha.c
├── ft_isascii.c
├── ft_isdigit.c
├── ft_isprint.c
├── ft_memchr.c
├── ft_memcmp.c
├── ft_memcpy.c
├── ft_memmove.c
├── ft_memset.c
├── ft_strdup.c
├── ft_strchr.c
├── ft_strlcat.c
├── ft_strlcpy.c
├── ft_strlen.c
├── ft_strncmp.c
├── ft_strnstr.c
├── ft_strrchr.c
├── ft_tolower.c
└── ft_toupper.c
```

## ✅ Implemented Functions

### Character Classification

| Function | Description |
|---|---|
| `ft_isalpha` | Checks whether a character is alphabetic |
| `ft_isdigit` | Checks whether a character is a digit |
| `ft_isalnum` | Checks whether a character is alphanumeric |
| `ft_isascii` | Checks whether a character belongs to the ASCII range |
| `ft_isprint` | Checks whether a character is printable |

### Character Conversion

| Function | Description |
|---|---|
| `ft_toupper` | Converts a lowercase letter to uppercase |
| `ft_tolower` | Converts an uppercase letter to lowercase |

### String Functions

| Function | Description |
|---|---|
| `ft_strlen` | Calculates the length of a string |
| `ft_strchr` | Finds the first occurrence of a character |
| `ft_strrchr` | Finds the last occurrence of a character |
| `ft_strncmp` | Compares two strings up to a specified number of characters |
| `ft_strlcpy` | Copies a string into a destination buffer with size limits |
| `ft_strlcat` | Appends a string with size limits |
| `ft_strnstr` | Searches for a substring within a specified length |
| `ft_strdup` | Allocates and creates a duplicate of a string |

### Memory Functions

| Function | Description |
|---|---|
| `ft_memset` | Fills a memory region with a byte value |
| `ft_bzero` | Sets a memory region to zero |
| `ft_memcpy` | Copies a specified number of bytes between non-overlapping memory regions |
| `ft_memmove` | Copies memory safely when source and destination overlap |
| `ft_memchr` | Searches for a byte in a memory region |
| `ft_memcmp` | Compares two memory regions |

### Memory Allocation

| Function | Description |
|---|---|
| `ft_calloc` | Allocates memory for an array and initializes its bytes to zero |

### Conversion

| Function | Description |
|---|---|
| `ft_atoi` | Converts the initial numeric portion of a string to an integer |

## 🚧 Remaining Mandatory Functions

The following classic Libft functions are not present in the current file list and can be added as you progress through the project.

### Additional String Functions

- [ ] `ft_substr` — Extracts a substring into newly allocated memory.
- [ ] `ft_strjoin` — Concatenates two strings into a newly allocated string.
- [ ] `ft_strtrim` — Removes specified characters from the beginning and end of a string.
- [ ] `ft_split` — Splits a string into an array of strings.
- [ ] `ft_itoa` — Converts an integer to a string.
- [ ] `ft_strmapi` — Creates a string by applying a function to each character.
- [ ] `ft_striteri` — Applies a function to each character in a string.

### File Descriptor Output Functions

- [ ] `ft_putchar_fd` — Writes a character to a file descriptor.
- [ ] `ft_putstr_fd` — Writes a string to a file descriptor.
- [ ] `ft_putendl_fd` — Writes a string followed by a newline.
- [ ] `ft_putnbr_fd` — Writes an integer to a file descriptor.

## 🧪 Testing

Compile individual functions with the required compiler flags:

```bash
cc -Wall -Wextra -Werror main.c ft_strlen.c -o test
./test
```

For functions that depend on other Libft functions, include their source files when compiling, or link against your built library.

Test important edge cases, including:

- Empty strings and null terminators.
- Zero-length operations.
- Minimum and maximum integer values.
- Overlapping memory regions.
- Allocation failures and multiplication overflow.
- Correct return values and memory cleanup.

## 🔨 Building the Library

Build `libft.a` using the Makefile:

```bash
make
```

Other Makefile commands:

```bash
make clean
make fclean
make re
```

The library can then be linked into another C project:

```bash
cc main.c -L. -lft -o program
```

Make sure `libft.h` declares the functions you implement and that the Makefile includes the corresponding source files.

## 🎯 Project Goals

- Strengthen understanding of pointers and memory addresses.
- Learn dynamic memory allocation with `malloc`.
- Understand arrays, strings, and null termination.
- Handle edge cases and undefined behavior carefully.
- Write code that follows the 42 Norm and compiler requirements.
- Build reusable functions for future C projects.

## 📈 Progress

- [x] Character classification functions
- [x] Character conversion functions
- [x] Core memory functions
- [x] Core string functions
- [x] `ft_calloc` and `ft_strdup`
- [ ] Remaining mandatory string functions
- [ ] File descriptor output functions
- [ ] Final testing and Norminette review
- [ ] Complete Makefile and library validation

---

**Part of the 42/1337 journey — learning C one function at a time.** 🚀


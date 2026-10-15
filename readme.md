# Libft

**My own C standard library — 42 / 1337 School**

Libft is a foundational project that involves recreating essential functions from the C standard library, along with additional utility functions. The goal is to develop a deeper understanding of C, memory management, pointers, strings, and low-level programming.

This repository contains my ongoing implementation of Libft, built and tested as I progress through the project.

## 📊 Project Progress

**Status:** In Progress 🚧

I am implementing and testing the required functions step by step, focusing on understanding their behavior and edge cases rather than simply reproducing their output.

## ✅ Implemented Functions

### Character Classification

- [x] `ft_isalpha` — Checks whether a character is alphabetic.
- [x] `ft_isdigit` — Checks whether a character is a decimal digit.
- [x] `ft_isalnum` — Checks whether a character is alphanumeric.
- [x] `ft_isascii` — Checks whether a character belongs to the ASCII character set.
- [x] `ft_isprint` — Checks whether a character is printable.

### String Functions

- [x] `ft_strlen` — Calculates the length of a string.
- [x] `ft_strlcpy` — Copies a string into a destination buffer with size control.
- [x] `ft_strlcat` — Appends a string to a destination buffer with size control.
- [x] `ft_toupper` — Converts a lowercase letter to uppercase.
- [x] `ft_tolower` — Converts an uppercase letter to lowercase.

### Memory Functions

- [x] `ft_memset` — Fills a memory area with a specified byte.
- [x] `ft_bzero` — Sets a memory area to zero.
- [x] `ft_memcpy` — Copies bytes between non-overlapping memory areas.
- [x] `ft_memmove` — Copies bytes safely when source and destination areas overlap.

## 🚧 Remaining Work

The project is still in progress. Additional functions and utilities will be added as they are implemented and tested.

- [ ] Remaining mandatory Libft functions
- [ ] Additional utility functions
- [ ] Bonus functions, if required

## 🛠️ Compilation

Compile your source files with a C compiler such as `cc` or `gcc`.

The project is developed with strict compiler flags commonly used at 42 School:

```bash
cc -Wall -Wextra -Werror
```

Once the Makefile is implemented, the library will be built using:

```bash
make
```

## 🧪 Testing

Each function is tested against expected behavior, including relevant edge cases. Testing is an ongoing part of development.

## 🎯 Learning Objectives

- Strengthen my understanding of C programming.
- Practice pointers, arrays, strings, and memory manipulation.
- Understand function behavior, return values, and edge cases.
- Develop good coding habits and follow the 42 Norm.
- Build a reusable static library in C.

## 📌 Project Status

This repository is a work in progress. Functions will be marked as completed as implementation and testing advance.

---

*Built with C, curiosity, and persistence.*

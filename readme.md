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
├── libft.pdf
├── Libft_Roadmap.pdf
├── LICENSE
├── readme.md
├── ft_atoi.c
├── ft_bzero.c
├── ft_calloc.c
├── ft_isalnum.c
├── ft_isalpha.c
├── ft_isascii.c
├── ft_isdigit.c
├── ft_isprint.c
├── ft_itoa.c
├── ft_lstadd_back.c
├── ft_lstadd_front.c
├── ft_lstlast.c
├── ft_lstnew.c
├── ft_lstsize.c
├── ft_memchr.c
├── ft_memcmp.c
├── ft_memcpy.c
├── ft_memmove.c
├── ft_memset.c
├── ft_putchar_fd.c
├── ft_putendl_fd.c
├── ft_putnbr_fd.c
├── ft_putstr_fd.c
├── ft_split.c
├── ft_strchr.c
├── ft_strdup.c
├── ft_striteri.c
├── ft_strjoin.c
├── ft_strlcat.c
├── ft_strlcpy.c
├── ft_strlen.c
├── ft_strmapi.c
├── ft_strncmp.c
├── ft_strnstr.c
├── ft_strrchr.c
├── ft_strtrim.c
├── ft_substr.c
├── ft_tolower.c
└── ft_toupper.c
✅ Implemented FunctionsCharacter ClassificationFunctionDescriptionft_isalphaChecks whether a character is alphabeticft_isdigitChecks whether a character is a digitft_isalnumChecks whether a character is alphanumericft_isasciiChecks whether a character belongs to the ASCII rangeft_isprintChecks whether a character is printableCharacter ConversionFunctionDescriptionft_toupperConverts a lowercase letter to uppercaseft_tolowerConverts an uppercase letter to lowercaseString FunctionsFunctionDescriptionft_strlenCalculates the length of a stringft_strchrFinds the first occurrence of a characterft_strrchrFinds the last occurrence of a characterft_strncmpCompares two strings up to a specified number of charactersft_strlcpyCopies a string into a destination buffer with size limitsft_strlcatAppends a string with size limitsft_strnstrSearches for a substring within a specified lengthft_strdupAllocates and creates a duplicate of a stringft_substrExtracts a substring into newly allocated memoryft_strjoinConcatenates two strings into a newly allocated stringft_strtrimRemoves specified characters from the beginning and end of a stringft_splitSplits a string into an array of strings using a delimiterft_strmapiCreates a string by applying a function to each characterft_striteriApplies a function to each character in a string with its indexMemory FunctionsFunctionDescriptionft_memsetFills a memory region with a byte valueft_bzeroSets a memory region to zeroft_memcpyCopies a specified number of bytes between non-overlapping memory regionsft_memmoveCopies memory safely when source and destination overlapft_memchrSearches for a byte in a memory regionft_memcmpCompares two memory regionsMemory Allocation & ConversionFunctionDescriptionft_callocAllocates memory for an array and initializes its bytes to zeroft_atoiConverts the initial numeric portion of a string to an integerft_itoaConverts an integer to a stringFile Descriptor Output FunctionsFunctionDescriptionft_putchar_fdWrites a character to a file descriptorft_putstr_fdWrites a string to a file descriptorft_putendl_fdWrites a string followed by a newline to a file descriptorft_putnbr_fdWrites an integer to a file descriptorLinked List Functions (Bonus)   FunctionDescriptionft_lstnewAllocates and returns a new list nodeft_lstadd_frontAdds a node at the beginning of a listft_lstsizeCounts the number of nodes in a listft_lstlastReturns the last node of a listft_lstadd_backAdds a node at the end of a list🧪 TestingCompile individual functions with the required compiler flags:Bashcc -Wall -Wextra -Werror main.c ft_strlen.c -o test
./test
For functions that depend on other Libft functions, include their source files when compiling, or link against your built library.Test important edge cases, including:Empty strings and null terminators.Zero-length operations.Minimum and maximum integer values.Overlapping memory regions.Allocation failures and multiplication overflow.Correct return values and memory cleanup.🔨 Building the LibraryBuild libft.a using the Makefile:Bashmake
Other Makefile commands:Bashmake clean
make fclean
make re
make bonus
The library can then be linked into another C project:Bashcc main.c -L. -lft -o program
Make sure libft.h declares the functions you implement and that the Makefile includes the corresponding source files.🎯 Project GoalsStrengthen understanding of pointers and memory addresses.Learn dynamic memory allocation with malloc.Understand arrays, strings, and null termination.Handle edge cases and undefined behavior carefully.Write code that follows the 42 Norm and compiler requirements.Build reusable functions for future C projects.📈 Progress[x] Character classification functions[x] Character conversion functions[x] Core memory functions[x] Core string functions[x] ft_calloc and ft_strdup[x] Additional string and conversion functions (ft_substr, ft_strjoin, ft_strtrim, ft_split, ft_itoa, ft_strmapi, ft_striteri)[x] File descriptor output functions (ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd)[x] Linked list bonus functions (ft_lstnew, ft_lstadd_front, ft_lstsize, ft_lstlast, ft_lstadd_back)[x] Complete Makefile and library validationPart of the 42/1337 journey — learning C one function at a time. 🚀
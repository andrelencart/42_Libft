# Libft

## Introduction

Welcome to **Libft!** This is my custom C library, built from scratch as part of the 42 programming school journey. The goal was to recreate a bunch of standard C functions and add some handy tools for working with strings, memory, lists, and more. It’s all about getting comfortable with C, learning how things work under the hood, and building a solid foundation for future coding projects. Feel free to explore, use, or improve anything you find here!

## Overview

Libft is kind of like a starter pack for the 42 Students. We reimplement functions that you’d usually find in headers like `<string.h>` and `<ctype.h>`, plus some bonus helpers. The goal is to really understand memory management, pointers, and all those little details that are essential for mastering C.

## Main Concepts

- **Rewriting Standard Functions:** Everything’s coded from scratch to really get how things work.
- **Memory Management:** Loads of practice with `malloc`, `free`, and how to handle leaks.
- **Reusable Code:** These functions are meant to be used again and again, so clean and efficient code is essential.
- **Learning C Basics:** It’s all about leveling up your C skills for future projects.

### Bonus Features

- **Bonus Linked List Functions:** In addition to the required functions, Libft typically includes a set of bonus functions for singly linked list manipulation, allowing for more advanced data structure handling and practice with pointers.

## Function Categories

### String Manipulation

- `ft_strlen` – Returns the length of a string.
- `ft_strcat` – Concatenates two strings.
- `ft_strdup` – Duplicates a string by allocating new memory.
- `ft_strjoin` – Concatenates two strings into a new string.
- `ft_split` – Splits a string into an array of substrings based on a delimiter.

### Memory Operations

- `ft_calloc` – Allocates memory for an array and initializes it to zero.
- `ft_memset` – Fills a block of memory with a specific byte value.
- `ft_memcpy` – Copies a block of memory from one location to another.
- `ft_memmove` – Copies memory areas, handling overlapping areas correctly.
- `ft_bzero` – Sets all bytes in a block of memory to zero.

### Character Analysis and Conversion

- `ft_isalpha` – Checks if a character is an alphabetic letter.
- `ft_isdigit` – Checks if a character is a digit (0–9).
- `ft_isalnum` – Checks if a character is alphanumeric.
- `ft_toupper` – Converts a lowercase character to uppercase.
- `ft_tolower` – Converts an uppercase character to lowercase.

### Linked List Utilities

- `ft_lstnew` – Creates a new linked list node.
- `ft_lstadd_front` – Adds a new node at the beginning of a linked list.
- `ft_lstadd_back` – Adds a new node at the end of a linked list.
- `ft_lstsize` – Counts the number of nodes in a linked list.

## How to Compile and Use

### 1. Compilation

To build the `libft.a` static library, run:

```bash
make
```

This will compile all the `.c` files and generate `libft.a`.

To clean up object files after compilation:

```bash
make clean
```

To remove all object files and the library:

```bash
make fclean
```

To recompile everything from scratch:

```bash
make re
```
### 2. Using Libft in Your Project

1. **Include the Header**:
   
   In your C source files, include the libft header:
   ```c
   #include "libft.h"
   ```

2. **Link the Library:**
   
   When compiling your project, link with `libft.a` and ensure the compiler can find the header file. For example:
   ```bash
   gcc -I/path/to/libft -L/path/to/libft -lft your_code.c -o your_program
   ```
   Replace `/path/to/libft` with the directory where your `libft` is located.

3. **Example Usage:**
   
   ```c
   #include "libft.h"
   #include <stdio.h>
   
   int main(void)
   {
       char *s = "Hello, World!";
       printf("String length: %zu\n", ft_strlen(s));
       return 0;
   }
   ```
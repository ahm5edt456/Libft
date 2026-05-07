# Comprehensive Explanation of the `libft` Project

The `libft` project is the first foundational project in 42 School.
Its purpose is to make you build your own C library from scratch instead of depending on standard library implementations.

This project teaches much more than writing functions. It develops:

* Memory management skills
* Understanding of strings and pointers
* Clean code practices
* Modular programming
* Debugging abilities
* Low-level programming thinking
* Software engineering discipline

---

# What is `libft`?

`libft` is your own custom C library.

At the end of the project, you generate:

```text
libft.a
```

This is a static library containing your own implementations of common C functions.

You will reuse this library in many future 42 projects.

---

# Main Goals of the Project

The project trains you to:

* Understand how the standard C library works internally
* Write reliable and reusable functions
* Manage memory manually
* Handle edge cases correctly
* Organize a project professionally
* Work with Makefiles
* Think carefully about performance and safety

---

# Core Concepts You Learn

# 1. Memory Management

One of the most important parts.

You learn:

* Dynamic memory allocation
* Heap vs stack
* Buffer sizes
* Null pointers
* Memory safety
* Preventing leaks

Functions related to this:

* `ft_memset`
* `ft_bzero`
* `ft_memcpy`
* `ft_memmove`
* `ft_memchr`
* `ft_memcmp`
* `ft_calloc`

---

# 2. String Manipulation

You deeply understand how C strings work.

You learn:

* Null-terminated strings
* Character iteration
* String copying
* String comparison
* Substrings
* Concatenation

Functions:

* `ft_strlen`
* `ft_strchr`
* `ft_strrchr`
* `ft_strncmp`
* `ft_strdup`
* `ft_substr`
* `ft_strjoin`
* `ft_split`
* `ft_strtrim`
* `ft_strmapi`

---

# 3. Pointer Mastery

`libft` is heavily based on pointers.

You learn:

* Pointer arithmetic
* Passing addresses
* Double pointers
* Memory traversal
* Array/string relationships

Without strong pointer understanding, `libft` becomes very difficult.

---

# 4. Defensive Programming

You must handle:

* `NULL` input
* Empty strings
* Overflow situations
* Invalid memory access
* Allocation failures

Example:

```c
if (!str)
    return (NULL);
```

This mindset is critical for real-world software engineering.

---

# 5. Writing Reusable Functions

Instead of rewriting logic repeatedly, you create reusable utilities.

Example:

You may use:

* `ft_strlen`
  inside:
* `ft_strdup`
* `ft_substr`
* `ft_strjoin`

This teaches modular software design.

---

# 6. Static Libraries

You learn how libraries work internally.

Using:

```bash
ar rcs libft.a *.o
```

You combine object files into a reusable static library.

This is your first exposure to linking and build systems.

---

# 7. Makefiles

You learn automation using:

```Makefile
make
make clean
make fclean
make re
```

Concepts learned:

* Compilation rules
* Dependencies
* Variables
* Build automation

This is extremely important in real development environments.

---

# Structure of the Project

Usually:

```text
libft/
│
├── Makefile
├── libft.h
├── ft_strlen.c
├── ft_strdup.c
├── ft_split.c
└── ...
```

---

# Most Important Functions to Truly Understand

## Memory Functions

* `ft_memset`
* `ft_memcpy`
* `ft_memmove`
* `ft_calloc`

---

## String Functions

* `ft_strlen`
* `ft_strdup`
* `ft_substr`
* `ft_strjoin`
* `ft_split`

---

## Conversion Functions

* `ft_atoi`
* `ft_itoa`

---

## Output Functions

* `ft_putchar_fd`
* `ft_putstr_fd`
* `ft_putnbr_fd`

---

# The Hardest Functions for Most Students

Usually:

## `ft_split`

Because it involves:

* Dynamic allocation
* Multiple strings
* Memory cleanup
* Complex indexing

---

## `ft_itoa`

Because it involves:

* Negative numbers
* Integer limits
* Reversing logic
* Length calculation

---

## `ft_memmove`

Because you must handle overlapping memory correctly.

---

# What Evaluators Care About

At 42, evaluators mainly check:

## Correctness

Does the function behave exactly like the original?

---

## Edge Cases

Examples:

* `NULL`
* empty strings
* negative numbers
* very large input

---

## Memory Leaks

No leaks allowed.

Use:

```bash
valgrind
```

---

## Norm Compliance

Your code must follow the 42 Norm.

---

## Clean Code

Readable names, understandable logic, proper formatting.

---

# Skills You Gain After `libft`

If you truly master `libft`, you become significantly stronger in:

* C programming
* Debugging
* Memory management
* System programming
* Problem solving
* Software architecture basics

And future projects become much easier:

* `get_next_line`
* `so_long`
* `push_swap`
* `minishell`
* `cub3d`

---

# Best Learning Strategy

## Step 1

Understand pointers deeply.

---

## Step 2

Master memory functions first.

Especially:

* `memcpy`
* `memmove`
* `calloc`

---

## Step 3

Move to string functions.

---

## Step 4

Solve difficult functions slowly:

* `split`
* `itoa`

---

## Step 5

Learn debugging tools:

* `gdb`
* `valgrind`

---

# Most Important Mindset

Do not focus only on “passing Moulinette”.

Focus on:

* Why the function works
* How memory behaves
* Why edge cases matter
* How data moves internally

That is where the real learning happens.


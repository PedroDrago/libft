# Libft
This project goal is to write my own C library , with some reproductions of libc, stdlib and other sources functions.

| Function                             | Description                                                                                                                                                                                                                             | External Functions  |
| ------------------------------------ | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------- |
| [ft_isalpha](ft_isalpha.c)           | Checks for an alphabetic character.                                                                                                                                                                                                     | None                |
| [ft_isdigit](ft_isdigit.c)           | Checks for a digit (0 through 9).                                                                                                                                                                                                       | None                |
| [ft_isalnum](ft_isalnum.c)           | Checks for an alphanumeric character.                                                                                                                                                                                                   | None                |
| [ft_isascii](ft_isascii.c)           | Checks whether `c` is a 7-bit unsigned char value that fits into the ASCII character set.                                                                                                                                               | None                |
| [ft_isprint](ft_isprint.c)           | Checks for any printable character including space.                                                                                                                                                                                     | None                |
| [ft_strlen](ft_strlen.c)             | Calculates and returns the length of a string, excluding the terminating null byte ('\\0').                                                                                                                                             | None                |
| [ft_memset](ft_memset.c)             | Fills the first `n` bytes of a memory area with the byte `c`.                                                                                                                                                                           | None                |
| [ft_bzero](ft_bzero.c)               | Erases the data in the `n` bytes of a memory area by writing zeros ('\\0' bytes) to that area.                                                                                                                                          | None                |
| [ft_memcpy](ft_memcpy.c)               | Copies `n` bytes from a source memory area to a destine memory area. The areas may not overlap.                                                                                                                                         | None                |
| [ft_memmove](ft_memmove.c)             | Copies `n` bytes from a source memory area to a destine memory area. The areas may overlap.                                                                                                                                             | None                |
| [ft_strlcpy](ft_strlcpy.c)             | Copies up to `size - 1` characters from the NUL-terminated source string to a destine string, NUL-terminating the result.                                                                                                               | None                |
| [ft_strlcat](ft_strlcat.c)             | Appends at most `size - ft_strlen(destine - 1)` bytes from a NUL-terminated source string to the end of a destine string.                                                                                                               | None                |
| [ft_toupper](ft_toupper.c)           | Converts a letter to its uppercase equivalent.                                                                                                                                                                                          | None                |
| [ft_tolower](ft_tolower.c)           | Converts a letter to its lowercase equivalent.                                                                                                                                                                                          | None                |
| [ft_strchr](ft_strchr.c)             | Returns a pointer to the first occurrence of a character.                                                                                                                                                                               | None                |
| [ft_strrchr](ft_strrchr.c)           | Returns a pointer to the last occurrence of a character.                                                                                                                                                                                | None                |
| [ft_strncmp](ft_strncmp.c)           | Compares two strings.                                                                                                                                                                                                                   | None                |
| [ft_memchr](ft_memchr.c)             | Scans the initial `n` bytes of the memory area for the first instance of `c`.                                                                                                                                                           | None                |
| [ft_memcmp](ft_memcmp.c)             | Compare two memory areas, returning an integer less than, equal to, or greater than zero if the first n bytes of `s1` is found, respectively, to be less than, to match, or be greater than te first n bytes of `s2`                    | None                |
| [ft_strnstr](ft_strnstr.c)           | Locates the first occurrence of a null-terminated smaller string in a bigger string, where not more than `len` characters are searched.                                                                                                 | None                |
| [ft_atoi](ft_atoi.c)                 | Converts the initial portion of a string to `int`                                                                                                                                                                                       | None                |
| [ft_calloc](ft_calloc.c)             | Allocates memory for an array of `nmemb` elements of `size` bytes each. The memory is set to 0                                                                                                                                          | `malloc()`          |
| [ft_strdup](ft_strdup.c)             | Allocates and returns a new string which is a duplicate of the string `s`.                                                                                                                                                              | `malloc()`          |
| [ft_substr](ft_substr.c)             | Allocates and returns a substring from the string `s`.                                                                                                                                                                                  | `malloc()`          |
| [ft_strjoin](ft_strjoin.c)           | Allocates and returns a new string, which is the result of the concatenation of `s1` and `s2`.                                                                                                                                          | `malloc()`          |
| [ft_strtrim](ft_strtrim.c)           | Allocates and returns a copy of `s1` with the characters specified in `set` removed from the beginning and the end of the string.                                                                                                       | `malloc()`          |
| [ft_split](ft_split.c)               | Allocates and returns an array of strings obtained by splitting `s` using the character `c` as delimiter. The string must end with a NULL pointer.                                                                                      | `malloc()` `free()` |
| [ft_itoa](ft_itoa.c)                 | Allocates and returns a string representing the integer received as an argument. Negative numbers must be handled.                                                                                                                      | `malloc()`          |
| [ft_strmapi](ft_strmapi.c)           | Applies the function `f` to each character of the string `s`, and passing its index as first argument to create a new string resulting from successive applications of `f`.                                                             | `malloc()`          |
| [ft_striteri](ft_striteri.c)         | Applies the function `f` on each character of the string passed as argument, passing its index as first argument. Each character is passed by address of `f` to be modified if necessary.                                               | None                |
| [ft_putchar_fd](ft_putchar_fd.c)     | Outputs a character to the given file descriptor.                                                                                                                                                                                       | `write()`           |
| [ft_putstr_fd](ft_putstr_fd.c)       | Outputs a string to the given file descriptor.                                                                                                                                                                                          | `write()`           |
| [ft_putendl_fd](ft_putendl_fd.c)     | Outputs a string to the given file descriptor followed by a newline.                                                                                                                                                                    | `write()`           |
| [ft_putnbr_fd](ft_putnbr_fd.c)       | Outputs an integer to the given file descriptor                                                                                                                                                                                         | `write()`           |
| [ft_lstnew](ft_lstnew_bonus.c)             | Allocates (with malloc(3)) and returns a new node. The member variable `content` is initialized with the value of the parameter `content`. The variable `next` is initialized to `NULL`                                                 | `malloc()`          |
| [ft_lstadd_front](ft_lstadd_front_bonus.c) | Adds the node `new` at the beginning of the list                                                                                                                                                                                        | None                |
| [ft_lstsize](ft_lstsize_bonus.c)           | Counts the number of nodes in a list.                                                                                                                                                                                                   | None                |
| [ft_lstlast](ft_lstlast_bonus.c)           | Returns the last node of the list.                                                                                                                                                                                                      | None                |
| [ft_lstadd_back](ft_lstadd_back_bonus.c)   | Adds the node `new` at the end of the list.                                                                                                                                                                                             | None                |
| [ft_lstdelone](ft_lstdelone_bonus.c)       | Takes as a parameter a node and frees the memory of the node's content using the function `del` gigven as a parameter and free the node. The memory of `next` must not be freed.                                                        | `free()`            |
| [ft_lstclear](ft_lstclear_bonus.c)         | Deletes and frees the given node and every successor of that node, using the function `del` and `free()`. Finally, the pointer to the list must be set to `NULL`.                                                                       | `free()`            |
| [ft_lstiter](ft_lstiter_bonus.c)           | Iterates the list `lst` and applies the function `f` on the content of each node.                                                                                                                                                       | None                |
| [ft_lstmap](ft_lstmap_bonus.c)             | Iterates the list `lst` and applies the function `f` on the content of each node. Creates a new list resulting of the successive applications of the function `f`. The `del` function is used to delete te content of a node if needed. | `malloc()` `free()` |

### How to Build
To build base functions
```bash
make
```
To build bonus functions:
```bash
make bonus
```
This will generate the libft Archive, which can be used in addition to the libft header file to utilize any of the lib functions.

Command to set libft to use for a 42 projetc:
```bash
git clone git@github.com:PedroDrago/libft.git libft && rm -rf libft/README.md libft/.gitignore libft/.git
```

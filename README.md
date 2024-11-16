# libft
This is the initial project for the Software Engineering course at 42, a coding school known for its intensive curriculum. It focuses on fundamental programming concepts, including logic, Bash scripting, C programming, version control, and adherence to best development practices. The core deliverable is a custom C library, named 'libft', which aims to replicate the functionality of the standard C library. This project serves as a foundation for students to develop their programming skills and understanding of software engineering principles.


## Installation Instructions
To install and set up the project, follow these steps:

1. Clone the repository:
   ```bash
   git clone https://github.com/GabrielPachecoS/my-libft-42.git
   ```

2. Navigate to the project directory:
   ```bash
   cd my-libft-42
   ```

3. Compile the library:
   ```bash
   make
   ```

After installing, you can use the following commands to manage your library:

- **Build the library**: 
  ```bash
  make
  ```
  
- **Clean up object files**:
  ```bash
  make clean
  ```

- **Remove the library**:
  ```bash
  make fclean
  ```

- **Rebuild the library**:
  ```bash
  make re
  ```

- **Build bonus features**:
  ```bash
  make bonus
  ```
  
## Usage
To use the library, include the libft.h header in your files:
  ```bash
  #include "libft.h"
  #include <stdio.h>
  int	main(void)
  {
      char	*str;
      int 	len;
      
      str = "Hello, world!";
      len = ft_strlen(str);
      printf ("O tamanho da string é: %d\n", len);
      return (0);
  }
  ```

## Application

### Character/Integer:
 - ft_isdigit - Checks if the character is a digit (0-9).
 - ft_isalpha - Checks if the character is an uppercase or lowercase letter.
 - ft_isalnum - Checks if the character is alphanumeric.
 - ft_isascii - Checks if the character is part of the ASCII table.
 - ft_isprint - Checks if the character is printable.
 - ft_toupper - Converts a lowercase alphabetic character to uppercase.
 - ft_tolower - Converts an uppercase alphabetic character to lowercase.
 - ft_putchar_fd - Prints the specified character to the file descriptor and returns the number of bytes written.
 - ft_putnbr_fd - Converts and prints the number.
 - ft_itoa - Converts an integer to a char *.
### Strings:
 - ft_strlen - Receives a string and returns its length.
 - ft_strlcpy - Copies a string based on its total buffer size and ensures a '\0' at the end of the destination.
 - ft_strlcat - Concatenates two strings based on the total buffer size.
 - ft_strchr - Searches for the specified character in a string starting from the beginning.
 - ft_strrchr - Searches for the specified character in a string starting from the end.
 - ft_strncmp - Compares two strings up to n characters.
 - ft_strnstr - Checks if a substring exists within a string.
 - ft_atoi - Converts a numeric string to an integer.
 - ft_strdup - Creates a copy of the given string with allocated memory.
 - ft_substr - Returns a substring from a string.
 - ft_putstr_fd - Prints the specified string (char *) to the file descriptor and returns the number of characters written.
 - ft_putendl_fd - Performs the same function as ft_putstr_fd and adds a newline at the end.
 - ft_striteri - Iterates over the string, executing a function for each character.
 - ft_strmapi - Iterates over a string, creating a new string where each character is processed by a function.
 - ft_strjoin - Joins two strings into one.
 - ft_strtrim - Trims specified characters from the beginning and end of a string.
 - ft_split - Splits a string into smaller strings based on a delimiter.	
### Memory:
 - ft_memset - Fills the first n bytes pointed to by s with the character c.
 - ft_bzero - Fills the first n bytes pointed to by s with the value 0 (or '\0').
 - ft_memcpy - Copies a block of memory.
 - ft_memmove - Copies a block of memory, allowing overlap.
 - ft_memchr - Searches for a byte in a block of memory.
 - ft_memcmp - Compares two blocks of memory.
 - ft_calloc - Allocates memory and initializes each byte to '\0'.
### Lists:
 - ft_lstnew_bonus - Creates a new node with the received content.
 - ft_lstadd_front_bonus - Adds a node at the beginning of the list.
 - ft_lstsize_bonus - Checks and returns the number of nodes in the list.
 - ft_lstlast_bonus - Returns the last node of the list.
 - ft_lstadd_back_bonus - Adds a node at the end of the list.
 - ft_lstdelone_bonus - Removes a node and its content.
 - ft_lstclear_bonus - Clears a list and all its nodes.
 - ft_lstiter_bonus - Iterates and executes a function on each node's content.
 - ft_lstmap_bonus - Maps the list and its contents, returning new contents in a new list of the same size.

## Contributions

Contributions are welcome! To contribute, please follow these steps:

1. Fork this repository.

2. Create a new branch: 
  ```bash
  git checkout -b my-new-feature
  ```

3. Make your changes and commit: 
  ```bash
  git commit -m "My new feature"
  ```
  
4. Send a pull request.

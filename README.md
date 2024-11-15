# libft
This is the initial project for the Software Engineering course at 42, a coding school known for its intensive curriculum. It focuses on fundamental programming concepts, including logic, Bash scripting, C programming, version control, and adherence to best development practices. The core deliverable is a custom C library, named 'libft', which aims to replicate the functionality of the standard C library. This project serves as a foundation for students to develop their programming skills and understanding of software engineering principles.


## Installation Instructions
To install and set up the project, follow these steps:

1. Clone the repository:
   ```bash
   https://github.com/GabrielPachecoS/my-libft-42.git
   ```

2. Navigate to the project directory:
   ```bash
   cd my-libft-42
   ```

3. Compile the library:
   ```bash
   make
   ```

## Usage
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
  
## Utilização
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
  ´´´
  
## Features

- **Character/Integer**: ft_isdigit, ft_isalpha, ft_isalnum, ft_isascii, ft_isprint, ft_toupper, ft_tolower, ft_putchar_fd, ft_putnbr_fd, ft_itoa
- **Strings**: ft_strlen, ft_strlcpy, ft_strlcat, ft_strchr, ft_strrchr, ft_strncmp, ft_strnstr, ft_atoi, ft_strdup, ft_substr, ft_putstr_fd, ft_putendl_fd, ft_striteri, ft_strmapi, ft_strjoin, ft_strtrim, ft_split
- **Lists**: ft_lstnew_bonus, ft_lstadd_front_bonus, ft_lstsize_bonus, ft_lstlast_bonus, ft_lstadd_back_bonus, ft_lstdelone_bonus, ft_lstclear_bonus, ft_lstiter_bonus, ft_lstmap_bonus
- **Memory**: ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_memchr, ft_memcmp, ft_calloc

## Contributions

Contributions are welcome! To contribute, please follow these steps:

1. Fork this repository.

2. Create a new branch: 
  ```bash
  git checkout -b minha-nova-feature
  ```

3. Make your changes and commit: 
  ```bash
  git commit -m "Minha nova feature"
  ´´´
  
4. Send a pull request.
